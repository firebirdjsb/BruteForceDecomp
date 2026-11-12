/* Authored native oracle/capture. No original executable bytes are executed. */
#include "bf_002b3e60_multiply_add_operation.h"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
#include <xmmintrin.h>
void FUN_002b3e60(float *,float *,float *,float);
struct alignas(16) State { unsigned char b[512]; };
using Function=void(*)(float *,float *,float *,float);
extern "C" void capture(Function,float *,float *,float *,const std::uint32_t *,const State *,State *);
// Four pointer registers become candidate args; scalar loaded after seed restore.
// Preserve caller state, RBX and 16-byte stack alignment across the native call.
__asm__(".text\n.globl capture\n.type capture,@function\ncapture:\n"
 "pushq %rbx\nmovq 16(%rsp),%rbx\nsubq $512,%rsp\nfxsave (%rsp)\n"
 "movq %rdi,%rax\nmovq %rsi,%rdi\nmovq %rdx,%rsi\nmovq %rcx,%rdx\n"
 "fxrstor (%r9)\nmovss (%r8),%xmm0\ncall *%rax\nfxsave (%rbx)\n"
 "fxrstor (%rsp)\naddq $512,%rsp\npopq %rbx\nret\n.size capture,.-capture\n");
__attribute__((noinline)) static void reference(float*d,float*b,float*v,float scalar){
 __m128 sv=_mm_load_ss(&scalar);__asm__ volatile("":::"memory");
 __m128 vv=_mm_load_ss(v);__asm__ volatile("":::"memory");
 vv=_mm_loadh_pi(vv,reinterpret_cast<const __m64*>(v+1));__asm__ volatile("":::"memory");
 sv=_mm_shuffle_ps(sv,sv,0);__asm__ volatile("":::"memory");
 __m128 bv=_mm_load_ss(b);__asm__ volatile("":::"memory");
 bv=_mm_loadh_pi(bv,reinterpret_cast<const __m64*>(b+1));__asm__ volatile("":::"memory");
 __asm__ volatile("mulps %1,%0":"+x"(vv):"x"(sv):"memory");
 __asm__ volatile("addps %1,%0":"+x"(bv):"x"(vv):"memory");
 _mm_store_ss(d,bv);__asm__ volatile("":::"memory");
 _mm_storeh_pi(reinterpret_cast<__m64*>(d+1),bv);__asm__ volatile("":::"memory");
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
 for(unsigned i=0;i<8;++i){
  const std::uint64_t sig=UINT64_C(0x8000000000000000)|(UINT64_C(0x123456789ab)*(i+1));
  std::memcpy(s.b+32+16*i,&sig,8);sethalf(s.b+40+16*i,static_cast<std::uint16_t>(0x3fff+i));
 }
 for(unsigned i=0;i<16;++i)for(unsigned j=0;j<4;++j)
  setword(s.b+160+16*i+4*j,0x7f800001+i*37+j);
 return s;
}
static bool check(const std::array<std::uint32_t,24>&input,unsigned doff,unsigned boff,unsigned voff,std::uint32_t scalar,const State&s,std::uint64_t n){
 alignas(16) float actual[24],expected[24];std::memcpy(actual,input.data(),96);std::memcpy(expected,input.data(),96);
 State out{},ref{},before{},after{};snapshot(before);
 capture(FUN_002b3e60,actual+doff,actual+boff,actual+voff,&scalar,&s,&out);snapshot(after);
 if(!x87_equal(before,after)||word(before.b+24)!=word(after.b+24)){std::fprintf(stderr,"caller-state restoration failed\n");return false;}
 capture(reference,expected+doff,expected+boff,expected+voff,&scalar,&s,&ref);
 if(std::memcmp(actual,expected,96)||word(out.b+24)!=word(ref.b+24)||!x87_equal(s,out)){
  std::fprintf(stderr,"native mismatch case=%llu d=%u b=%u v=%u scalar=%08x csr=%08x/%08x top=%u tags=%02x\n",
   (unsigned long long)n,doff,boff,voff,scalar,word(out.b+24),word(ref.b+24),(s.b[3]>>3)&7,s.b[4]);return false;
 }return true;
}
static bool guards(const State&base){
 const long pagesize=sysconf(_SC_PAGESIZE);if(pagesize<=0)return false;
 void*maps[3];unsigned char*pages[3];
 for(unsigned j=0;j<3;++j){maps[j]=mmap(nullptr,static_cast<std::size_t>(pagesize)*3,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);if(maps[j]==MAP_FAILED)return false;pages[j]=static_cast<unsigned char*>(maps[j])+pagesize;if(mprotect(pages[j],static_cast<std::size_t>(pagesize),PROT_READ|PROT_WRITE))return false;}
 bool ok=true;const std::uint32_t inputs[3][3]={{0xa567bcde,0xa567bcde,0xa567bcde},{0x3f800000,0x40000000,0x40400000},{0x40800000,0x40a00000,0x40c00000}};
 const std::uint32_t answer[3]={0x41100000,0x41400000,0x41700000};const std::uint32_t scalar=0x40000000;
 for(unsigned sides=0;sides<8;++sides){
  float*ptr[3];struct Triplet{float v[3];};static_assert(sizeof(Triplet)==12,"guarded array span");
  for(unsigned j=0;j<3;++j){
   if(mprotect(pages[j],static_cast<std::size_t>(pagesize),PROT_READ|PROT_WRITE))return false;
   std::memset(pages[j],0x55+j,static_cast<std::size_t>(pagesize));
   auto*obj=::new(static_cast<void*>(pages[j]+((sides&(1<<j))?pagesize-12:0)))Triplet{};ptr[j]=obj->v;std::memcpy(ptr[j],inputs[j],12);
   if(j&&mprotect(pages[j],static_cast<std::size_t>(pagesize),PROT_READ))return false;
  }
  State out{};const State s=seeded(base,7,0xff,0x1f80,3);capture(FUN_002b3e60,ptr[0],ptr[1],ptr[2],&scalar,&s,&out);
  ok=ok&&!std::memcmp(ptr[0],answer,12)&&x87_equal(s,out)&&word(out.b+24)==0x1f80;
  for(unsigned j=0;j<3;++j){
   if(j&&std::memcmp(ptr[j],inputs[j],12))ok=false;
   for(long i=0;i<pagesize;++i)if((pages[j]+i<reinterpret_cast<unsigned char*>(ptr[j])||pages[j]+i>=reinterpret_cast<unsigned char*>(ptr[j])+12)&&pages[j][i]!=0x55+j)ok=false;
  }
 }
 for(unsigned j=0;j<3;++j){munmap(maps[j],static_cast<std::size_t>(pagesize)*3);}
 return ok;
}
int main(){
 State base{};snapshot(base);if((word(base.b+28)&0xffff)!=0xffff){std::fprintf(stderr,"host lacks required MXCSR modes\n");return 2;}
 std::uint64_t count=0;
 const std::uint32_t edges[]={0,0x80000000,1,0x80000001,0x7fffff,0x807fffff,0x800000,0x80800000,0x3f800000,0xbf800000,0x3f800001,0xbf800001,0x33800000,0xb3800000,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc12345,0xffc54321,0x7f800001,0xff800123};
 constexpr unsigned ne=sizeof(edges)/sizeof(edges[0]);
 for(unsigned rc=0;rc<4;++rc)for(unsigned daz=0;daz<2;++daz)for(unsigned ftz=0;ftz<2;++ftz)for(unsigned sticky=0;sticky<64;++sticky){
  const unsigned csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)|sticky;
  const State s=seeded(base,(rc+daz+ftz)&7,0xa5,csr,sticky);
  for(unsigned shift=0;shift<ne;++shift){
   std::array<std::uint32_t,24> in{};for(unsigned j=0;j<24;++j)in[j]=edges[(j*5+shift)%ne];
   for(unsigned align=0;align<4;++align)for(int bd=-3;bd<=3;++bd)for(int vd=-3;vd<=3;++vd)
    if(!check(in,8+align,static_cast<unsigned>(8+align+bd),static_cast<unsigned>(8+align+vd),edges[(shift+7)%ne],s,count++))return 1;
  }
 }
 for(unsigned top=0;top<8;++top)for(unsigned tags=0;tags<256;++tags)for(unsigned seed=0;seed<4;++seed){
  const State s=seeded(base,top,tags,0x1fbf,seed);std::array<std::uint32_t,24>in{};
  for(unsigned j=0;j<24;++j)in[j]=edges[(j+seed)%ne];
  if(!check(in,1,9,17,edges[(seed+15)%ne],s,count++))return 1;
 }
 if(!guards(base)){std::fprintf(stderr,"guard/span failure\n");return 1;}
 std::printf("Native oracle/triple-overlap/x87/poisoned-XMM: %llu comparisons; exact 12-byte page boundaries passed\n",(unsigned long long)count);
}
