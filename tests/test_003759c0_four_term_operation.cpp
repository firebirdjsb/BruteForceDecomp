/* Authored native scalar-lane oracle/capture; no original code executed. */
#include "bf_003759c0_four_term_operation.h"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
#include <xmmintrin.h>
void FUN_003759c0(std::uint64_t*,float*,float,float*);
struct alignas(16) State { unsigned char b[512]; };
using Function=void(*)(std::uint64_t*,float*,float,float*);
extern "C" void capture(Function,std::uint64_t*,float*,const std::uint32_t*,float*,const State*,State*);
// Seventh SysV argument is output state at entry RSP+8. Save caller FP state,
// RBX, and initialize all actual arguments only after seed restore.
__asm__(".text\n.globl capture\n.type capture,@function\ncapture:\n"
 "pushq %rbx\nmovq 16(%rsp),%rbx\nsubq $512,%rsp\nfxsave (%rsp)\n"
 "movq %rdi,%rax\nmovq %rsi,%rdi\nmovq %rdx,%rsi\nmovq %r8,%rdx\n"
 "fxrstor (%r9)\nmovss (%rcx),%xmm0\ncall *%rax\nfxsave (%rbx)\n"
 "fxrstor (%rsp)\naddq $512,%rsp\npopq %rbx\nret\n.size capture,.-capture\n");
