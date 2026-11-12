#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
struct Input { std::uint32_t b[3], c[3]; std::uint16_t cw,sw; std::uint8_t pattern,pad[3]; std::uint32_t mx; };
struct alignas(16) State { unsigned char data[512]; };
struct alignas(16) Result { unsigned char data[5456]; };
static_assert(sizeof(Input)==36 && sizeof(Result)==5456,"wire");
extern "C" void review_capture(const State*,const std::uint32_t*,const std::uint32_t*,Result*);
template<class T> void put(unsigned char* dst,T x) { std::memcpy(dst,&x,sizeof(x)); }
int main() {
 State base{}; __asm__ volatile("fxsave %0":"=m"(base)::"memory");
 const std::uint64_t sig[6]={0xa999999999999999ULL,0,0x8000000000000000ULL,0xc001122334455667ULL,0x8000122334455667ULL,0x0000000076543210ULL};
 const std::uint16_t se[6]={0xc00b,0x8000,0xffff,0x7fff,0xffff,0x0000};
 Input in{};
 for (;;) {
  const auto n=std::fread(&in,1,sizeof(in),stdin); if(!n)break; if(n!=sizeof(in))return 2;
  if((in.cw&63)!=63 || ((in.cw>>8)&3)==1 || (in.sw&0x8080) || ((in.sw&64)&&!(in.sw&1)) || in.pattern>63)return 3;
  State s=base; put(s.data,in.cw); put(s.data+2,in.sw); put(s.data+24,in.mx); s.data[4]=0;
  const unsigned top=(in.sw>>11)&7;
  for(unsigned j=0;j<6;++j) { if(in.pattern&(1u<<j))s.data[4]|=static_cast<unsigned char>(1u<<((top+j)&7)); put(s.data+32+16*j,sig[j]); put(s.data+40+16*j,se[j]); }
  Result r{}; review_capture(&s,in.b,in.c,&r);
  if(std::fwrite(r.data,1,sizeof(r),stdout)!=sizeof(r))return 4;
 }
 return std::ferror(stdin)?5:0;
}
