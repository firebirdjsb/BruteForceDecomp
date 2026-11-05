/* Authored synthetic native instruction oracle; no extracted bytes execute. */
#include "bf_002eca8b_round_operation.h"
#include <array>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <vector>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
struct alignas(16) State { unsigned char bytes[512]; };
#define X87 "st", "st(1)", "st(2)", "st(3)", "st(4)", "st(5)", "st(6)", "st(7)"
#define XMM "xmm0", "xmm1", "xmm2", "xmm3", "xmm4", "xmm5", "xmm6", "xmm7", "xmm8", "xmm9", "xmm10", "xmm11", "xmm12", "xmm13", "xmm14", "xmm15"
static void save(State &s) { __asm__ volatile("fxsave %0" : "=m"(s) : : "memory"); }
static void restore(const State &s) { __asm__ volatile("fxrstor %0" : : "m"(s) : X87, XMM, "memory"); }
static void reset() { __asm__ volatile("fninit" : : : X87, "memory"); }
static unsigned get16(const State &s,unsigned n) { std::uint16_t v;std::memcpy(&v,s.bytes+n,2);return v; }
static void put16(State &s,unsigned n,std::uint16_t v) { std::memcpy(s.bytes+n,&v,2); }
long double FUN_002eca8b(double);
using Function=long double(*)(double);
extern "C" long double round_oracle(double);
// This separate pointer wrapper exercises the helper's exact readable extent.
extern "C" __attribute__((noinline)) long double pointer_candidate(const double *p) { return bf_002eca8b_round_operation(p); }
extern "C" void round_capture(Function,const double *,State *,const State *);
extern "C" void pointer_capture(long double(*)(const double *),const double *,State *,const State *);
// Authored SysV call boundaries save/restore caller FP state, including all
// x87/XMM values and callee-saved controls. Measured return is captured in native
// ST0 before a C++ caller can spill it. No unmodified draft or original game bytes execute.
__asm__(
 ".text\n.globl round_capture\n.type round_capture,@function\nround_capture:\n"
 "pushq %rbx\nsubq $512,%rsp\nfxsave (%rsp)\nmovq %rdx,%rbx\nmovq %rdi,%rax\n"
 "fxrstor (%rcx)\nmovsd (%rsi),%xmm0\ncall *%rax\nfxsave (%rbx)\n"
 "fxrstor (%rsp)\naddq $512,%rsp\npopq %rbx\nret\n.size round_capture,.-round_capture\n"
 ".globl pointer_capture\n.type pointer_capture,@function\npointer_capture:\n"
 "pushq %rbx\nsubq $512,%rsp\nfxsave (%rsp)\nmovq %rdx,%rbx\nmovq %rdi,%rax\nmovq %rsi,%rdi\n"
 "fxrstor (%rcx)\ncall *%rax\nfxsave (%rbx)\n"
 "fxrstor (%rsp)\naddq $512,%rsp\npopq %rbx\nret\n.size pointer_capture,.-pointer_capture\n"
 ".globl round_oracle\n.type round_oracle,@function\nround_oracle:\n"
 "movsd %xmm0,-16(%rsp)\nfldl -16(%rsp)\nfrndint\nfstpl -8(%rsp)\nfldl -8(%rsp)\n"
 "ret\n.size round_oracle,.-round_oracle\n");
