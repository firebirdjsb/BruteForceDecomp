#include <algorithm>
#include <array>
#include <climits>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <limits>
#include <vector>
#include "0034e2e0.test-seam.inc"
static_assert(CHAR_BIT == 8 && sizeof(uint) == 4 && sizeof(int) == 4);
static std::uint64_t native_cases=0, model_cases=0, arithmetic_cases=0;
static void need(bool value) { if (!value) { std::fprintf(stderr,"failure: native=%llu model=%llu arithmetic=%llu\n",static_cast<unsigned long long>(native_cases),static_cast<unsigned long long>(model_cases),static_cast<unsigned long long>(arithmetic_cases)); std::abort(); } }
static std::uint32_t rng=0x34e2e0u;
static std::uint32_t next() { rng=rng*1664525u+1013904223u; return rng; }
// Independent array-index insertion oracle, with no host pointer conversions.
static void indexed(std::vector<uint>& a) {
 const auto n=static_cast<std::int64_t>(a.size());
 std::int64_t h=1;
 while(h<=n/9) h=3*h+1;
 for(;h>0;h/=3) for(std::int64_t i=h;i<n;i+=h) {
  const auto v=a[static_cast<std::size_t>(i)]; auto j=i;
  while(j>=h && a[static_cast<std::size_t>(j-h)]>v) { a[static_cast<std::size_t>(j)]=a[static_cast<std::size_t>(j-h)]; j-=h; }
  a[static_cast<std::size_t>(j)]=v;
 }
}
// Independent DWORD address/register schedule. Addresses are unsigned values,
// not pointers. The explicit model maps each access by modular difference.
// It does not establish a guest mapper, real faults, flags or CPU execution.
static void raw_model(std::vector<uint>& a, std::uint32_t esi) {
 const auto n=static_cast<std::int32_t>(a.size());
 std::int32_t ecx=1;
 const std::int32_t quotient=n/9;
 if(quotient>=1) do {ecx=ecx*3+1;} while(ecx<=quotient);
 auto read=[&](std::uint32_t at) { const auto offset=at-esi; need((offset&3)==0 && offset/4<a.size()); return a[offset/4]; };
 auto write=[&](std::uint32_t at,uint value) { const auto offset=at-esi; need((offset&3)==0 && offset/4<a.size()); a[offset/4]=value; };
 do {
  std::int32_t arg8=ecx;
  if(ecx<n) {
   std::uint32_t local4=esi;
   do {
    std::int32_t eax=arg8;
    const auto edx=read(esi+static_cast<std::uint32_t>(eax)*4u);
    if(eax>=ecx) {
     std::uint32_t ebx=local4;
     do {
      const auto edi=read(ebx);
      if(edi<=edx) break;
      write(esi+static_cast<std::uint32_t>(eax)*4u,edi);
      eax-=ecx; ebx-=static_cast<std::uint32_t>(ecx)*4u;
      // The last cursor can be before the logical base; it is not read again.
     } while(eax>=ecx);
    }
    arg8+=ecx;
    write(esi+static_cast<std::uint32_t>(eax)*4u,edx);
    local4+=static_cast<std::uint32_t>(ecx)*4u;
   } while(arg8<n);
  }
  ecx/=3;
 } while(ecx>0);
}
static void check(const std::vector<uint>& input) {
 const std::size_t n=input.size(), origin=n+5;
 std::vector<uint> whole(2*n+10);
 for(std::size_t i=0;i<whole.size();++i) whole[i]=0xa5a50000u+static_cast<uint>(i);
 std::copy(input.begin(),input.end(),whole.begin()+static_cast<std::ptrdiff_t>(origin));
 const auto before=whole;
 bounded_native_0034e2e0(whole.data()+origin,static_cast<int>(n));
 auto oracle=input; indexed(oracle);
 auto sorted=input; std::sort(sorted.begin(),sorted.end()); need(oracle==sorted);
 for(std::size_t i=0;i<whole.size();++i) need(whole[i]==(i>=origin && i<origin+n?oracle[i-origin]:before[i]));
 ++native_cases;
 const std::array<std::uint32_t,4> bases={0u,0x7ffffffcu,0xfffffffcu,next()};
 for(auto base:bases) { auto raw=input;raw_model(raw,base);need(raw==oracle);++model_cases; }
}
static void boundary_arithmetic() {
 const std::array<int,22> ns={2,3,4,8,9,10,12,13,26,27,39,40,80,81,120,121,1024,65535,0x3ffffffd,0x3ffffffe,0x3fffffff,0x2aaaaaaa};
 for(auto n:ns) {
  std::int64_t h=1;
  if(n/9>0) do { h=3*h+1;need(h<=INT_MAX); } while(h<=n/9);
  need(h<=n);
  for(;h>0;h/=3) if(h<n) {
   const std::int64_t last=((n-1)/h)*h;
   const std::int64_t next_index=last+h;
   need(last<n && last>=h && next_index>=n && next_index<=INT_MAX);
   need(-h>=-n && last<n); // formed cursor prefix and final local_8
   for(auto base: {0u,1u,0x7fffffffu,0x80000000u,0xfffffffcu,0xffffffffu}) {
    for(auto index: {std::int64_t(0),h,last}) {
     const auto offset=static_cast<std::uint32_t>(index*4);
     need((base+offset)-base==offset);
     need((base+offset-static_cast<std::uint32_t>(h*4))==base+static_cast<std::uint32_t>((index-h)*4));
     ++arithmetic_cases;
    }
   }
  }
 }
}
int main() {
 // All signed counts <=1 are no-access, including INT_MIN (division by 9).
 for(auto n: {INT_MIN,-65536,-9,-1,0,1}) {bounded_native_0034e2e0(nullptr,n);++native_cases;}
 for(std::size_t n=0;n<=8;++n) {
  const std::uint64_t combinations=std::uint64_t(1)<<(2*n);
  for(std::uint64_t code=0;code<combinations;++code) {
   auto bits=code;std::vector<uint>a(n);
   for(auto& v:a) {v=std::array<uint,4>{0u,1u,0x80000000u,0xffffffffu}[bits&3];bits>>=2;}
   check(a);
  }
 }
 for(std::size_t n=0;n<=512;++n) for(unsigned pattern=0;pattern<7;++pattern) {
  std::vector<uint>a(n);
  for(std::size_t i=0;i<n;++i) a[i]=pattern==0?0u:pattern==1?static_cast<uint>(i):pattern==2?static_cast<uint>(n-i):pattern==3?0xffffffffu:pattern==4?(i%2?0xffffffffu:0u):pattern==5?(next()%5):next();
  check(a);
 }
 for(unsigned i=0;i<20000;++i) {std::vector<uint>a(next()%129);for(auto&v:a)v=next();check(a);}
 for(unsigned i=0;i<30;++i) {std::vector<uint>a(1024+next()%1025);for(auto&v:a)v=next();check(a);}
 boundary_arithmetic();
 std::printf("%llu initialized native cases; %llu independent DWORD memory models; %llu boundary arithmetic identities passed\n",static_cast<unsigned long long>(native_cases),static_cast<unsigned long long>(model_cases),static_cast<unsigned long long>(arithmetic_cases));
}
