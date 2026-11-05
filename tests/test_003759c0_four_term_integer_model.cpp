#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
void FUN_003759c0(std::uint64_t*,float*,float,float*);
int main(int argc,char**argv){
 if(argc!=2&&argc!=3)return 2;
 const bool single=argc==3&&std::strcmp(argv[2],"--single-anchor")==0;
 if(argc==3&&!single)return 2;
 struct alignas(16) State{unsigned char b[512];}state{};
 __asm__ volatile("fxsave %0":"=m"(state)::"memory");
 std::uint32_t mask;std::memcpy(&mask,state.b+28,4);
 if((mask&0xffff)!=0xffff){std::fprintf(stderr,"host lacks required MXCSR modes\n");return 2;}
 struct Restore{unsigned csr;~Restore(){_mm_setcsr(csr);}}restore{_mm_getcsr()};
 FILE*f=std::fopen(argv[1],"rb");if(!f)return 2;
 std::array<std::uint32_t,25>c{};std::uint64_t n=0;
 while(std::fread(c.data(),sizeof(c),1,f)==1){
  for(unsigned sticky=0;sticky<64;++sticky){
   alignas(16) float d[8],v[5],r[24];const std::uint32_t canary=0xa567bcde;
   for(unsigned i=0;i<8;++i)std::memcpy(d+i,&canary,4);
   for(unsigned i=0;i<5;++i)std::memcpy(v+i,&canary,4);
   for(unsigned i=0;i<24;++i)std::memcpy(r+i,&canary,4);
   std::memcpy(v+1,c.data()+1,12);std::memcpy(r+4,c.data()+5,64);float s;std::memcpy(&s,c.data()+4,4);
   _mm_setcsr(c[0]|sticky);FUN_003759c0(reinterpret_cast<std::uint64_t*>(d+2),v+1,s,r+4);const auto got=_mm_getcsr();
   std::uint32_t dw[8],vw[5],rw[24];std::memcpy(dw,d,32);std::memcpy(vw,v,20);std::memcpy(rw,r,96);
   bool bad=std::memcmp(dw+2,c.data()+21,12)||got!=(c[24]|sticky)||std::memcmp(vw+1,c.data()+1,12)||std::memcmp(rw+4,c.data()+5,64);
   for(unsigned i=0;i<8;++i)if((i<2||i>=5)&&dw[i]!=canary)bad=true;
   for(unsigned i=0;i<24;++i)if((i<4||i>=20)&&rw[i]!=canary)bad=true;
   if(vw[0]!=canary||vw[4]!=canary)bad=true;
   if(bad){
    std::fprintf(stderr,"FAIL case=%llu csr=%08x sticky=%02x status=%08x/%08x\n",(unsigned long long)n,c[0],sticky,got,c[24]|sticky);
    for(unsigned i=0;i<3;++i){std::fprintf(stderr,"lane%u -> %08x/%08x\n",i,dw[i+2],c[i+21]);}
    return 1;
   }
  }++n;
 }
 const bool bad=std::ferror(f)||n!=(single?1u:213728u)||std::ftell(f)!=static_cast<long>(n*sizeof(c));std::fclose(f);
 if(bad){std::fprintf(stderr,"bad corpus count=%llu\n",(unsigned long long)n);return 2;}
 std::printf("Independent integer model: %llu cases, all 64 sticky seeds (%llu comparisons)\n",(unsigned long long)n,(unsigned long long)(n*64));
}
