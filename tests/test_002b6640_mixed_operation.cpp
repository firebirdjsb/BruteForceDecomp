/* Authored helper/transport tests. No original machine code is executed.
 * Same-sequence native reference tests transport only, not independent math.
 * Independent integer/Fraction end-to-end checks use --stream separately. */
#include <array>
#include <cstdint>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
void FUN_002b6640(float*,float*,float*);
struct alignas(16) State { unsigned char b[512]; };
struct alignas(16) Captured {
 State state; unsigned char env[32]; State before; State restored;
 std::uint64_t bad_gpr;
};
static_assert(offsetof(Captured,env)==512 && offsetof(Captured,before)==544 &&
              offsetof(Captured,restored)==1056 && offsetof(Captured,bad_gpr)==1568,"capture layout");
using Function=void(*)(float*,float*,float*);
extern "C" void mixed_capture(Function,float*,float*,float*,const State*,Captured*);
extern "C" void mixed_reference(float*,float*,float*);
extern "C" void mixed_noop(float*,float*,float*);
// Six pushes and 24 private bytes align RSP at CALL. No C++ or FP operation
// between seed, measured call, FXSAVE, full-tag FNSTENV, and restore snapshots.
// FNSTENV masks exceptions only AFTER measurement; FXRSTOR restores caller.
__asm__(
 ".text\n.globl mixed_capture\n.type mixed_capture,@function\nmixed_capture:\nendbr64\n"
 "pushq %rbx\npushq %rbp\npushq %r12\npushq %r13\npushq %r14\npushq %r15\nsubq $24,%rsp\n"
 "movq %r9,0(%rsp)\nmovq %rdi,8(%rsp)\nfxsave 544(%r9)\nfxrstor (%r8)\n"
 "movq %rsi,%rdi\nmovq %rdx,%rsi\nmovq %rcx,%rdx\n"
 "movq $0x11335577,%rbx\nmovq $0x22446688,%rbp\nmovq $0x33557711,%r12\nmovq $0x44668822,%r13\nmovq $0x55771133,%r14\nmovq $0x66882244,%r15\n"
 "call *8(%rsp)\nmovq 0(%rsp),%r10\nfxsave (%r10)\nfnstenv 512(%r10)\nxorq %r11,%r11\n"
 "cmpq $0x11335577,%rbx\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x22446688,%rbp\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x33557711,%r12\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x44668822,%r13\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x55771133,%r14\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "cmpq $0x66882244,%r15\nsete %al\nxorb $1,%al\nmovzbq %al,%rax\norq %rax,%r11\n"
 "movq %r11,1568(%r10)\nfxrstor 544(%r10)\nfxsave 1056(%r10)\n"
 "addq $24,%rsp\npopq %r15\npopq %r14\npopq %r13\npopq %r12\npopq %rbp\npopq %rbx\nret\n.size mixed_capture,.-mixed_capture\n"
 ".globl mixed_noop\n.type mixed_noop,@function\nmixed_noop:\nendbr64\nret\n.size mixed_noop,.-mixed_noop\n"
 // Independently transcribed authored AT&T sequence, never copied bytes.
 ".globl mixed_reference\n.type mixed_reference,@function\nmixed_reference:\nendbr64\nsubq $8,%rsp\n"
 "flds 8(%rsi)\nfmuls 8(%rdx)\nflds 4(%rsi)\nfmuls 4(%rdx)\nfaddp %st,%st(1)\n"
 "flds 0(%rsi)\nfmuls 0(%rdx)\nfaddp %st,%st(1)\nfchs\nfstps 0(%rsp)\n"
 "movss 0(%rsp),%xmm3\nmovss 0(%rdx),%xmm2\nmovhps 4(%rdx),%xmm2\n"
 "shufps $0,%xmm3,%xmm3\nmovss 0(%rsi),%xmm1\nmovhps 4(%rsi),%xmm1\n"
 "mulps %xmm3,%xmm2\naddps %xmm2,%xmm1\nmovss %xmm1,0(%rdi)\nmovhps %xmm1,4(%rdi)\n"
 "addq $8,%rsp\nret\n.size mixed_reference,.-mixed_reference\n");
