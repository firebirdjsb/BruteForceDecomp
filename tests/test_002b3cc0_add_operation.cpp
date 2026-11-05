/* Newly authored native oracle/capture, never original executable bytes. */
#include "bf_002b3cc0_add_operation.h"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
#include <xmmintrin.h>
void FUN_002b3cc0(float *,float *);
struct alignas(16) State { unsigned char b[512]; };
using Function=void(*)(float *,float *);
extern "C" void capture(Function,float *,float *,const State *,State *);
__asm__(".text\n.globl capture\n.type capture,@function\ncapture:\n"
 "pushq %rbx\nsubq $512,%rsp\nfxsave (%rsp)\nmovq %r8,%rbx\n"
 "movq %rdi,%rax\nmovq %rsi,%rdi\nmovq %rdx,%rsi\nfxrstor (%rcx)\n"
 "call *%rax\nfxsave (%rbx)\nfxrstor (%rsp)\naddq $512,%rsp\npopq %rbx\nret\n"
 ".size capture,.-capture\n");
__attribute__((noinline)) static void reference(float*a,float*b){
 // Explicit native ADDPS while independent compiler intrinsics build operands.
 __m128 av=_mm_load_ss(a);__asm__ volatile("":::"memory");
 av=_mm_loadh_pi(av,reinterpret_cast<const __m64*>(a+1));__asm__ volatile("":::"memory");
 __m128 bv=_mm_load_ss(b);__asm__ volatile("":::"memory");
 bv=_mm_loadh_pi(bv,reinterpret_cast<const __m64*>(b+1));__asm__ volatile("":::"memory");
 __asm__ volatile("addps %1,%0":"+x"(av):"x"(bv):"memory");
 _mm_store_ss(a,av);__asm__ volatile("":::"memory");
 _mm_storeh_pi(reinterpret_cast<__m64*>(a+1),av);__asm__ volatile("":::"memory");
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
  // Distinct positive binary80 normal values, no undefined/pseudo encodings.
  const std::uint64_t sig=UINT64_C(0x8000000000000000)|(UINT64_C(0x123456789ab)*(i+1));
  std::memcpy(s.b+32+16*i,&sig,8);sethalf(s.b+40+16*i,static_cast<std::uint16_t>(0x3fff+i));
 }
 for(unsigned i=0;i<16;++i)for(unsigned j=0;j<4;++j)
  setword(s.b+160+16*i+4*j,0x7f800001+i*37+j); // Poison incoming XMM lanes with SNaNs.
 return s;
}
static bool check(const std::array<std::uint32_t,16>&input,unsigned ao,unsigned bo,const State&s,std::uint64_t n){
 alignas(16) float actual[16],expected[16];std::memcpy(actual,input.data(),64);std::memcpy(expected,input.data(),64);
 State out{},ref{},before{},after{};snapshot(before);
 capture(FUN_002b3cc0,actual+ao,actual+bo,&s,&out);snapshot(after);
 if(!x87_equal(before,after)||word(before.b+24)!=word(after.b+24)){std::fprintf(stderr,"caller-state restoration failed\n");return false;}
 capture(reference,expected+ao,expected+bo,&s,&ref);
 if(std::memcmp(actual,expected,64)||word(out.b+24)!=word(ref.b+24)||!x87_equal(s,out)){
  std::fprintf(stderr,"native mismatch case=%llu a=%u b=%u csr=%08x/%08x top=%u tags=%02x\n",
   (unsigned long long)n,ao,bo,word(out.b+24),word(ref.b+24),(s.b[3]>>3)&7,s.b[4]);return false;
 }return true;
}
static bool guards(const State&base){
 const long pagesize=sysconf(_SC_PAGESIZE);if(pagesize<=0)return false;
 void*ap=mmap(nullptr,static_cast<std::size_t>(pagesize)*3,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
 void*bp=mmap(nullptr,static_cast<std::size_t>(pagesize)*3,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
 if(ap==MAP_FAILED||bp==MAP_FAILED)return false;
 auto*a=static_cast<unsigned char*>(ap)+pagesize;auto*b=static_cast<unsigned char*>(bp)+pagesize;
 if(mprotect(a,static_cast<std::size_t>(pagesize),PROT_READ|PROT_WRITE)||mprotect(b,static_cast<std::size_t>(pagesize),PROT_READ|PROT_WRITE))return false;
 bool ok=true;const std::uint32_t av[3]={0x3f800000,0x40000000,0x40400000};const std::uint32_t bv[3]={0x40800000,0x40a00000,0x40c00000};const std::uint32_t answer[3]={0x40a00000,0x40e00000,0x41100000};
 for(unsigned aside=0;aside<2;++aside)for(unsigned bside=0;bside<2;++bside){
  std::memset(a,0x55,static_cast<std::size_t>(pagesize));std::memset(b,0xaa,static_cast<std::size_t>(pagesize));
  struct Triplet { float v[3]; };static_assert(sizeof(Triplet)==12,"guarded array span");
  // Placement-new aggregate establishes each complete three-float array.
  auto*ao=::new(static_cast<void*>(a+(aside?pagesize-12:0)))Triplet{};
  auto*bo=::new(static_cast<void*>(b+(bside?pagesize-12:0)))Triplet{};
  float*af=ao->v;float*bf=bo->v;
  std::memcpy(af,av,12);std::memcpy(bf,bv,12);
  if(mprotect(b,static_cast<std::size_t>(pagesize),PROT_READ))return false;
  State out{};const State s=seeded(base,7,0xff,0x1f80,3);capture(FUN_002b3cc0,af,bf,&s,&out);
  ok=ok&&!std::memcmp(af,answer,12)&&!std::memcmp(bf,bv,12)&&x87_equal(s,out)&&word(out.b+24)==0x1f80;
  for(long i=0;i<pagesize;++i){if((a+i<reinterpret_cast<unsigned char*>(af)||a+i>=reinterpret_cast<unsigned char*>(af)+12)&&a[i]!=0x55)ok=false;}
  if(mprotect(b,static_cast<std::size_t>(pagesize),PROT_READ|PROT_WRITE))return false;
 }
 munmap(ap,static_cast<std::size_t>(pagesize)*3);munmap(bp,static_cast<std::size_t>(pagesize)*3);return ok;
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
   std::array<std::uint32_t,16> in{};for(unsigned j=0;j<16;++j)in[j]=edges[(j*5+shift)%ne];
   // All whole-float overlaps and four alignments modulo 16, plus disjoint.
   for(unsigned align=0;align<4;++align)for(int delta=-3;delta<=3;++delta){
    if(!check(in,5+align,static_cast<unsigned>(5+align+delta),s,count++))return 1;
   }
  }
 }
 // Every x87 TOP/tag pattern with complete occupancy and existing sticky/C bits.
 for(unsigned top=0;top<8;++top)for(unsigned tags=0;tags<256;++tags)for(unsigned seed=0;seed<4;++seed){
  const State s=seeded(base,top,tags,0x1fbf,seed);std::array<std::uint32_t,16>in{};
  for(unsigned j=0;j<16;++j)in[j]=edges[(j+seed)%ne];
  if(!check(in,1,9,s,count++))return 1;
 }
 if(!guards(base)){std::fprintf(stderr,"guard/span failure\n");return 1;}
 std::printf("Native oracle/overlap/x87/poisoned-XMM: %llu comparisons; exact 12-byte page boundaries passed\n",(unsigned long long)count);
}