static bool equal(const State &a,const State &b) {
 if(std::memcmp(a.bytes,b.bytes,5)||std::memcmp(a.bytes+24,b.bytes+24,4))return false;
 const unsigned top=(get16(a,2)>>11)&7;
 for(unsigned i=0;i<8;++i)if(a.bytes[4]&(1u<<((top+i)&7)))
  if(std::memcmp(a.bytes+32+16*i,b.bytes+32+16*i,10))return false;
 return true;
}
static bool contract(const State &before,const State &after) {
 const unsigned top=(get16(before,2)>>11)&7, next=(top-1)&7;
 if(((get16(after,2)>>11)&7)!=next||after.bytes[4]!=(before.bytes[4]|(1u<<next)))return false;
 if(get16(after,2)&0x0200)return false; // final FLD64 clears C1.
 if(get16(before,0)!=get16(after,0)||std::memcmp(before.bytes+24,after.bytes+24,4))return false;
 for(unsigned i=0;i<7;++i)if(before.bytes[4]&(1u<<((top+i)&7)))
  if(std::memcmp(before.bytes+32+16*i,after.bytes+32+16*(i+1),10))return false;
 return true;
}
static State seed() {
 reset();
 for(std::int32_t i=0;i<7;++i){const std::int32_t v=12345+i*17;__asm__ volatile("fildl %0" : : "m"(v) : X87, "memory");}
 State s;save(s);return s;
}
static bool restored_caller() {
 State before=seed();put16(before,0,0x0b7f);
 const std::uint32_t mx=0xbfc0;std::memcpy(before.bytes+24,&mx,4);restore(before);
 State expected;save(expected);
 State base=before;base.bytes[4]=0;put16(base,0,0x007f);put16(base,2,0);
 const std::uint32_t basemx=0x1f80;std::memcpy(base.bytes+24,&basemx,4);
 double input;const std::uint64_t word=UINT64_C(0x3ff8000000000000);std::memcpy(&input,&word,8);
 State got;round_capture(FUN_002eca8b,&input,&got,&base);State after;save(after);
 return equal(expected,after)&&contract(base,got);
}
static bool one_empty_slot() {
 State base=seed(); // Seven live entries; only the next physical push slot is empty.
 put16(base,0,0x037f);
 const std::uint64_t raw=UINT64_C(0x3ff8000000000000);
 double input;std::memcpy(&input,&raw,8);
 State got;round_capture(FUN_002eca8b,&input,&got,&base);
 const std::uint64_t sig=UINT64_C(0x8000000000000000);const std::uint16_t exp=0x4000;
 return contract(base,got)&&got.bytes[4]==0xff&&
  std::memcmp(got.bytes+32,&sig,8)==0&&std::memcmp(got.bytes+40,&exp,2)==0;
}
static bool anchors_and_span() {
 struct Anchor {std::uint64_t input,significand;std::uint16_t exponent;};
 const Anchor anchors[]={
  {0,0,0},{UINT64_C(0x8000000000000000),0,0x8000},
  {UINT64_C(0x3ff0000000000000),UINT64_C(0x8000000000000000),0x3fff},
  {UINT64_C(0xbff0000000000000),UINT64_C(0x8000000000000000),0xbfff},
  {UINT64_C(0x4000000000000000),UINT64_C(0x8000000000000000),0x4000},
  {UINT64_C(0x7ff0000000000000),UINT64_C(0x8000000000000000),0x7fff},
  {UINT64_C(0xfff0000000000000),UINT64_C(0x8000000000000000),0xffff},
  {UINT64_C(0x7fefffffffffffff),UINT64_C(0xfffffffffffff800),0x43fe}};
 const long page=sysconf(_SC_PAGESIZE);if(page<=0)return false;
 auto *mem=static_cast<unsigned char *>(mmap(nullptr,static_cast<std::size_t>(page)*2,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0));
 if(mem==MAP_FAILED)return false;
 if(mprotect(mem+page,static_cast<std::size_t>(page),PROT_NONE))return false;
 auto *input=::new(static_cast<void *>(mem+page-8)) double;
 for(unsigned pc:{0u,2u,3u})for(unsigned rc=0;rc<4;++rc){
  State base=seed();base.bytes[4]=0;put16(base,2,0);put16(base,0,static_cast<std::uint16_t>(0x007f|(pc<<8)|(rc<<10)));
  for(const auto &a:anchors){
   std::memcpy(input,&a.input,8);State got;pointer_capture(pointer_candidate,input,&got,&base);
   if(std::memcmp(got.bytes+32,&a.significand,8)||std::memcmp(got.bytes+40,&a.exponent,2)||!contract(base,got)||std::memcmp(input,&a.input,8))return false;
  }
  // Ties-to-even (nearest), floor, ceiling, truncate of +1.5 and -1.5.
  for(unsigned sign=0;sign<2;++sign){
   const std::uint64_t raw=UINT64_C(0x3ff8000000000000)|(static_cast<std::uint64_t>(sign)<<63);
   const bool two=sign ? (rc==0||rc==1) : (rc==0||rc==2);
   const std::uint64_t sig=UINT64_C(0x8000000000000000);const std::uint16_t exp=static_cast<std::uint16_t>((two?0x4000:0x3fff)|(sign?0x8000:0));
   std::memcpy(input,&raw,8);State got;round_capture(FUN_002eca8b,input,&got,&base);
   if(std::memcmp(got.bytes+32,&sig,8)||std::memcmp(got.bytes+40,&exp,2)||!contract(base,got)||!(get16(got,2)&0x20))return false;
  }
 }
 return munmap(mem,static_cast<std::size_t>(page)*2)==0;
}
static std::uint64_t rng=UINT64_C(0x002eca8bcafe3851);
static std::uint64_t random_word(){rng^=rng<<13;rng^=rng>>7;rng^=rng<<17;return rng;}
int main(){
 State saved;save(saved);struct Guard{State&s;~Guard(){restore(s);}} guard{saved};
 if(!anchors_and_span()||!restored_caller()||!one_empty_slot())return 2;
 std::vector<std::uint64_t> inputs={0,UINT64_C(0x8000000000000000),1,UINT64_C(0x8000000000000001),
  UINT64_C(0x000fffffffffffff),UINT64_C(0x800fffffffffffff),UINT64_C(0x0010000000000000),UINT64_C(0x8010000000000000),
  UINT64_C(0x3fe0000000000000),UINT64_C(0xbfe0000000000000),UINT64_C(0x3fefffffffffffff),UINT64_C(0xbfefffffffffffff),
  UINT64_C(0x3ff0000000000000),UINT64_C(0xbff0000000000000),UINT64_C(0x3ff0000000000001),UINT64_C(0xbff0000000000001),
  UINT64_C(0x3ff8000000000000),UINT64_C(0xbff8000000000000),UINT64_C(0x4004000000000000),UINT64_C(0xc004000000000000),
  UINT64_C(0x433fffffffffffff),UINT64_C(0xc33fffffffffffff),UINT64_C(0x4340000000000000),UINT64_C(0xc340000000000000),
  UINT64_C(0x7fefffffffffffff),UINT64_C(0xffefffffffffffff),UINT64_C(0x7ff0000000000000),UINT64_C(0xfff0000000000000),
  UINT64_C(0x7ff8000000000000),UINT64_C(0xfff8000000000000),UINT64_C(0x7ff8123456789abc),UINT64_C(0xfff8123456789abc),
  UINT64_C(0x7ff0000000000001),UINT64_C(0xfff0000000000001),UINT64_C(0x7ff0123456789abc),UINT64_C(0xfff0123456789abc),
  UINT64_C(0x7fffffffffffffff),UINT64_C(0xffffffffffffffff)};
 for(unsigned i=0;i<64;++i)inputs.push_back(random_word());
 const State initial=seed();std::uint64_t cases=0;
 for(unsigned pc:{0u,2u,3u})for(unsigned rc=0;rc<4;++rc)for(unsigned mxmode=0;mxmode<16;++mxmode)
 for(unsigned pattern=0;pattern<128;++pattern)for(unsigned top=0;top<8;++top)
 for(unsigned sticky:{0u,0x3fu,0x0200u,0x4700u,0x473fu,0x477fu}){
  State base=initial;put16(base,0,static_cast<std::uint16_t>(0x007f|(pc<<8)|(rc<<10)));put16(base,2,static_cast<std::uint16_t>(sticky|(top<<11)));
  base.bytes[4]=0;for(unsigned i=0;i<7;++i)if(pattern&(1u<<i))base.bytes[4]|=static_cast<unsigned char>(1u<<((top+i)&7));
  const std::uint32_t mx=0x1f80|((mxmode&3)<<13)|((mxmode&4)?0x40:0)|((mxmode&8)?0x8000:0)|(sticky&0x3f);std::memcpy(base.bytes+24,&mx,4);
  for(auto word:inputs){
   std::array<double,3> objects;const std::uint64_t sentinel=UINT64_C(0xa1b2c3d4e5f60718);
   std::memcpy(&objects[0],&sentinel,8);std::memcpy(&objects[1],&word,8);std::memcpy(&objects[2],&sentinel,8);
   State expected,actual;round_capture(round_oracle,&objects[1],&expected,&base);round_capture(FUN_002eca8b,&objects[1],&actual,&base);++cases;
   if(!equal(expected,actual)||!contract(base,actual)){
    std::fprintf(stderr,"Mismatch input=%016llx pc=%u rc=%u mx=%08x pattern=%u top=%u sticky=%04x sw=%04x/%04x\n",static_cast<unsigned long long>(word),pc,rc,mx,pattern,top,sticky,get16(actual,2),get16(expected,2));return 1;
   }
   if(std::memcmp(&objects[1],&word,8)||std::memcmp(&objects[0],&sentinel,8)||std::memcmp(&objects[2],&sentinel,8))return 3;
  }
 }
 std::printf("%llu binary80-return/x87-state/MXCSR comparisons passed (%zu binary64 inputs)\n",static_cast<unsigned long long>(cases),inputs.size());
}
