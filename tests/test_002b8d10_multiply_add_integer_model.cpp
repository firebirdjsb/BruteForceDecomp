#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
void FUN_002b8d10(float*,float*,float);
int main(int argc,char**argv){
 if(argc!=2&&argc!=3)return 2;
 const bool single=argc==3&&std::strcmp(argv[2],"--single-anchor")==0;
 if(argc==3&&!single)return 2;
 const auto saved=_mm_getcsr();
 struct alignas(16) State{unsigned char b[512];}state{};
 __asm__ volatile("fxsave %0":"=m"(state)::"memory");
 std::uint32_t mask;std::memcpy(&mask,state.b+28,4);
 if((mask&0xffff)!=0xffff){std::fprintf(stderr,"host lacks required MXCSR modes\n");return 2;}
 struct Restore{unsigned csr;~Restore(){_mm_setcsr(csr);}}restore{saved};
 FILE*f=std::fopen(argv[1],"rb");if(!f)return 2;
 std::array<std::uint32_t,12>c{};std::uint64_t n=0;
 while(std::fread(c.data(),sizeof(c),1,f)==1){
  for(unsigned sticky=0;sticky<64;++sticky){
   alignas(16) float d[5],v[5];const std::uint32_t canary=0xa567bcde;
   for(unsigned i=0;i<5;++i){std::memcpy(d+i,&canary,4);std::memcpy(v+i,&canary,4);}
   std::memcpy(d+1,c.data()+1,12);std::memcpy(v+1,c.data()+4,12);float s;std::memcpy(&s,c.data()+7,4);
   _mm_setcsr(c[0]|sticky);FUN_002b8d10(d+1,v+1,s);const auto got=_mm_getcsr();
   std::uint32_t dw[5],vw[5];std::memcpy(dw,d,20);std::memcpy(vw,v,20);
   if(std::memcmp(dw+1,c.data()+8,12)||got!=(c[11]|sticky)||dw[0]!=canary||dw[4]!=canary||vw[0]!=canary||vw[4]!=canary||std::memcmp(vw+1,c.data()+4,12)){
    std::fprintf(stderr,"FAIL case=%llu csr=%08x sticky=%02x status=%08x/%08x scalar=%08x\n",(unsigned long long)n,c[0],sticky,got,c[11]|sticky,c[7]);
    for(unsigned i=0;i<3;++i){std::fprintf(stderr,"lane%u base=%08x vector=%08x -> %08x/%08x\n",i,c[i+1],c[i+4],dw[i+1],c[i+8]);}return 1;
   }
  }++n;
 }
 const bool bad=std::ferror(f)||n!=(single?1u:731488u)||std::ftell(f)!=static_cast<long>(n*sizeof(c));std::fclose(f);if(bad){std::fprintf(stderr,"bad corpus count=%llu\n",(unsigned long long)n);return 2;}
 std::printf("Independent integer model: %llu cases with all 64 sticky seeds (%llu comparisons)\n",(unsigned long long)n,(unsigned long long)(n*64));
}