__attribute__((noinline)) static void reference(std::uint64_t*d,float*v,float scalar,float*r){
 // Snapshot all source objects before stores. Scalar SSE computes each lane
 // independently, so this is structurally distinct from the packed helper.
 float cw[4],rw[16],out[4];std::memcpy(cw,v,12);std::memcpy(cw+3,&scalar,4);std::memcpy(rw,r,64);
 for(unsigned lane=0;lane<4;++lane){
  __m128 acc=_mm_load_ss(cw);
  __m128 row=_mm_load_ss(rw+lane);
  __asm__ volatile("mulss %1,%0":"+x"(acc):"x"(row):"memory");
  for(unsigned term=1;term<4;++term){
   __m128 value=_mm_load_ss(cw+term);
   row=_mm_load_ss(rw+4*term+lane);
   __asm__ volatile("mulss %1,%0":"+x"(value):"x"(row):"memory");
   __asm__ volatile("addss %1,%0":"+x"(acc):"x"(value):"memory");
  }
  _mm_store_ss(out+lane,acc);
 }
 std::memcpy(d,out,12);
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
static bool check(const std::array<std::uint32_t,64>&input,unsigned doff,unsigned voff,unsigned roff,std::uint32_t scalar,const State&s,std::uint64_t n){
 alignas(16) float actual[64],expected[64];std::memcpy(actual,input.data(),256);std::memcpy(expected,input.data(),256);
 State out{},ref{},before{},after{};snapshot(before);
 capture(FUN_003759c0,reinterpret_cast<std::uint64_t*>(actual+doff),actual+voff,&scalar,actual+roff,&s,&out);snapshot(after);
 if(!x87_equal(before,after)||word(before.b+24)!=word(after.b+24)){std::fprintf(stderr,"caller-state restoration failed\n");return false;}
 capture(reference,reinterpret_cast<std::uint64_t*>(expected+doff),expected+voff,&scalar,expected+roff,&s,&ref);
 if(std::memcmp(actual,expected,256)||word(out.b+24)!=word(ref.b+24)||!x87_equal(s,out)){
  std::fprintf(stderr,"native mismatch case=%llu d=%u v=%u r=%u scalar=%08x csr=%08x/%08x top=%u tags=%02x\n",
   (unsigned long long)n,doff,voff,roff,scalar,word(out.b+24),word(ref.b+24),(s.b[3]>>3)&7,s.b[4]);return false;
 }return true;
}
static bool guards(const State&base){
 const long ps=sysconf(_SC_PAGESIZE);if(ps<=0)return false;
 void*maps[3];unsigned char*pages[3];
 for(unsigned j=0;j<3;++j){maps[j]=mmap(nullptr,static_cast<std::size_t>(ps)*3,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);if(maps[j]==MAP_FAILED)return false;pages[j]=static_cast<unsigned char*>(maps[j])+ps;if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ|PROT_WRITE))return false;}
 bool ok=true;const std::uint32_t vb[3]={0x3f800000,0x40000000,0x40400000};
 const std::uint32_t rb[16]={0x3f800000,0,0,0,0,0x3f800000,0,0,0,0,0x3f800000,0,0x40800000,0x40a00000,0x40c00000,0};
 const std::uint32_t answer[3]={0x41100000,0x41400000,0x41700000},scalar=0x40000000;
 for(unsigned sides=0;sides<8;++sides){
  float*ptr[3];const unsigned span[3]={16,12,64};
  for(unsigned j=0;j<3;++j){
   if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ|PROT_WRITE))return false;
   std::memset(pages[j],0x55+j,static_cast<std::size_t>(ps));
   void*location=pages[j]+((sides&(1<<j))?ps-span[j]:0);
   // Named array objects retain the required live float-object boundaries.
   if(j==0){struct Q{float a[4];};ptr[j]=(::new(location)Q{})->a;}
   else if(j==1){struct T{float a[3];};ptr[j]=(::new(location)T{})->a;}
   else{struct M{float a[16];};ptr[j]=(::new(location)M{})->a;}
   std::memset(ptr[j],0x55+j,span[j]);
   if(j==1)std::memcpy(ptr[j],vb,12);
   if(j==2)std::memcpy(ptr[j],rb,64);
   if(j&&mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ))return false;
  }
  State out{};const State s=seeded(base,7,0xff,0x1f80,3);capture(FUN_003759c0,reinterpret_cast<std::uint64_t*>(ptr[0]),ptr[1],&scalar,ptr[2],&s,&out);
  ok=ok&&!std::memcmp(ptr[0],answer,12)&&x87_equal(s,out)&&word(out.b+24)==0x1f80;
  if(std::memcmp(ptr[1],vb,12)||std::memcmp(ptr[2],rb,64))ok=false;
  for(unsigned j=0;j<3;++j)for(long i=0;i<ps;++i)
   if((pages[j]+i<reinterpret_cast<unsigned char*>(ptr[j])||pages[j]+i>=reinterpret_cast<unsigned char*>(ptr[j])+(j?span[j]:12))&&pages[j][i]!=0x55+j)ok=false;
 }
 for(unsigned j=0;j<3;++j)munmap(maps[j],static_cast<std::size_t>(ps)*3);
 return ok;
}
int main(){
 State base{};snapshot(base);if((word(base.b+28)&0xffff)!=0xffff){std::fprintf(stderr,"host lacks required MXCSR modes\n");return 2;}
 std::uint64_t count=0;
 const std::uint32_t edges[]={0,0x80000000,1,0x80000001,0x7fffff,0x807fffff,0x800000,0x80800000,0x3f800000,0xbf800000,0x3f800001,0xbf800001,0x33800000,0xb3800000,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc12345,0xffc54321,0x7f800001,0xff800123};
 constexpr unsigned ne=sizeof(edges)/sizeof(edges[0]);
 for(unsigned rc=0;rc<4;++rc)for(unsigned daz=0;daz<2;++daz)for(unsigned ftz=0;ftz<2;++ftz)for(unsigned sticky=0;sticky<64;++sticky){
  const unsigned csr=0x1f80|(rc<<13)|(daz<<6)|(ftz<<15)|sticky;const State s=seeded(base,(rc+daz+ftz)&7,0xa5,csr,sticky);
  for(unsigned shift=0;shift<ne;++shift){
   std::array<std::uint32_t,64>in{};for(unsigned j=0;j<64;++j)in[j]=edges[(j*5+shift)%ne];
   // Matrix at16; outputs both alignments modulo16, every overlapping output
   // start, vector all four alignments and both overlap directions, disjoint.
   for(unsigned d=12;d<=32;d+=2)for(unsigned v=13;v<=19;++v)
    if(!check(in,d,v,16,edges[(shift+7)%ne],s,count++))return 1;
   for(unsigned v=40;v<44;++v)if(!check(in,4,v,16,edges[(shift+7)%ne],s,count++))return 1;
  }
 }
 for(unsigned top=0;top<8;++top)for(unsigned tags=0;tags<256;++tags)for(unsigned seed=0;seed<4;++seed){
  const State s=seeded(base,top,tags,0x1fbf,seed);std::array<std::uint32_t,64>in{};for(unsigned j=0;j<64;++j)in[j]=edges[(j+seed)%ne];
  if(!check(in,2,41,16,edges[(seed+15)%ne],s,count++))return 1;
 }
 if(!guards(base)){std::fprintf(stderr,"guard/span failure\n");return 1;}
 std::printf("Scalar-lane native oracle/alias/x87/poisoned-XMM: %llu comparisons; guarded vector12/rows64 and destination12+4sentinel passed\n",(unsigned long long)count);
}
