#include <algorithm>
#include <array>
#include <climits>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <type_traits>
#include <cstring>
#include <limits>
#include <new>
#include <stdexcept>
#include <vector>
#include <sys/mman.h>
#include <unistd.h>
// This declaration must continue matching the complete canonical source.
int FUN_00343343(char *);
static_assert(std::is_same<decltype(&FUN_00343343), int (*)(char *)>::value);
static_assert(CHAR_BIT==8 && sizeof(int)==4 && sizeof(void*)==8);
static_assert(std::numeric_limits<std::ptrdiff_t>::max()>=INT_MAX);
static std::size_t cases=0;
static void need(bool condition) { if(!condition) throw std::runtime_error("model mismatch"); }
// Independent count uses a bounded first-zero search, rather than pointer subtraction.
static void test(std::vector<char>& data, std::size_t start, std::size_t extent) {
 const auto original=data;
 auto first=data.begin()+static_cast<std::ptrdiff_t>(start);
 auto end=first+static_cast<std::ptrdiff_t>(extent);
 auto found=std::find(first,end,0);
 need(found!=end);
 const auto length=static_cast<std::size_t>(std::distance(first,found));
 need(length<=static_cast<std::size_t>(INT_MAX));
 const int result=FUN_00343343(data.data()+start);
 need(result==static_cast<int>(length));
 need(data==original);
 ++cases;
}
int main() try {
 need(FUN_00343343(nullptr)==0);++cases;
 for(unsigned int value=1;value<256;++value)
  for(std::size_t len=0;len<=129;++len)
   for(std::size_t offset=0;offset<16;++offset) {
    std::vector<char> data(len+offset+17,static_cast<char>(0x5a));
    // memcpy expresses every raw nonzero byte without signed-char narrowing.
    const auto byte=static_cast<unsigned char>(value);
    for(std::size_t i=0;i<len;++i) std::memcpy(&data[offset+i],&byte,1);
    data[offset+len]=0;
    // A second zero behind the first may not lengthen the answer.
    data.back()=0;
    test(data,offset,len+1);
   }
 std::uint64_t state=0x89abcdef12345678ULL;
 auto next=[&]() {state^=state<<13;state^=state>>7;state^=state<<17;return state;};
 for(unsigned trial=0;trial<10000;++trial) {
  const auto len=static_cast<std::size_t>(next()%4097);
  const auto offset=static_cast<std::size_t>(next()%32);
  std::vector<char> data(len+offset+17,static_cast<char>(0x55));
  for(std::size_t i=0;i<len;++i){ auto b=static_cast<unsigned char>(next()%255+1); std::memcpy(&data[offset+i],&b,1); }
  data[offset+len]=0;test(data,offset,len+1);
 }
 // Exact allocation extent: final increment is exactly one past the object.
 for(std::size_t len=0;len<=4096;++len) {
  std::vector<char> data(len+1,static_cast<char>(0x7f));data[len]=0;
  test(data,0,len+1);
 }
 // Native address-span boundary: terminator is the last readable byte.
 const auto page=static_cast<std::size_t>(sysconf(_SC_PAGESIZE));
 auto* region=static_cast<char*>(mmap(nullptr,3*page,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));
 need(region!=MAP_FAILED);need(mprotect(region+page,page,PROT_READ|PROT_WRITE)==0);
 need(page==4096); // Keep fixture case counts and page-boundary coverage explicit.
 // C++17: explicitly establish the live char-array object before accessing it.
 auto* live=::new (static_cast<void*>(region+page)) char[page];need(live==region+page);
 std::memset(live,0xff,page);live[page-1]=0;
 need(mprotect(region+page,page,PROT_READ)==0);
 for(std::size_t len=0;len<page;++len) {
  auto* start=live+page-len-1;
  need(FUN_00343343(start)==static_cast<int>(len));++cases;
 }
 need(munmap(region,3*page)==0);
 // Separate integer-only proof samples for the 32-bit SUB. No huge array or
 // out-of-object native pointer is fabricated. For each admitted L and G,
 // G+L+1 <= UINT32_MAX, and EAX-(G+1) is exactly L <= INT_MAX.
 std::size_t arithmetic=0;
 constexpr std::array<std::uint32_t,9> anchors={0,1,2,255,65535,65536,0x3fffffff,0x7ffffffe,0x7fffffff};
 auto subcase=[&](std::uint32_t len,std::uint32_t base) {
  const auto wideend=std::uint64_t(base)+len+1;
  need(base!=0 && wideend<=UINT32_MAX && len<=INT_MAX);
  const auto end=static_cast<std::uint32_t>(wideend);
  const std::uint32_t sub=end-(base+1u);
  need(sub==len && sub<=INT_MAX);
  ++arithmetic;
 };
 for(auto len:anchors){subcase(len,1);subcase(len,0x1000);subcase(len,UINT32_MAX-len-1);}
 for(unsigned t=0;t<100000;++t){auto len=static_cast<std::uint32_t>(next()&0x7fffffffU);auto maxbase=UINT32_MAX-len-1;auto base=static_cast<std::uint32_t>(next()%maxbase+1);subcase(len,base);}
 need(cases==548594 && arithmetic==100027);
 std::printf("%zu initialized native cases; %zu independent DWORD arithmetic cases passed\n",cases,arithmetic);
} catch(const std::exception& error) {
 std::fprintf(stderr,"MODEL_MISMATCH: %s\n",error.what());return 42;
}
