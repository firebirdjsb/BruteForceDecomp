#include <array>
#include <climits>
#include <cstdint>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <limits>
#include "002ee365.test-seam.inc"
static_assert(CHAR_BIT==8 && sizeof(ushort)==2 && sizeof(uint)==4);
static std::uint64_t cases=0, native_cases=0, overlap_cases=0, arithmetic_cases=0;
static void need(bool x) { if(!x) {std::fprintf(stderr,"failed at case %llu\n", static_cast<unsigned long long>(cases));std::abort();} }
// Independent byte-memory model of byte load, 16-bit store, post-store reread.
// Registers and guest addresses are bounded indexes here, never executable bytes.
template<std::size_t N>
static uint model(std::array<unsigned char,N>& m, std::size_t dst, std::size_t src,uint cap) {
 uint eax=0;
 while(eax<cap) {
  need(src+eax<N && dst+1<N);
  const unsigned char v=m[src+eax];
  m[dst]=v; m[dst+1]=0;
  if(m[src+eax]==0) return eax;
  ++eax; dst+=2;
 }
 return eax;
}
static void check_query() {
 std::array<char,530> a{};
 for(std::size_t start=0;start<8;++start) for(std::size_t len=0;len<=512;++len) {
  for(unsigned mode=0;mode<5;++mode) {
   a.fill(static_cast<char>(0x77));
   for(std::size_t n=0;n<len;++n) a[start+n]=static_cast<char>(mode==0?1:mode==1?0x7f:mode==2?0x80:mode==3?0xff:(n%255+1));
   a[start+len]=0;
   const auto before=a;
   for(uint cap: {0u,1u,9u,0x80000000u,0xffffffffu}) {
    need(bounded_native_002ee365(nullptr,a.data()+start,cap)==len);
    need(a==before); ++cases;
   }
  }
 }
}
static void check_copy_disjoint() {
 std::array<char,80> src{};
 std::array<ushort,80> dst{};
 for(unsigned first=0;first<256;++first) for(uint cap=0;cap<=64;++cap) for(unsigned stop: {0u,1u,3u,17u,63u,79u}) {
  for(std::size_t i=0;i<src.size();++i) src[i]=static_cast<char>((i*31+17)%255+1);
  src[0]=static_cast<char>(first); src[stop]=0; dst.fill(0x5aa5);
  const auto original=dst; const auto original_src=src;
  uint expected=0;
  while(expected<cap && src[expected]!=0) ++expected;
  const uint got=bounded_native_002ee365(dst.data()+3,src.data(),cap);
  need(got==expected); need(src==original_src);
  const std::size_t stores=expected<cap?expected+1:expected;
  for(std::size_t i=0;i<dst.size();++i) need(dst[i]==(i>=3&&i<3+stores?static_cast<ushort>(static_cast<unsigned char>(src[i-3])):original[i]));
  ++cases;
 }
 // Zero count: no source access, no store. Destination remains a valid object.
 dst.fill(0x5aa5); const auto before=dst;
 need(bounded_native_002ee365(dst.data(),nullptr,0)==0 && dst==before);++cases;
}
// Overlap is an integer byte-memory model only. No mixed-width native object
// is passed through the copy branch; it has no proved overlap-domain contract.
static void check_overlap_model() {
 std::array<unsigned char,192> mem{};
 for(std::size_t dstword=8;dstword<16;++dstword) for(std::size_t srcbyte=0;srcbyte<49;++srcbyte) {
  for(uint cap=0;cap<=32;++cap) for(unsigned pattern=0;pattern<7;++pattern) {
   for(std::size_t i=0;i<mem.size()/2;++i) {
    const ushort w=static_cast<ushort>(pattern==0?0:pattern==1?0xffff:pattern==2?0x0101:pattern==3?0x8080:pattern==4?0xff00:pattern==5?0x00ff:(i*613+37));
    mem[2*i]=static_cast<unsigned char>(w); mem[2*i+1]=static_cast<unsigned char>(w>>8);
   }
   const uint got=model(mem,2*dstword,srcbyte,cap);
   need(got<=cap); ++cases; ++overlap_cases;
  }
 }
 // The stored high zero alters the subsequent reread. A cached-byte check
 // would return 1 here; the raw instruction schedule and model return 0.
 mem.fill(0x7f); need(model(mem,0,1,1)==0); need(mem[0]==0x7f&&mem[1]==0);++cases;++overlap_cases;
}
static void check_modular_query_arithmetic() {
 // Model-only DWORD arithmetic includes wrap; native correspondence is claimed
 // only where the same live array and bounded difference exist, never guest wrap.
 const std::array<std::uint32_t,9> bases={0,1,2,0x7ffffffe,0x7fffffff,0x80000000,0xfffffffd,0xfffffffe,0xffffffff};
 const std::array<std::uint32_t,10> lengths={0,1,2,15,65535,0x7ffffffe,0x7fffffff,0x80000000,0xfffffffe,0xffffffff};
 for(auto b:bases) for(auto l:lengths) {const std::uint32_t end=b+l+1, first=b+1;need(end-first==l);++cases;++arithmetic_cases;}
 std::uint32_t r=0x1ee365u;
 for(unsigned i=0;i<100000;++i) {r=r*1664525u+1013904223u; const auto b=r;r=r*1664525u+1013904223u;const auto l=r; const std::uint32_t end=b+l+1, first=b+1;need(end-first==l);++cases;++arithmetic_cases;}
}
int main() {
 check_query();check_copy_disjoint();native_cases=cases;
 check_overlap_model();check_modular_query_arithmetic();
 std::printf("%llu initialized native cases; %llu overlap-memory model cases; %llu DWORD arithmetic model cases passed\n",static_cast<unsigned long long>(native_cases),static_cast<unsigned long long>(overlap_cases),static_cast<unsigned long long>(arithmetic_cases));
}
