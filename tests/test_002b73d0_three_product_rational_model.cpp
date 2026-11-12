#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>
using Function=void(*)(float*,float*,float*);
void FUN_002b73d0(float*,float*,float*);
extern "C" unsigned abi_probe(Function,float*,float*,float*);
__asm__(".text\n.globl abi_probe\n.type abi_probe,@function\nabi_probe:\n"
"pushq %rbx\npushq %rbp\npushq %r12\npushq %r13\npushq %r14\npushq %r15\nsubq $8,%rsp\n"
"movq %rdi,%rax\nmovq %rsi,%rdi\nmovq %rdx,%rsi\nmovq %rcx,%rdx\n"
"movq $17,%rbx\nmovq $19,%rbp\nmovq $23,%r12\nmovq $29,%r13\nmovq $31,%r14\nmovq $37,%r15\ncall *%rax\n"
"xorl %eax,%eax\ncmpq $17,%rbx\njne 1f\ncmpq $19,%rbp\njne 1f\ncmpq $23,%r12\njne 1f\ncmpq $29,%r13\njne 1f\ncmpq $31,%r14\njne 1f\ncmpq $37,%r15\njne 1f\njmp 2f\n1:\nmovl $1,%eax\n2:\n"
"addq $8,%rsp\npopq %r15\npopq %r14\npopq %r13\npopq %r12\npopq %rbp\npopq %rbx\nret\n.size abi_probe,.-abi_probe\n");
int main(int argc,char**argv){
 if(argc!=2&&argc!=3)return 2;
 const bool single=argc==3&&std::strcmp(argv[2],"--single-anchor")==0;
 if(argc==3&&!single)return 2;
 struct alignas(16) State{unsigned char b[512];}state{};
 __asm__ volatile("fxsave %0":"=m"(state)::"memory");
 std::uint32_t mask;std::memcpy(&mask,state.b+28,4);if((mask&0xffff)!=0xffff)return 2;
 const auto save=_mm_getcsr();FILE*f=std::fopen(argv[1],"rb");if(!f)return 2;
 std::array<std::uint32_t,19>c{};unsigned long n=0;
 while(std::fread(c.data(),sizeof c,1,f)==1){
  for(unsigned sticky=0;sticky<64;++sticky){
   alignas(16) float v[3],r[11],d[8];
   const std::uint32_t poison[8]={0xa55a1234,0xa55a1234,0xa55a1234,0xa55a1234,0xa55a1234,0xa55a1234,0xa55a1234,0xa55a1234};
   std::memcpy(v,c.data()+1,12);std::memcpy(r,c.data()+4,44);std::memcpy(d,poison,32);
   _mm_setcsr(c[0]|sticky);
   const auto abi=abi_probe(FUN_002b73d0,r,v,d+2);
   const auto status=_mm_getcsr();std::uint32_t out[8];std::memcpy(out,d,32);
   if(abi||std::memcmp(out+2,c.data()+15,12)||status!=(c[18]|sticky)||out[0]!=poison[0]||out[1]!=poison[1]||std::memcmp(out+5,poison+5,12)||std::memcmp(v,c.data()+1,12)||std::memcmp(r,c.data()+4,44)){
    _mm_setcsr(save);std::fprintf(stderr,"FAIL record=%lu sticky=%x status=%x expected=%x ABI=%u\n",n,sticky,status,c[18]|sticky,abi);for(unsigned i=0;i<3;++i)std::fprintf(stderr,"%08x/%08x ",out[i+2],c[15+i]);std::fputc('\n',stderr);return 1;
   }
  }++n;
 }
 _mm_setcsr(save);const bool bad=std::ferror(f)||std::ftell(f)!=static_cast<long>(n*sizeof(c));std::fclose(f);if(bad||n!=(single?1u:8560u))return 2;
 std::printf("Independent rational oracle + native callee-saved + exact spans: %lu records, %lu comparisons\n",n,n*64);
}
