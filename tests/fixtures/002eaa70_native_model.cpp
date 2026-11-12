#include <algorithm>
#include <array>
#include <climits>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <limits>
#include <new>
#include <stdexcept>
#include <type_traits>
#include <vector>
#include <sys/mman.h>
#include <unistd.h>
int FUN_002eaa70(short *);
static_assert(std::is_same<decltype(&FUN_002eaa70), int (*)(short *)>::value);
static_assert(CHAR_BIT==8 && sizeof(short)==2 && sizeof(int)==4 && sizeof(void*)==8);
static_assert(SHRT_MIN==-32768 && SHRT_MAX==32767);
static_assert(std::numeric_limits<std::ptrdiff_t>::max()>=0x3fffffff);
static std::size_t cases=0;
static void need(bool condition) { if(!condition) throw std::runtime_error("model mismatch"); }
static short word(std::uint16_t bits) {
 short value; std::memcpy(&value,&bits,2); return value;
}
// Bounded scalar index search is independent of the draft's pointer difference.
static void test(std::vector<short>& data, std::size_t start, std::size_t extent) {
 const auto original=data;
 std::size_t length=0;
 while(length<extent && data[start+length]!=0) ++length;
 need(length<extent && length<=0x3ffffffeU);
 need(FUN_002eaa70(data.data()+start)==static_cast<int>(length));
 need(data==original); ++cases;
}
// Raw DWORD SAR 1 then DEC, without implementation-defined signed shifts or
// out-of-range signed conversions. This model never runs original x86 bytes.
static std::uint32_t sar1(std::uint32_t value) {
 return (value>>1)|(value&0x80000000U);
}
int main() try {
 constexpr std::array<std::size_t,8> lengths={0,1,2,3,7,8,15,31};
 // Exhaust every nonzero 16-bit bit pattern, including sign bit and zero bytes.
 for(unsigned value=1;value<65536;++value)
  for(auto len:lengths)
   for(std::size_t offset=0;offset<4;++offset) {
    std::vector<short> data(len+offset+65,word(0x5a5a));
    std::fill(data.begin()+static_cast<std::ptrdiff_t>(offset),data.begin()+static_cast<std::ptrdiff_t>(offset+len),word(static_cast<std::uint16_t>(value)));
    data[offset+len]=0;
    // Deterministic zero padding keeps admitted stride/read mutants in-bounds.
    std::fill(data.begin()+static_cast<std::ptrdiff_t>(offset+len+1),data.end(),0);
    test(data,offset,len+1);
   }
 std::uint64_t state=0x89abcdef12345678ULL;
 auto next=[&]() {state^=state<<13;state^=state>>7;state^=state<<17;return state;};
 for(unsigned trial=0;trial<10000;++trial) {
  const auto len=static_cast<std::size_t>(next()%4097);
  const auto offset=static_cast<std::size_t>(next()%32);
  std::vector<short> data(len+offset+65,0);
  for(std::size_t i=0;i<len;++i)data[offset+i]=word(static_cast<std::uint16_t>(next()%65535+1));
  test(data,offset,len+1);
 }
 // Exact live-object extent, terminator at the last element.
 for(std::size_t len=0;len<=4096;++len) {
  std::vector<short> data(len+1,word(0xffff));data[len]=0;
  test(data,0,len+1);
 }
 // Read-only middle page with inaccessible neighbors: no extra read/write.
 const long page_result=sysconf(_SC_PAGESIZE);need(page_result==4096);
 const auto page=static_cast<std::size_t>(page_result);
 auto* region=static_cast<unsigned char*>(mmap(nullptr,3*page,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));
 need(region!=MAP_FAILED);need(mprotect(region+page,page,PROT_READ|PROT_WRITE)==0);
 auto* live=::new (static_cast<void*>(region+page)) short[page/sizeof(short)];
 need(static_cast<void*>(live)==static_cast<void*>(region+page));
 std::fill(live,live+page/2,word(0xffff));live[page/2-1]=0;
 need(mprotect(region+page,page,PROT_READ)==0);
 for(std::size_t len=0;len<page/2;++len) {
  need(FUN_002eaa70(live+page/2-len-1)==static_cast<int>(len));++cases;
 }
 need(munmap(region,3*page)==0);
 // Integer-only full-contract samples; no giant arrays or native pointers
 // outside an allocation are made. Two INCs/iteration and final SUB/SAR/DEC.
 std::size_t arithmetic=0;
 constexpr std::array<std::uint32_t,10> anchors={0,1,2,255,65535,65536,0x1fffffff,0x3ffffffc,0x3ffffffd,0x3ffffffe};
 auto subcase=[&](std::uint32_t len,std::uint32_t base) {
  const auto bytes=2ULL*(std::uint64_t(len)+1);
  const auto wideend=std::uint64_t(base)+bytes;
  need(base!=0 && len<=0x3ffffffeU && wideend<=UINT32_MAX);
  const auto end=static_cast<std::uint32_t>(wideend);
  const std::uint32_t sub=end-base;
  need(sub==bytes && (sub&0x80000000U)==0);
  need(sar1(sub)-1u==len); ++arithmetic;
 };
 for(auto len:anchors){subcase(len,1);subcase(len,0x1000);subcase(len,UINT32_MAX-2u*(len+1u));}
 for(unsigned t=0;t<100000;++t){auto len=static_cast<std::uint32_t>(next()%0x3fffffffU);auto maxbase=UINT32_MAX-2u*(len+1u);auto base=static_cast<std::uint32_t>(next()%maxbase+1);subcase(len,base);}
 // The next L is intentionally excluded: original SAR yields a negative result.
 need(sar1(2u*(0x3fffffffU+1u))-1u==0xbfffffffU);
 need(sar1(2u*(0x3fffffffU+1u))-1u!=0x3fffffffU);
 need(cases==2113265 && arithmetic==100030);
 std::printf("%zu initialized native cases; %zu independent DWORD arithmetic cases passed\n",cases,arithmetic);
} catch(const std::exception& error) {
 std::fprintf(stderr,"MODEL_MISMATCH: %s\n",error.what());return 42;
}