static std::uint16_t half(const unsigned char*p){std::uint16_t x;std::memcpy(&x,p,2);return x;}
static std::uint32_t word(const unsigned char*p){std::uint32_t x;std::memcpy(&x,p,4);return x;}
static std::uint64_t wide(const unsigned char*p){std::uint64_t x;std::memcpy(&x,p,8);return x;}
static void sh(unsigned char*p,std::uint16_t x){std::memcpy(p,&x,2);}
static void sw(unsigned char*p,std::uint32_t x){std::memcpy(p,&x,4);}
static void save(State&s){__asm__ volatile("fxsave %0":"=m"(s)::"memory");}
static std::uint16_t fulltags(const State&s){
 const unsigned top=(half(s.b+2)>>11)&7;unsigned tags=0;
 for(unsigned i=0;i<8;++i){
  const unsigned phys=(top+i)&7;unsigned t=3;
  if(s.b[4]&(1u<<phys)){
   const std::uint64_t sig=wide(s.b+32+16*i);const unsigned exp=half(s.b+40+16*i)&0x7fff;
   t=exp==0&&!sig?1:(exp>0&&exp<0x7fff&&(sig>>63))?0:2;
  }
  tags|=t<<(2*phys);
 }
 return static_cast<std::uint16_t>(tags);
}
static bool live_equal(const State&a,const State&b){
 if(half(a.b)!=half(b.b)||(half(a.b+2)&0x3800)!=(half(b.b+2)&0x3800)||a.b[4]!=b.b[4])return false;
 const unsigned top=(half(a.b+2)>>11)&7;
 for(unsigned i=0;i<8;++i)if(a.b[4]&(1u<<((top+i)&7)))if(std::memcmp(a.b+32+16*i,b.b+32+16*i,10))return false;
 return true;
}
static bool restored(const Captured&c){
 // Defined state only: reserved FXSAVE bytes and inactive register payloads
 // are intentionally excluded. XMM caller values are checked separately.
 return !c.bad_gpr && live_equal(c.before,c.restored) &&
  half(c.before.b+2)==half(c.restored.b+2) &&
  !std::memcmp(c.before.b+6,c.restored.b+6,22) &&
  !std::memcmp(c.before.b+160,c.restored.b+160,256);
}
static bool contract(const State&s,const Captured&c){
 const unsigned prior_sw=half(s.b+2),actual_sw=half(c.state.b+2);
 return restored(c)&&live_equal(s,c.state)&&fulltags(s)==half(c.env+8)&&
  (actual_sw&0x80c0)==(prior_sw&0x80c0)&& // SF preserved; ES/B clear.
  (actual_sw&prior_sw&0x3f)==(prior_sw&0x3f)&&
  (word(c.state.b+24)&~0x3fu)==(word(s.b+24)&~0x3fu)&&
  (word(c.state.b+24)&word(s.b+24)&0x3f)==(word(s.b+24)&0x3f);
}
static State seed(const State&base,unsigned pc,unsigned rc,unsigned mx,unsigned top,unsigned occupancy,unsigned xf,unsigned mf,unsigned conditions){
 State s=base;sh(s.b,static_cast<std::uint16_t>(0x7f|((pc==24?0:pc==53?2:3)<<8)|(rc<<10)));
 sh(s.b+2,static_cast<std::uint16_t>((top<<11)|xf|(conditions&0x4700)));
 s.b[4]=0;for(unsigned i=0;i<6;++i)if(occupancy&(1u<<i))s.b[4]|=static_cast<unsigned char>(1u<<((top+i)&7));
 sw(s.b+24,0x1f80|mx|mf);
 // Each logical old position cycles representative valid binary80 classes.
 const std::uint64_t sigs[]={UINT64_C(0x8123456789abcdef),0,UINT64_C(0x8000000000000000),UINT64_C(0xc123456789abcdef),UINT64_C(0x8000000000000042),1};
 const std::uint16_t exps[]={0x4001,0x8000,0x7fff,0xffff,0x7fff,0x8000};
 for(unsigned i=0;i<8;++i){unsigned k=(i+top)%6;std::memcpy(s.b+32+16*i,&sigs[k],8);sh(s.b+40+16*i,exps[k]);}
 for(unsigned i=0;i<16;++i)for(unsigned j=0;j<4;++j)sw(s.b+160+16*i+4*j,0x7f800001+i*37+j);
 return s;
}
static bool roundtrip(const State&s){
 Captured c{};mixed_capture(mixed_noop,nullptr,nullptr,nullptr,&s,&c);
 return contract(s,c)&&half(s.b+2)==half(c.state.b+2)&&word(s.b+24)==word(c.state.b+24);
}
static std::uint64_t rng=UINT64_C(0x002b664040560001);
static std::uint32_t random_word(){rng^=rng<<13;rng^=rng>>7;rng^=rng<<17;return static_cast<std::uint32_t>(rng);}
static const std::uint32_t edges[]={0,0x80000000,1,0x80000001,0x7fffff,0x807fffff,0x800000,0x80800000,0x800001,0x80800001,0x3f800000,0xbf800000,0x3f800001,0xbf800001,0x33800000,0xb3800000,0x33000000,0xb3000000,0x7f7fffff,0xff7fffff,0x7f800000,0xff800000,0x7fc12345,0xffc12345,0x7fc00001,0xffc00001,0x7f800001,0xff800001,0x7f812345,0xff812345};
constexpr unsigned ne=sizeof(edges)/sizeof(edges[0]);
static bool check(const std::array<std::uint32_t,24>&input,unsigned b,unsigned c,unsigned o,const State&s,std::uint64_t number){
 float actual[24],expected[24];std::memcpy(actual,input.data(),sizeof(actual));std::memcpy(expected,input.data(),sizeof(expected));
 Captured a{},e{};mixed_capture(FUN_002b6640,actual+o,actual+b,actual+c,&s,&a);mixed_capture(mixed_reference,expected+o,expected+b,expected+c,&s,&e);
 const bool ok=!std::memcmp(actual,expected,sizeof(actual))&&contract(s,a)&&contract(s,e)&&
  half(a.state.b+2)==half(e.state.b+2)&&word(a.state.b+24)==word(e.state.b+24)&&
  word(a.state.b+208)==word(e.state.b+208);
 if(!ok)std::fprintf(stderr,"case=%llu b/c/o=%u/%u/%u sw=%04x/%04x csr=%08x/%08x scratch=%08x/%08x contract=%d/%d\n",(unsigned long long)number,b,c,o,half(a.state.b+2),half(e.state.b+2),word(a.state.b+24),word(e.state.b+24),word(a.state.b+208),word(e.state.b+208),contract(s,a),contract(s,e));
 return ok;
}
static bool guards(const State&base,std::uint64_t&count){
 const long ps=sysconf(_SC_PAGESIZE);if(ps<=0)return false;
 void*maps[3];unsigned char*pages[3];
 for(unsigned j=0;j<3;++j){maps[j]=mmap(nullptr,static_cast<std::size_t>(ps)*3,PROT_NONE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);if(maps[j]==MAP_FAILED)return false;pages[j]=static_cast<unsigned char*>(maps[j])+ps;}
 bool ok=true;
 for(unsigned pc:{24u,53u,64u})for(unsigned rc=0;rc<4;++rc)for(unsigned mm=0;mm<16;++mm)for(unsigned sides=0;sides<8;++sides){
  float*ptr[3];std::uint32_t raw[2][3];
  for(unsigned j=0;j<3;++j){
   if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ|PROT_WRITE))return false;
   std::memset(pages[j],0x55+j,static_cast<std::size_t>(ps));void*at=pages[j]+((sides&(1<<j))?ps-12:0);
   struct Triple{float a[3];};static_assert(sizeof(Triple)==12,"exact live span");ptr[j]=(::new(at)Triple{})->a;
   if(j<2){for(unsigned k=0;k<3;++k)raw[j][k]=edges[(count+j*7+k)%ne];std::memcpy(ptr[j],raw[j],12);if(mprotect(pages[j],static_cast<std::size_t>(ps),PROT_READ))return false;}
  }
  const State s=seed(base,pc,rc,((mm&3)<<13)|((mm&4)?64:0)|((mm&8)?0x8000:0),count%8,63,0x7f,63,0x4700);
  float expected[3],b[3],c[3];std::memcpy(b,raw[0],12);std::memcpy(c,raw[1],12);
  Captured a{},e{};mixed_capture(mixed_reference,expected,b,c,&s,&e);mixed_capture(FUN_002b6640,ptr[2],ptr[0],ptr[1],&s,&a);
  ok=ok&&!std::memcmp(ptr[2],expected,12)&&!std::memcmp(ptr[0],raw[0],12)&&!std::memcmp(ptr[1],raw[1],12)&&contract(s,a)&&half(a.state.b+2)==half(e.state.b+2)&&word(a.state.b+24)==word(e.state.b+24);
  for(unsigned j=0;j<3;++j)for(long i=0;i<ps;++i)if((pages[j]+i<reinterpret_cast<unsigned char*>(ptr[j])||pages[j]+i>=reinterpret_cast<unsigned char*>(ptr[j])+12)&&pages[j][i]!=0x55+j)ok=false;
  ++count;
 }
 for(unsigned j=0;j<3;++j)munmap(maps[j],static_cast<std::size_t>(ps)*3);
 return ok;
}
static int stream(const State&base){
 unsigned pc,rc,mx;std::uint32_t b[3],c[3];std::uint64_t n=0;
 while(std::scanf("%u %u %x %x %x %x %x %x %x",&pc,&rc,&mx,&b[0],&b[1],&b[2],&c[0],&c[1],&c[2])==9){
  if((pc!=24&&pc!=53&&pc!=64)||rc>3||(mx&~0xe040u))return 5;
  const State s=seed(base,pc,rc,mx,n%8,n%64,0,0,(n%16)<<8);
  float bb[3],cc[3],oo[3];std::memcpy(bb,b,12);std::memcpy(cc,c,12);Captured a{};
  mixed_capture(FUN_002b6640,oo,bb,cc,&s,&a);
  if(!contract(s,a))return 6;
  std::uint32_t o[3];std::memcpy(o,oo,12);
  std::printf("%08x %08x %08x %08x %04x %08x\n",word(a.state.b+208),o[0],o[1],o[2],half(a.state.b+2),word(a.state.b+24));++n;
 }
 return std::ferror(stdin)?7:0;
}
int main(int argc,char**argv){
 State base{};save(base);const unsigned mask=word(base.b+28)?word(base.b+28):0xffbf;
 if((mask&0xffff)!=0xffff){std::fprintf(stderr,"DAZ/FTZ mode capability missing; no mode silently dropped\n");return 2;}
 if(argc==2&&std::strcmp(argv[1],"--stream")==0)return stream(base);
 if(argc==2&&std::strcmp(argv[1],"--guards-only")==0){std::uint64_t n=0;return guards(base,n)?0:4;}
 std::uint64_t count=0,roundtrips=0;
 for(unsigned pc:{24u,53u,64u})for(unsigned rc=0;rc<4;++rc)for(unsigned mm=0;mm<16;++mm){
  const unsigned mx=((mm&3)<<13)|((mm&4)?64:0)|((mm&8)?0x8000:0);
  // Independently vary both domains' full sticky combinations, all TOPs and
  // six-old-slot occupancy patterns. This includes six live old entries.
  for(unsigned xf=0;xf<64;++xf)for(unsigned mf=0;mf<64;++mf){
   const State s=seed(base,pc,rc,mx,(xf+mf)%8,(xf*7+mf)%64,xf,mf,((xf^mf)&15)<<8);
   if(!roundtrip(s))return 3;
   ++roundtrips;
   std::array<std::uint32_t,24> in{};for(unsigned j=0;j<24;++j)in[j]=edges[(j*7+xf*3+mf)%ne];
   if(!check(in,2,10,18,s,count++))return 1;
  }
  for(unsigned top=0;top<8;++top)for(unsigned occupied=0;occupied<64;++occupied){
   const State s=seed(base,pc,rc,mx,top,occupied,0x7f,63,0x4700);
   if(!roundtrip(s))return 3;
   ++roundtrips;
   std::array<std::uint32_t,24> in{};for(auto&w:in)w=random_word();
   if(!check(in,2,10,18,s,count++))return 1;
  }
  // All triple-overlap offsets in -2..2, plus disjoint/equal arrangements.
  for(int db=-2;db<=2;++db)for(int dc=-2;dc<=2;++dc)for(unsigned shift=0;shift<ne;++shift){
   const State s=seed(base,pc,rc,mx,shift%8,63,shift&63,(shift*7)&63,0x4700);
   std::array<std::uint32_t,24> in{};for(unsigned j=0;j<24;++j)in[j]=edges[(j*7+shift)%ne];
   if(!check(in,10+db,10+dc,10,s,count++))return 1;
  }
  for(unsigned shift=0;shift<ne;++shift)for(unsigned k=0;k<6;++k){
   const unsigned places[][3]={{2,2,18},{2,10,2},{2,10,10},{2,10,18},{2,4,18},{4,2,18}};
   const State s=seed(base,pc,rc,mx,shift%8,63,0x7f,63,0x4700);
   std::array<std::uint32_t,24> in{};for(unsigned j=0;j<24;++j)in[j]=edges[(j*3+shift)%ne];
   if(!check(in,places[k][0],places[k][1],places[k][2],s,count++))return 1;
  }
 }
 const auto beforeguards=count;if(!guards(base,count)){std::fprintf(stderr,"guard/span test failed\n");return 4;}
 std::printf("PASS native transport: %llu comparisons (%llu protected-page cases); %llu valid seed roundtrips; PC24/53/64 x independent x87/SSE RC x DAZ/FTZ, independent 64x64 sticky seeds, all TOP/6-slot occupancies, full tags/live80, full SW same-host reference, controls, six callee-saved GPRs, caller restore, overlap. Independent math not implied.\n",(unsigned long long)count,(unsigned long long)(count-beforeguards),(unsigned long long)roundtrips);
}
