/* Synthetic scalar SSE dataflow for two original Brute Force XYZ normalizers.
 * This compares the C11 lane-order expression with the observed original
 * MULPS, SHUFPS, ADDPS, SHUFPS, ADDSS, RSQRTSS sequence.
 * It is not complete Xbox x87, callback, or frame-state verification. */
#include <xmmintrin.h>
#include <stdint.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define CHECK(c) do { if (!(c)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#c); return 1; } } while (0)

static float source_scalar_length(float x,float y,float z)
{
    /* Four Xbox SIMD lanes [x,0,y,z].  The original horizontal SSE
     * reduction adds upper y/z squares before the lower x square. */
    return ((y*y) + (z*z)) + (x*x);
}
static float original_sse_length(float x,float y,float z)
{
    __m128 v=_mm_set_ps(z,y,0.f,x);
    __m128 square=_mm_mul_ps(v,v);
    __m128 sum=_mm_shuffle_ps(v,square,0x80);
    sum=_mm_add_ps(sum,square);
    sum=_mm_shuffle_ps(sum,sum,0x03);
    sum=_mm_add_ss(sum,square);
    return _mm_cvtss_f32(sum);
}
int main(void)
{
    static const float samples[][3]={
        {0.f,0.f,0.f},{1.f,2.f,3.f},{-1.f,5.f,2.f},
        {0.25f,0.125f,-1.5f},{123.f,456.f,789.f}
    };
    for (unsigned i=0;i<sizeof samples/sizeof samples[0];i++) {
        float x=samples[i][0],y=samples[i][1],z=samples[i][2];
        float source=source_scalar_length(x,y,z);
        float sse=original_sse_length(x,y,z);
        uint32_t srcbits,ssebits;
        memcpy(&srcbits,&source,4);
        memcpy(&ssebits,&sse,4);
        CHECK(srcbits==ssebits);
        float approximate=_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(source)));
        if (source>0.f) {
            CHECK(approximate>0.f);
            CHECK(fabsf(approximate*sqrtf(source)-1.f)<0.001f);
        }
    }
    uint32_t guest_flags=0xffffffffu;
    guest_flags=(guest_flags & UINT32_C(0xfffffdff)) | UINT32_C(0x100);
    CHECK(guest_flags == UINT32_C(0xfffffdff));
    puts("PASS: 5 packed float3 dot-product fixtures, approximate RSQRTSS and guest DWORD flags");
    return 0;
}
