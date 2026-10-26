/* Synthetic original instruction storage exercise, not linked Xbox behavior. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); return 1; } } while(0)
static uint64_t pack(float low,float high) {
    uint32_t words[2];
    memcpy(&words[0],&low,4);
    memcpy(&words[1],&high,4);
    return (uint64_t)words[0] | ((uint64_t)words[1] << 32);
}
int main(void) {
    float lo=-0.0f,hi=1.0f;
    uint64_t both=pack(lo,hi);
    CHECK((uint32_t)both==0x80000000u);
    CHECK((uint32_t)(both>>32)==0x3f800000u);
    float len=0.7f; /* unflagged path retains the incoming guest stack F32 */
    CHECK(len>0.69f && len<0.71f);
    float x=3.f,y=4.f,z=0.f;
    float norm2=(x*x + y*y) + z*z;
    len=_mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(norm2)));
    CHECK(len==5.f);
    float scale=_mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(len)));
    CHECK(scale>0.19f && scale<0.21f);
    CHECK(x*scale>0.59f && y*scale<0.81f);
    if (len>200.f) len=200.f;
    CHECK(len==5.f);
    puts("PASS: original two-F32 DWORD order and separate SQRTSS/RCPSS");
    return 0;
}
