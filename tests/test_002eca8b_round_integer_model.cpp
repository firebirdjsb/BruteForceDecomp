#include <cstdint>
#include <cstring>
#include <cstdio>
#include <vector>
struct alignas(16) State { unsigned char b[512]; };
long double FUN_002eca8b(double);
extern "C" void review_capture(long double(*)(double),const std::uint64_t*,State*,const State*);
__asm__(".text\n.globl review_capture\n.type review_capture,@function\nreview_capture:\n"
"pushq %rbx\nsubq $512,%rsp\nfxsave (%rsp)\nmovq %rdi,%rax\nmovq %rdx,%rbx\nfxrstor (%rcx)\nmovq (%rsi),%xmm0\ncall *%rax\nfxsave (%rbx)\nfxrstor (%rsp)\naddq $512,%rsp\npopq %rbx\nret\n.size review_capture,.-review_capture\n");
static unsigned u16(const State&s,unsigned i){std::uint16_t n;std::memcpy(&n,s.b+i,2);return n;}
static std::uint64_t u64(const State&s,unsigned i){std::uint64_t n;std::memcpy(&n,s.b+i,8);return n;}
static void set16(State&s,unsigned i,std::uint16_t n){std::memcpy(s.b+i,&n,2);}
struct Expect {std::uint64_t sig;unsigned exp,flags;};
static Expect model(std::uint64_t w,unsigned rc){
 unsigned sign=w>>63,e=(w>>52)&2047;std::uint64_t frac=w&UINT64_C(0xfffffffffffff);unsigned flags=0;
 if(e==2047)return {UINT64_C(0x8000000000000000)|(frac<<11)|(frac?UINT64_C(0x4000000000000000):0),0x7fffu|(sign<<15),(frac&&!(frac&UINT64_C(0x8000000000000)))?1u:0u};
 if(!e&&!frac)return {0,sign<<15,0};
 if(!e)flags|=2;
 std::uint64_t mant=frac|(e?UINT64_C(0x10000000000000):0);
 int shift=e?1075-static_cast<int>(e):1074;
 if(shift<=0)return {mant<<11,static_cast<unsigned>(static_cast<int>(e)-1023+16383)|(sign<<15),flags};
 std::uint64_t n=0,r=mant,half=0;
 if(shift<64){n=mant>>shift;r=mant&((UINT64_C(1)<<shift)-1);half=UINT64_C(1)<<(shift-1);}
 if(r){flags|=32;bool inc=rc==0?(shift<64&&(r>half||(r==half&&(n&1)))):rc==1?sign:rc==2?!sign:false;n+=inc;}
 if(!n)return {0,sign<<15,flags};
 unsigned bit=63-__builtin_clzll(n);return {n<<(63-bit),(16383+bit)|(sign<<15),flags};
}
int main(){
 State blank{};__asm__ volatile("fxsave %0":"=m"(blank)::"memory");
 std::vector<std::uint64_t> words={0,UINT64_C(0x8000000000000000),1,UINT64_C(0xfffffffffffff),UINT64_C(0x10000000000000),UINT64_C(0x3fdfffffffffffff),UINT64_C(0x3fe0000000000000),UINT64_C(0x3fe0000000000001),UINT64_C(0x3ff0000000000000),UINT64_C(0x3ff0000000000001),UINT64_C(0x3ff8000000000000),UINT64_C(0x4004000000000000),UINT64_C(0x4170000010000000),UINT64_C(0x432fffffffffffff),UINT64_C(0x4330000000000000),UINT64_C(0x433fffffffffffff),UINT64_C(0x7fefffffffffffff),UINT64_C(0x7ff0000000000000),UINT64_C(0x7ff8000000000000),UINT64_C(0x7ff8123456789abc),UINT64_C(0x7ff0000000000001),UINT64_C(0x7ff0123456789abc),UINT64_C(0x7fffffffffffffff)};
 auto orig=words;for(auto x:orig)words.push_back(x|UINT64_C(0x8000000000000000));
 std::uint64_t rng=0xe221fc0d3a234aa7;for(unsigned i=0;i<128;++i){rng^=rng<<13;rng^=rng>>7;rng^=rng<<17;words.push_back(rng);}
 std::uint64_t cases=0;
 for(unsigned pc:{0u,2u,3u})for(unsigned rc=0;rc<4;++rc)for(unsigned top=0;top<8;++top)for(unsigned pat=0;pat<128;++pat)for(unsigned sticky:{0u,0x7fu}){
  State base=blank;set16(base,0,0x7f|(pc<<8)|(rc<<10));set16(base,2,sticky|0x4700|(top<<11));base.b[4]=0;
  for(unsigned i=0;i<7;++i){if(pat&(1u<<i))base.b[4]|=1u<<((top+i)&7);auto sig=UINT64_C(0x8000000000000000)+(static_cast<std::uint64_t>(i)<<53);std::memcpy(base.b+32+16*i,&sig,8);set16(base,40+16*i,0x3fff+i);}
  std::uint32_t mx=0xffc0;std::memcpy(base.b+24,&mx,4);
  for(auto w:words){Expect ex=model(w,rc);State got{};review_capture(FUN_002eca8b,&w,&got,&base);++cases;
   unsigned next=(top+7)&7;bool ok=u64(got,32)==ex.sig&&u16(got,40)==ex.exp&&((u16(got,2)&0x7f)==(sticky|ex.flags))&&((u16(got,2)&0x3a00)==(next<<11))&&u16(got,0)==u16(base,0)&&got.b[4]==(base.b[4]|(1u<<next))&&!std::memcmp(got.b+24,base.b+24,4);
   for(unsigned i=0;i<7;++i)if(pat&(1u<<i))ok=ok&&!std::memcmp(base.b+32+16*i,got.b+48+16*i,10);
   if(!ok){std::printf("FAIL w=%016llx pc=%u rc=%u top=%u pat=%u sticky=%x got=%04x:%016llx flags=%04x want=%04x:%016llx flags=%x\n",(unsigned long long)w,pc,rc,top,pat,sticky,u16(got,40),(unsigned long long)u64(got,32),u16(got,2),ex.exp,(unsigned long long)ex.sig,sticky|ex.flags);return 1;}
  }
 }
 std::printf("Independent integer bit model passed: %llu cases, %zu raw64 inputs; exact binary80, IE/DE/PE/SF, TOP/C1/tags/old live80, CW/MXCSR.\n",(unsigned long long)cases,words.size());
}
