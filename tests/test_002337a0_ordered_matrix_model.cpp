/* Shared transport harness for two independently composed uint32 models. */
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
std::uint64_t *FUN_002337a0(std::uint64_t*,float*,float*);
int main(int argc,char**argv){
 if(argc!=2)return 2;
 struct alignas(16) State{unsigned char b[512];}state{};__asm__ volatile("fxsave %0":"=m"(state)::"memory");
 std::uint32_t mask;std::memcpy(&mask,state.b+28,4);if((mask&0xffff)!=0xffff)return 2;
 struct Restore{unsigned csr;~Restore(){_mm_setcsr(csr);}}restore{_mm_getcsr()};
 FILE*f=std::fopen(argv[1],"rb");if(!f)return 2;
 std::array<std::uint32_t,197>c{};std::uint64_t n=0;
 while(std::fread(c.data(),sizeof(c),1,f)==1){
  if(c[1]>80||c[2]>80||c[3]>80||(c[3]&1))return 2;
  for(unsigned sticky=0;sticky<64;++sticky){
   alignas(16) float memory[96];std::memcpy(memory,c.data()+4,384);
   auto*out=reinterpret_cast<std::uint64_t*>(memory+c[3]);
   _mm_setcsr(c[0]|sticky);auto*ret=FUN_002337a0(out,memory+c[1],memory+c[2]);const auto got=_mm_getcsr();
   if(ret!=out||std::memcmp(memory,c.data()+100,384)||got!=(c[196]|sticky)){
    std::fprintf(stderr,"FAIL case=%llu csr=%08x sticky=%02x status=%08x/%08x return=%s\n",(unsigned long long)n,c[0],sticky,got,c[196]|sticky,ret==out?"ok":"bad");return 1;
   }
  }++n;
 }
 const bool bad=std::ferror(f)||!n||std::ftell(f)!=static_cast<long>(n*sizeof(c));std::fclose(f);if(bad)return 2;
 std::printf("Mutable memory model: %llu records; %llu all-64-sticky comparisons\n",(unsigned long long)n,(unsigned long long)(n*64));
}
