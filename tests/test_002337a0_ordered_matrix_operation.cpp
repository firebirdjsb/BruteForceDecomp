/* Authored masked native scalar-lane mutable-memory oracle. FXSAVE helpers
 * adapted from reviewed 002b7360. No original machine code is executed. */
#include "bf_002337a0_ordered_matrix_operation.h"
#include <array>
#include <cstdint>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
#include <xmmintrin.h>
std::uint64_t *FUN_002337a0(std::uint64_t*,float*,float*);
struct alignas(16) State { unsigned char b[512]; };
struct alignas(16) Captured { State state; std::uintptr_t result; std::uint64_t bad_gpr; };
static_assert(offsetof(Captured,result)==512 && offsetof(Captured,bad_gpr)==520, "capture assembly field layout");
using Function=std::uint64_t*(*)(std::uint64_t*,float*,float*);
extern "C" void capture(Function,std::uint64_t*,float*,float*,const State*,Captured*);
// Six pushed GPRs plus 552 local bytes make RSP 16-byte aligned at CALL.
// Save all caller state, then seed every native SysV callee-saved GPR.
__asm__(".text\n.globl capture\n.type capture,@function\ncapture:\n"
 "pushq %rbx\npushq %rbp\npushq %r12\npushq %r13\npushq %r14\npushq %r15\nsubq $552,%rsp\n"
 "fxsave (%rsp)\nmovq %r9,512(%rsp)\nmovq %rdi,520(%rsp)\nmovq %rsi,528(%rsp)\nmovq %rdx,536(%rsp)\nmovq %rcx,544(%rsp)\n"
 "fxrstor (%r8)\nmovq %rsi,%rdi\nmovq %rdx,%rsi\nmovq %rcx,%rdx\n"
 "movq $0x11335577,%rbx\nmovq $0x22446688,%rbp\nmovq $0x33557711,%r12\nmovq $0x44668822,%r13\nmovq $0x55771133,%r14\nmovq $0x66882244,%r15\n"
 "call *520(%rsp)\nmovq 512(%rsp),%r10\nfxsave (%r10)\nmovq %rax,512(%r10)\nxorq %r11,%r11\n"
 "cmpq $0x11335577,%rbx\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x22446688,%rbp\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x33557711,%r12\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x44668822,%r13\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x55771133,%r14\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x66882244,%r15\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "movq %r11,520(%r10)\nfxrstor (%rsp)\naddq $552,%rsp\npopq %r15\npopq %r14\npopq %r13\npopq %r12\npopq %rbp\npopq %rbx\nret\n.size capture,.-capture\n");
static std::uint32_t load(const float*p){std::uint32_t x;std::memcpy(&x,p,4);__asm__ volatile("":::"memory");return x;}
static void store(void*p,const std::uint32_t*x,unsigned n){std::memcpy(p,x,n*4);__asm__ volatile("":::"memory");}
static std::uint32_t mul(std::uint32_t a,std::uint32_t b){
 __asm__ volatile("movd %1,%%xmm0; movd %2,%%xmm1; mulss %%xmm1,%%xmm0; movd %%xmm0,%0":"=r"(a):"r"(a),"r"(b):"xmm0","xmm1","memory");return a;
}
static std::uint32_t add(std::uint32_t a,std::uint32_t b){
 __asm__ volatile("movd %1,%%xmm0; movd %2,%%xmm1; addss %%xmm1,%%xmm0; movd %%xmm0,%0":"=r"(a):"r"(a),"r"(b):"xmm0","xmm1","memory");return a;
}
static void row(std::uint32_t*out,const std::uint32_t*c,const std::uint32_t*r){
 for(unsigned j=0;j<4;++j){out[j]=mul(c[0],r[j]);for(unsigned k=1;k<4;++k)out[j]=add(out[j],mul(c[k],r[k*4+j]));}
}
__attribute__((noinline)) static std::uint64_t*reference(std::uint64_t*out,float*l,float*r){
 std::uint32_t c[16],rr[16],v[4];for(unsigned j=0;j<16;++j)rr[j]=load(r+j);
 for(unsigned j=0;j<6;++j)c[j]=load(l+j);
 auto*o=reinterpret_cast<unsigned char*>(out);
 row(v,c,rr);store(o,v,2);store(o+8,v+2,2);
 c[6]=load(l+6);c[9]=load(l+9);c[7]=load(l+7);c[8]=load(l+8);
 row(v,c+4,rr);store(o+16,v,2);store(o+24,v+2,2);
 c[10]=load(l+10);c[11]=load(l+11);c[13]=load(l+13);
 row(v,c+8,rr);store(o+32,v,2);c[12]=load(l+12);store(o+40,v+2,2);
 c[14]=load(l+14);c[15]=load(l+15);row(v,c+12,rr);store(o+48,v,4);
 return out;
}
static std::uint32_t word(const unsigned char*p){std::uint32_t x;std::memcpy(&x,p,4);return x;}
static void setword(unsigned char*p,std::uint32_t x){std::memcpy(p,&x,4);}
static void sethalf(unsigned char*p,std::uint16_t x){std::memcpy(p,&x,2);}
static void snapshot(State&s){__asm__ volatile("fxsave %0":"=m"(s)::"memory");}
static bool x87_equal(const State&a,const State&b){
 if(std::memcmp(a.b,b.b,5)||std::memcmp(a.b+6,b.b+6,2)||std::memcmp(a.b+8,b.b+8,16))return false;
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

static bool check(const std::array<std::uint32_t,96>&input,unsigned l,unsigned r,unsigned o,const State&s,std::uint64_t n){
 alignas(16) float actual[96],expected[96];std::memcpy(actual,input.data(),384);std::memcpy(expected,input.data(),384);
 Captured got{},ref{};State before{},after{};snapshot(before);
 capture(FUN_002337a0,reinterpret_cast<std::uint64_t*>(actual+o),actual+l,actual+r,&s,&got);snapshot(after);
 if(!x87_equal(before,after)||word(before.b+24)!=word(after.b+24)){std::fprintf(stderr,"caller-state restoration failed\n");return false;}
 capture(reference,reinterpret_cast<std::uint64_t*>(expected+o),expected+l,expected+r,&s,&ref);
 if(std::memcmp(actual,expected,384)||word(got.state.b+24)!=word(ref.state.b+24)||!x87_equal(s,got.state)||got.bad_gpr||got.result!=reinterpret_cast<std::uintptr_t>(actual+o)){
  std::fprintf(stderr,"native mismatch case=%llu l=%u r=%u o=%u csr=%08x/%08x badgpr=%llu return=%s\n",(unsigned long long)n,l,r,o,word(got.state.b+24),word(ref.state.b+24),(unsigned long long)got.bad_gpr,got.result==reinterpret_cast<std::uintptr_t>(actual+o)?"ok":"bad");return false;
 }return true;
}
static bool guards(const State&base){
 const long ps=sysconf(_SC_PAGESIZE);if(ps<=0)return false;
 void*maps[3];unsigned char*pages[3];
 for(unsigned j=0;j<3;++j){maps[j]=mmap(nullptr,static_cast<std::size_t>(ps)*3,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);if(maps[j]==MAP_FAILED)return false;pages[j]=static_cast<unsigned char*>(maps[j])+ps;if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ|PROT_WRITE))return false;}
 bool ok=true;std::uint32_t lhs[16],rhs[16]={};for(unsigned i=0;i<16;++i)lhs[i]=0x3f800000+(i<<18);for(unsigned i=0;i<4;++i)rhs[5*i]=0x3f800000;
 for(unsigned sides=0;sides<8;++sides){
  float*ptr[3];
  for(unsigned j=0;j<3;++j){
   if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ|PROT_WRITE))return false;
   std::memset(pages[j],0x55+j,static_cast<std::size_t>(ps));void*at=pages[j]+((sides&(1<<j))?ps-64:0);
   struct Matrix{float a[16];};static_assert(sizeof(Matrix)==64,"exact live array span");ptr[j]=(::new(at)Matrix{})->a;
   if(j==0)std::memcpy(ptr[j],lhs,64);
   if(j==1)std::memcpy(ptr[j],rhs,64);
   if(j<2&&mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ))return false;
  }
  const State s=seeded(base,7,0xff,0x1f80,3);Captured got{};capture(FUN_002337a0,reinterpret_cast<std::uint64_t*>(ptr[2]),ptr[0],ptr[1],&s,&got);
  ok=ok&&!std::memcmp(ptr[2],lhs,64)&&!std::memcmp(ptr[0],lhs,64)&&!std::memcmp(ptr[1],rhs,64)&&x87_equal(s,got.state)&&word(got.state.b+24)==0x1f80&&!got.bad_gpr&&got.result==reinterpret_cast<std::uintptr_t>(ptr[2]);
  for(unsigned j=0;j<3;++j)for(long i=0;i<ps;++i)if((pages[j]+i<reinterpret_cast<unsigned char*>(ptr[j])||pages[j]+i>=reinterpret_cast<unsigned char*>(ptr[j])+64)&&pages[j][i]!=0x55+j)ok=false;
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
  for(unsigned align=0;align<4;align+=2)for(int ld=-16;ld<=16;++ld)for(int rd=-16;rd<=16;++rd){
   std::array<std::uint32_t,96> in{};for(unsigned j=0;j<96;++j)in[j]=edges[(j*5+count)%ne];
   const State s=seeded(base,count%8,0xa5,csr|(count%64),count);
   if(!check(in,40+align+ld,40+align+rd,40+align,s,count++))return 1;
  }
  for(unsigned sticky=0;sticky<64;++sticky)for(unsigned shift=0;shift<ne;++shift){
   std::array<std::uint32_t,96> in{};for(unsigned j=0;j<96;++j)in[j]=edges[(j*7+shift)%ne];
   const State s=seeded(base,sticky%8,0xff,csr|sticky,sticky);
   if(!check(in,5,37,70,s,count++))return 1;
  }
 }
 for(unsigned top=0;top<8;++top)for(unsigned tags=0;tags<256;++tags)for(unsigned seed=0;seed<4;++seed){
  const State s=seeded(base,top,tags,0x1fbf,seed);std::array<std::uint32_t,96> in{};for(unsigned j=0;j<96;++j)in[j]=edges[(j+seed)%ne];
  if(!check(in,5,37,70,s,count++))return 1;
 }
 if(!guards(base)){std::fprintf(stderr,"guard/span failure\n");return 1;}
 std::printf("Native mutable scalar oracle: %llu comparisons; all GPRs, return, x87 TOP/tags/live payloads, MXCSR and exact 64/64/64 page spans passed\n",(unsigned long long)count);
}
