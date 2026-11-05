#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
void FUN_002ccc10(float*,float*,float*,float*);
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
 std::array<std::uint32_t,14>c{};std::uint64_t n=0;
 while(std::fread(c.data(),sizeof(c),1,f)==1){
  for(unsigned sticky=0;sticky<64;++sticky){
   alignas(16) float data[4][5];const std::uint32_t canary=0xa567bcde;
   for(unsigned j=0;j<4;++j)for(unsigned i=0;i<5;++i)std::memcpy(data[j]+i,&canary,4);
   for(unsigned j=1;j<4;++j)std::memcpy(data[j]+1,c.data()+1+(j-1)*3,12);
   _mm_setcsr(c[0]|sticky);FUN_002ccc10(data[0]+1,data[1]+1,data[2]+1,data[3]+1);const auto got=_mm_getcsr();
   std::uint32_t words[4][5];std::memcpy(words,data,sizeof words);
   bool ok=!std::memcmp(words[0]+1,c.data()+10,12)&&got==(c[13]|sticky);
   for(unsigned j=0;j<4;++j){ok=ok&&words[j][0]==canary&&words[j][4]==canary;if(j)ok=ok&&!std::memcmp(words[j]+1,c.data()+1+(j-1)*3,12);}
   if(!ok){
    std::fprintf(stderr,"FAIL case=%llu csr=%08x sticky=%02x status=%08x/%08x\n",(unsigned long long)n,c[0],sticky,got,c[13]|sticky);
    for(unsigned i=0;i<3;++i)std::fprintf(stderr,"lane%u base=%08x third=%08x fourth=%08x -> %08x/%08x\n",i,c[i+1],c[i+4],c[i+7],words[0][i+1],c[i+10]);
    return 1;
   }
  }++n;
 }
 const bool bad=std::ferror(f)||n!=(single?1u:731552u)||std::ftell(f)!=static_cast<long>(n*sizeof(c));std::fclose(f);if(bad){std::fprintf(stderr,"bad corpus count=%llu\n",(unsigned long long)n);return 2;}
 std::printf("Independent integer model: %llu cases with all 64 sticky seeds (%llu comparisons)\n",(unsigned long long)n,(unsigned long long)(n*64));
}
