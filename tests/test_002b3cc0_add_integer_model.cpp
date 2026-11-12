#include "bf_002b3cc0_add_operation.h"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
void FUN_002b3cc0(float *,float *);
int main(int argc,char**argv){
 if(argc!=2)return 2;
 const auto saved=_mm_getcsr();
 struct alignas(16) State{unsigned char b[512];}state{};
 __asm__ volatile("fxsave %0":"=m"(state)::"memory");
 std::uint32_t mask;std::memcpy(&mask,state.b+28,4);
 if((mask&0xffff)!=0xffff){std::fprintf(stderr,"host lacks required MXCSR modes\n");return 2;}
 struct Restore{unsigned csr;~Restore(){_mm_setcsr(csr);}}restore{saved};
 FILE*f=std::fopen(argv[1],"rb");if(!f)return 2;
 std::array<std::uint32_t,11>c{};std::uint64_t n=0;
 while(std::fread(c.data(),sizeof(c),1,f)==1){
  for(unsigned sticky=0;sticky<64;++sticky){
   alignas(16) float a[5],b[5];const std::uint32_t canary=0xa567bcde;
   std::memcpy(a,&canary,4);std::memcpy(a+4,&canary,4);std::memcpy(a+1,c.data()+1,12);
   std::memcpy(b,&canary,4);std::memcpy(b+4,&canary,4);std::memcpy(b+1,c.data()+4,12);
   _mm_setcsr(c[0]|sticky);FUN_002b3cc0(a+1,b+1);const auto got=_mm_getcsr();
   std::uint32_t aw[5],bw[5];std::memcpy(aw,a,20);std::memcpy(bw,b,20);
   if(std::memcmp(aw+1,c.data()+7,12)||got!=(c[10]|sticky)||aw[0]!=canary||aw[4]!=canary||bw[0]!=canary||bw[4]!=canary||std::memcmp(bw+1,c.data()+4,12)){
    std::fprintf(stderr,"FAIL case=%llu csr=%08x sticky=%02x status=%08x/%08x\n",(unsigned long long)n,c[0],sticky,got,c[10]|sticky);
    for(unsigned i=0;i<3;++i)std::fprintf(stderr,"lane%u %08x + %08x -> %08x/%08x\n",i,c[i+1],c[i+4],aw[i+1],c[i+7]);
    return 1;
   }
  }++n;
 }
 const bool bad=std::ferror(f)||n!=84032||std::ftell(f)!=static_cast<long>(n*sizeof(c));std::fclose(f);if(bad)return 2;
 std::printf("Independent integer model: %llu cases with all 64 sticky seeds (%llu comparisons)\n",(unsigned long long)n,(unsigned long long)(n*64));
}
