/* Authored native oracle/capture; no original machine code is executed.
 * Capture/state helpers adapted from reviewed 002b3e60 operation tests.
 * Three-term operation, alias matrix and exact spans are newly authored. */
#include "bf_002b73d0_three_term_operation.h"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
#include <xmmintrin.h>
void FUN_002b73d0(float *,float *,float *);
struct alignas(16) State { unsigned char b[512]; };
using Function=void(*)(float *,float *,float *);
extern "C" void capture(Function,float *,float *,float *,const State *,State *);
__asm__(".text\n.globl capture\n.type capture,@function\ncapture:\n"
 "pushq %rbx\nmovq %r9,%rbx\nsubq $512,%rsp\nfxsave (%rsp)\n"
 "movq %rdi,%rax\nmovq %rsi,%rdi\nmovq %rdx,%rsi\nmovq %rcx,%rdx\n"
 "fxrstor (%r8)\ncall *%rax\nfxsave (%rbx)\nfxrstor (%rsp)\n"
 "addq $512,%rsp\npopq %rbx\nret\n.size capture,.-capture\n");
__attribute__((noinline)) static void reference(float*m,float*v,float*o){
 __m128 vector=_mm_load_ss(v);__asm__ volatile("":::"memory");
 vector=_mm_loadh_pi(vector,reinterpret_cast<const __m64*>(v+1));__asm__ volatile("":::"memory");
 __m128 a=_mm_load_ss(m);__asm__ volatile("":::"memory");
 a=_mm_loadh_pi(a,reinterpret_cast<const __m64*>(m+1));__asm__ volatile("":::"memory");
 __m128 x=_mm_shuffle_ps(vector,vector,0);__asm__ volatile("":::"memory");
 __m128 b=_mm_load_ss(m+4);__asm__ volatile("":::"memory");
 b=_mm_loadh_pi(b,reinterpret_cast<const __m64*>(m+5));__asm__ volatile("":::"memory");
 __asm__ volatile("mulps %1,%0":"+x"(a):"x"(x):"memory");
 __m128 y=_mm_shuffle_ps(vector,vector,170);__asm__ volatile("":::"memory");
 __m128 c=_mm_load_ss(m+8);__asm__ volatile("":::"memory");
 c=_mm_loadh_pi(c,reinterpret_cast<const __m64*>(m+9));__asm__ volatile("":::"memory");
 __asm__ volatile("mulps %1,%0":"+x"(b):"x"(y):"memory");
 __m128 z=_mm_shuffle_ps(vector,vector,255);__asm__ volatile("":::"memory");
 __asm__ volatile("addps %1,%0":"+x"(a):"x"(b):"memory");
 __asm__ volatile("mulps %1,%0":"+x"(c):"x"(z):"memory");
 __asm__ volatile("addps %1,%0":"+x"(a):"x"(c):"memory");
 _mm_store_ss(o,a);__asm__ volatile("":::"memory");
 _mm_storeh_pi(reinterpret_cast<__m64*>(o+1),a);__asm__ volatile("":::"memory");
}
static std::uint32_t word(const unsigned char*p){std::uint32_t x;std::memcpy(&x,p,4);return x;}
static void setword(unsigned char*p,std::uint32_t x){std::memcpy(p,&x,4);}
static void sethalf(unsigned char*p,std::uint16_t x){std::memcpy(p,&x,2);}
static void snapshot(State&s){__asm__ volatile("fxsave %0":"=m"(s)::"memory");}
static bool x87_equal(const State&a,const State&b){
 if(std::memcmp(a.b,b.b,5)||std::memcmp(a.b+6,b.b+6,2))return false;
 const unsigned top=(a.b[3]>>3)&7;
 for(unsigned i=0;i<8;++i)if(a.b[4]&(1<<((top+i)&7)))
  if(std::memcmp(a.b+32+16*i,b.b+32+16*i,10))return false;
 return true;
}
static State seeded(const State&base,unsigned top,unsigned tags,unsigned csr,unsigned seed){
 State s=base;sethalf(s.b,static_cast<std::uint16_t>(0x37f|((seed&3)<<10)));
 sethalf(s.b+2,static_cast<std::uint16_t>((top<<11)|((seed&1)?0x4500:0)|((seed&2)?0x3f:0)));
 s.b[4]=static_cast<unsigned char>(tags);setword(s.b+24,csr);
 for(unsigned i=0;i<8;++i){const std::uint64_t sig=UINT64_C(0x8000000000000000)|(UINT64_C(0x123456789ab)*(i+1));std::memcpy(s.b+32+16*i,&sig,8);sethalf(s.b+40+16*i,static_cast<std::uint16_t>(0x3fff+i));}
 for(unsigned i=0;i<16;++i)for(unsigned j=0;j<4;++j)setword(s.b+160+16*i+4*j,0x7f800001+i*37+j);
 return s;
}
static bool check(const std::array<std::uint32_t,40>&input,unsigned m,unsigned v,unsigned o,const State&s,std::uint64_t n){
 alignas(16) float actual[40],expected[40];std::memcpy(actual,input.data(),160);std::memcpy(expected,input.data(),160);
 State out{},ref{},before{},after{};snapshot(before);
 capture(FUN_002b73d0,actual+m,actual+v,actual+o,&s,&out);snapshot(after);
 if(!x87_equal(before,after)||word(before.b+24)!=word(after.b+24)){std::fprintf(stderr,"caller-state restoration failed\n");return false;}
 capture(reference,expected+m,expected+v,expected+o,&s,&ref);
 if(std::memcmp(actual,expected,160)||word(out.b+24)!=word(ref.b+24)||!x87_equal(s,out)){
  std::fprintf(stderr,"native mismatch case=%llu m=%u v=%u o=%u csr=%08x/%08x top=%u tags=%02x\n",(unsigned long long)n,m,v,o,word(out.b+24),word(ref.b+24),(s.b[3]>>3)&7,s.b[4]);return false;
 }return true;
}
static bool guards(const State&base){
 const long ps=sysconf(_SC_PAGESIZE);if(ps<=0)return false;
 void*maps[3];unsigned char*pages[3];
 for(unsigned j=0;j<3;++j){maps[j]=mmap(nullptr,static_cast<std::size_t>(ps)*3,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);if(maps[j]==MAP_FAILED)return false;pages[j]=static_cast<unsigned char*>(maps[j])+ps;if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ|PROT_WRITE))return false;}
 const std::uint32_t matrix[11]={0x3f800000,0x40000000,0x40400000,0x7f800123,0x40800000,0x40a00000,0x40c00000,0xff800456,0x40e00000,0x41000000,0x41100000};
 const std::uint32_t vector[3]={0x40000000,0x40400000,0x40800000},answer[3]={0x42280000,0x424c0000,0x42700000};
 bool ok=true;
 for(unsigned sides=0;sides<8;++sides){
  float*ptr[3];const unsigned spans[3]={44,12,12};struct Eleven{float v[11];};struct Triplet{float v[3];};static_assert(sizeof(Eleven)==44&&sizeof(Triplet)==12,"guarded object spans");
  for(unsigned j=0;j<3;++j){
   if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ|PROT_WRITE))return false;
   std::memset(pages[j],0x55+j,static_cast<std::size_t>(ps));void*at=pages[j]+((sides&(1<<j))?ps-spans[j]:0);
   if(j==0)ptr[j]=(::new(at)Eleven{})->v;else ptr[j]=(::new(at)Triplet{})->v;
   if(j==0)std::memcpy(ptr[j],matrix,44);
   if(j==1)std::memcpy(ptr[j],vector,12);
   if(j<2&&mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ))return false;
  }
  State out{};const State s=seeded(base,7,0xff,0x1f80,3);capture(FUN_002b73d0,ptr[0],ptr[1],ptr[2],&s,&out);
  ok=ok&&!std::memcmp(ptr[2],answer,12)&&!std::memcmp(ptr[0],matrix,44)&&!std::memcmp(ptr[1],vector,12)&&x87_equal(s,out)&&word(out.b+24)==0x1f80;
  for(unsigned j=0;j<3;++j)for(long i=0;i<ps;++i)if((pages[j]+i<reinterpret_cast<unsigned char*>(ptr[j])||pages[j]+i>=reinterpret_cast<unsigned char*>(ptr[j])+spans[j])&&pages[j][i]!=0x55+j)ok=false;
 }
 for(unsigned j=0;j<3;++j)munmap(maps[j],static_cast<std::size_t>(ps)*3);
 return ok;
}
int main(){
 State base{};snapshot(base);if((word(base.b+28)&0xffff)!=0xffff){std::fprintf(stderr,"host lacks required MXCSR modes\n");return 2;}
 const std::uint32_t edges[]={0,0x80000000,1,0x80000001,0x7fffff,0x807fffff,0x800000,0x80800000,0x3f800000,0xbf800000,0x3f800001,0xbf800001,0x33800000,0xb3800000,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc12345,0xffc54321,0x7f800001,0xff800123};
 constexpr unsigned ne=sizeof(edges)/sizeof(edges[0]);std::uint64_t count=0;
 for(unsigned rc=0;rc<4;++rc)for(unsigned daz=0;daz<2;++daz)for(unsigned ftz=0;ftz<2;++ftz){
  const unsigned csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15);
  // Complete 15x15 triple-overlap offset matrix includes exact alias and both
  // directions for all read triplets, disjoint endpoints, and alignment mod16.
  for(unsigned shift=0;shift<ne;++shift){
   std::array<std::uint32_t,40> in{};for(unsigned j=0;j<40;++j)in[j]=edges[(j*5+shift)%ne];
   const State s=seeded(base,(rc+daz+ftz)&7,0xa5,csr|(shift%64),shift);
   for(unsigned align=0;align<4;++align)for(int vd=-3;vd<=11;++vd)for(int od=-3;od<=11;++od)
    if(!check(in,12+align,static_cast<unsigned>(12+align+vd),static_cast<unsigned>(12+align+od),s,count++))return 1;
  }
  for(unsigned sticky=0;sticky<64;++sticky)for(unsigned shift=0;shift<ne;++shift){
   std::array<std::uint32_t,40> in{};for(unsigned j=0;j<40;++j)in[j]=edges[(j*7+shift)%ne];
   const State s=seeded(base,sticky%8,0xff,csr|sticky,sticky);
   if(!check(in,1,17,29,s,count++))return 1;
  }
 }
 for(unsigned top=0;top<8;++top)for(unsigned tags=0;tags<256;++tags)for(unsigned seed=0;seed<4;++seed){
  const State s=seeded(base,top,tags,0x1fbf,seed);std::array<std::uint32_t,40>in{};for(unsigned j=0;j<40;++j)in[j]=edges[(j+seed)%ne];
  if(!check(in,1,17,29,s,count++))return 1;
 }
 if(!guards(base)){std::fprintf(stderr,"guard/span failure\n");return 1;}
 std::printf("Native oracle/triple-overlap/x87/poisoned-XMM: %llu comparisons; exact 44/12/12-byte page boundaries passed\n",(unsigned long long)count);
}
