/* Synthetic low-3-lane storage regression, not native Xbox execution. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>
#define CHECK(x) do { if (!(x)) {fprintf(stderr,"FAIL %s:%d\n",#x,__LINE__); return 1;} } while(0)
int main(void) {
    uint32_t original[3] = {0x3f800000u,0x40000000u,0x40400000u};
    float lane[3];memcpy(lane,original,sizeof lane);
    CHECK(lane[0]==1.f && lane[1]==2.f && lane[2]==3.f);
    struct {uint32_t guard1;float vec[3];uint32_t guard2;} g=
        {0xa5a5a5a5u,{3.f,4.f,0.f},0x5a5a5a5au};
    CHECK(sizeof g.vec==12);
    CHECK((uintptr_t)&g.vec[2]-(uintptr_t)&g.vec[0]==8);
    float mag2=(g.vec[1]*g.vec[1]+g.vec[2]*g.vec[2])+g.vec[0]*g.vec[0];
    CHECK(mag2==25.f);
    if(mag2>=2e-05f) {
        float inv=_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(mag2)));
        for(unsigned i=0;i<3;i++)g.vec[i]*=inv;
    }
    CHECK(g.vec[0]>0.59f && g.vec[0]<0.61f);
    CHECK(g.vec[1]>0.79f && g.vec[1]<0.81f);
    CHECK(g.vec[2]==0.f);
    CHECK(g.guard1==0xa5a5a5a5u && g.guard2==0x5a5a5a5au);
    puts("PASS: 3 guest F32 lanes, SSE reciprocal sqrt and untouched guards");
    return 0;
}
