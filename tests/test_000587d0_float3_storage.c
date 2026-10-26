/* Isolated storage + SSE sanity test, not Xbox call-path equivalence. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>
#define CHECK(c) do { if (!(c)) { fprintf(stderr,"FAIL %s at %d\n",#c,__LINE__); return 1; } } while (0)
int main(void)
{
    struct guarded {
        uint32_t before;
        float xyz[3];
        uint32_t after;
    } g = {0xA5A5A5A5u,{3.f,4.f,0.f},0x5A5A5A5Au};
    float radius;
    const uint32_t radius_bits = 0x40A00000u; /* 5.0f */
    memcpy(&radius,&radius_bits,sizeof radius);
    CHECK(radius == 5.f);
    CHECK(sizeof g.xyz == 12u);
    CHECK((uintptr_t)&g.xyz[1] - (uintptr_t)&g.xyz[0] == 4u);
    CHECK((uintptr_t)&g.xyz[2] - (uintptr_t)&g.xyz[0] == 8u);
    CHECK(g.before == 0xA5A5A5A5u && g.after == 0x5A5A5A5Au);
    /* Original opcode chain extracts low-lane x*x + y*y + z*z. */
    const float mag2 = (g.xyz[1]*g.xyz[1] + g.xyz[2]*g.xyz[2]) + g.xyz[0]*g.xyz[0];
    CHECK(mag2 == 25.f);
    const float scale = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(mag2)));
    CHECK(scale > 0.19f && scale < 0.21f);
    for (int j=0;j<3;j++)g.xyz[j]*=scale;
    CHECK(g.xyz[0] > 0.59f && g.xyz[0] < 0.61f);
    CHECK(g.xyz[1] > 0.79f && g.xyz[1] < 0.81f);
    CHECK(g.xyz[2] == 0.f);
    CHECK(g.before == 0xA5A5A5A5u && g.after == 0x5A5A5A5Au);
    puts("PASS: guest32 float word, contiguous xyz, SSE reciprocal sqrt and guards");
    return 0;
}
