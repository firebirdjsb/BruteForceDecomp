// Tests the proposed native C++ wrapper, never original machine code.
// Fixture format: little-endian 23 uint32_t words: MXCSR, m[15], v[3],
// expected output[3], expected full MXCSR. x86/SSE host required.
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
void FUN_002b7360(float*,float*,float*);
int main(int argc,char**argv){
 if(argc!=2&&argc!=3)return 2;
 const bool single=argc==3&&std::strcmp(argv[2],"--single-anchor")==0;
 if(argc==3&&!single)return 2;
 const auto saved=_mm_getcsr();
 struct Restore{unsigned csr;~Restore(){_mm_setcsr(csr);}}restore{saved};
 struct alignas(16) State{unsigned char b[512];}state{};
 __asm__ volatile("fxsave %0":"=m"(state)::"memory");
 std::uint32_t mask;std::memcpy(&mask,state.b+28,4);
 if((mask&0xffff)!=0xffff){std::fprintf(stderr,"host lacks required MXCSR modes\n");return 2;}
 FILE*f=std::fopen(argv[1],"rb");if(!f)return 2;
 struct Close{FILE*f;~Close(){std::fclose(f);}}close{f};
 std::array<std::uint32_t,23>c{};std::uint64_t n=0,comparisons=0;
 // m and v are disjoint; output covers exact and partial overlap with either.
 constexpr unsigned destinations[]={40,4,5,8,12,16,17,24,25};
 while(std::fread(c.data(),sizeof(c),1,f)==1){
  for(unsigned layout=0;layout<9;++layout){
   const unsigned seeds=layout==0&&n%11656<52?64:(layout==0?2:1);
   for(unsigned seed=0;seed<seeds;++seed){
    const unsigned sticky=seeds==64?seed:(seed==0?0:static_cast<unsigned>(n%63)+1);
    alignas(16) float arena[48];std::array<std::uint32_t,48>expected{},actual{};
    expected.fill(0xa567bcde);std::memcpy(expected.data()+4,c.data()+1,60);std::memcpy(expected.data()+24,c.data()+16,12);
    std::memcpy(arena,expected.data(),sizeof(arena));
    const auto dst=destinations[layout];std::memcpy(expected.data()+dst,c.data()+19,12);
    _mm_setcsr(c[0]|sticky);FUN_002b7360(arena+4,arena+24,arena+dst);const auto got=_mm_getcsr();
    std::memcpy(actual.data(),arena,sizeof(arena));++comparisons;
    if(actual!=expected||got!=(c[22]|sticky)){
     std::fprintf(stderr,"FAIL case=%llu layout=%u csr=%08x sticky=%02x status=%08x/%08x\n",(unsigned long long)n,layout,c[0],sticky,got,c[22]|sticky);
     for(unsigned i=0;i<3;++i)std::fprintf(stderr,"lane%u %08x/%08x\n",i,actual[dst+i],c[19+i]);
     return 1;
    }
   }
  }++n;
 }
 const bool bad=std::ferror(f)||n!=(single?1u:186496u)||std::ftell(f)!=static_cast<long>(n*sizeof(c));
 if(bad){std::fprintf(stderr,"bad corpus count=%llu\n",(unsigned long long)n);return 2;}
 std::printf("Proposed native wrapper vs integer model: %llu records, %llu comparisons; 9 output layouts; all sticky seeds on named anchors\n",(unsigned long long)n,(unsigned long long)comparisons);
}
