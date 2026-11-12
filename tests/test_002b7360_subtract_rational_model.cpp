// Reviewer-only scalar SUB isolation, no original machine code.
// All upper lanes initialized by MOVD; SUBSS checks the scalar operation only.
// The packed operation graph is separately exercised by the full rational suite.
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
int main(int argc,char**argv){
 if(argc!=2)return 2;
 struct alignas(16) State{unsigned char b[512];}state{};
 __asm__ volatile("fxsave %0":"=m"(state)::"memory");
 std::uint32_t mask;std::memcpy(&mask,state.b+28,4);if((mask&0xffff)!=0xffff)return 2;
 const unsigned saved=_mm_getcsr();FILE*f=std::fopen(argv[1],"rb");if(!f)return 2;
 std::array<std::uint32_t,5> c{};unsigned long count=0;
 while(std::fread(c.data(),sizeof c,1,f)==1){
  for(unsigned sticky=0;sticky<64;++sticky){
   _mm_setcsr(c[0]|sticky);std::uint32_t out;
   __asm__ volatile("movd %1,%%xmm0\n\tmovd %2,%%xmm1\n\tsubss %%xmm1,%%xmm0\n\tmovd %%xmm0,%0":"=r"(out):"r"(c[1]),"r"(c[2]):"xmm0","xmm1","memory");
   const unsigned csr=_mm_getcsr();
   if(out!=c[3]||csr!=(c[4]|sticky)){_mm_setcsr(saved);std::fprintf(stderr,"scalar SUB failed %lu: %08x-%08x -> %08x/%08x flags %08x/%08x\n",count,c[1],c[2],out,c[3],csr,c[4]|sticky);return 1;}
  }++count;
 }
 _mm_setcsr(saved);const bool bad=std::ferror(f)||std::ftell(f)!=static_cast<long>(count*sizeof(c));std::fclose(f);if(bad||count!=79936)return 2;
 std::printf("Independent scalar SUB isolation: %lu records, %lu all-sticky comparisons\n",count,count*64);
}
