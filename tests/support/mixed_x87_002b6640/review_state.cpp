// Reviewer-authored old-register/control expansion, reusing only the tested
// capture/seed helpers. This is not an independent numerical oracle.
#include "harness_fragment.hpp"
int main() {
 State base{}; save(base); std::uint64_t count=0;
 // Defined, canonical, and unsupported encodings are never operated on.
 // FXRSTOR/FNSTENV must roundtrip each as a consistent old register state.
 const std::uint64_t sigs[]={0,1,UINT64_C(0x8000000000000000),UINT64_C(0x8000000000000001),UINT64_C(0x7fffffffffffffff),UINT64_C(0xffffffffffffffff),UINT64_C(0x4000000000000000),UINT64_C(0xc000000000000000)};
 const unsigned exps[]={0,1,0x3fff,0x7ffe,0x7fff};
 for(unsigned pc:{24u,53u,64u}) for(unsigned rc=0;rc<4;++rc)
 for(unsigned top=0;top<8;++top) for(unsigned occupancy=0;occupancy<64;++occupancy)
 for(unsigned sample=0;sample<8;++sample) {
  State s=seed(base,pc,rc,((sample&3)<<13)|((sample&4)?0x8040:0),top,occupancy,0x7f,63,0);
  sh(s.b,half(s.b)|((sample&1)?0x1000:0)); // Preserved IC control bit.
  const unsigned cc=(sample*3+occupancy)%16;
  sh(s.b+2,half(s.b+2)|((cc&7)<<8)|((cc&8)<<11));
  for(unsigned logical=0;logical<6;++logical){
   const unsigned k=(sample+logical)%8;
   std::memcpy(s.b+32+16*logical,&sigs[k],8);
   sh(s.b+40+16*logical,exps[(sample+logical+occupancy)%5]|(((top+logical)&1)<<15));
  }
  if(!roundtrip(s)){std::fprintf(stderr,"seed failed %llu\n",(unsigned long long)count);return 10;}
  std::array<std::uint32_t,24> in{};for(auto&w:in)w=random_word();
  if(!check(in,2,10,18,s,count++))return 11;
 }
 std::printf("PASS reviewer old80/control expansion: %llu consistent seeds and full-wrapper comparisons; all TOP/occupancies; pseudo-denormal/unnormal/pseudo-infinity and raw special encodings; IC and all CC seeds. No original bytes executed.\n",(unsigned long long)count);
}
