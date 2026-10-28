/* 0x0010FBF0: source-backed success-state scalar-output bridge.
 * Original authenticated XBE bytes: SHA256 of 127-byte method
 * 76FA58DB21575D08E0CB43636A07DEB374229D553CFF0AAB4F8EE845C63882D1.
 * Receiver ECX field +0x410 and +0x428 (binary32), output through pushed
 * pointer at +0, +4, +8, original stores in that order.
 *
 * Projected computation (the ORIGINAL sequence is verified against the XBE):
 *    s = round_f32(x*x + z*z)             [x87 extended -> FSTP m32]
 *    q = RSQRTSS(s)                      [hardware approx SSE scalar]
 *    out[0] = round_f32(-q*x)            [x87 FMUL/FCHS/FSTP m32]
 *    out[1] = +0.0f                      [MOV integer zero]
 *    out[2] = round_f32(-q*z)            [x87 FMUL/FCHS/FSTP m32]
 *
 * Floating-point environment (Xbox x87 CW / MXCSR), NaN signaling, exceptions,
 * read/write memory fault ordering and actual virtual dispatch are not covered.
 * The function declines non-finite, zero-vector and undefined/special inputs
 * instead of inventing 1:1 behavior for them. Successful NORMAL finite inputs
 * are differential-tested against a separate hardware x87/RSQRTSS oracle.
 * Guest memory is 32-bit; NO guest DWORD is converted to a host pointer.
 */
#ifndef BF_0010FBF0_SCALAR_PROJECTION_H
#define BF_0010FBF0_SCALAR_PROJECTION_H
#include "bf_0011c810_concrete_virtual.h"
#include "bf_0011c810_second_vector.h"
#include <float.h>
#if LDBL_MANT_DIG == 64 && !defined(_WIN32) && (defined(__i386__) || defined(__x86_64__))
# include <xmmintrin.h>
# define BF_0010FBF0_NUMERIC_PROJECTION_AVAILABLE 1
#else
# define BF_0010FBF0_NUMERIC_PROJECTION_AVAILABLE 0
#endif

_Static_assert(sizeof(float)==4,"Xbox binary32 requires 4-byte float");
/* On hosts without 80-bit long double the bounded scalar path declines to run. */

typedef enum bf_0010fbf0_stage {
    BF_0010FBF0_NONE=0,
    BF_0010FBF0_READ_X,
    BF_0010FBF0_READ_Z,
    BF_0010FBF0_FLOAT_UNVERIFIED,
    BF_0010FBF0_WRITE_X,
    BF_0010FBF0_WRITE_ZERO,
    BF_0010FBF0_WRITE_Z,
    BF_0010FBF0_COMPLETE
} bf_0010fbf0_stage;
typedef struct bf_0010fbf0_result {
    bool completed;
    bf_0010fbf0_stage stage;
    uint32_t guest_fault_va;
    uint32_t result_words[3];
} bf_0010fbf0_result;
static inline uint32_t bf_0010fbf0_word_from_float(float v)
{
    uint32_t w;
    __builtin_memcpy(&w,&v,sizeof w);
    return w;
}
static inline float bf_0010fbf0_float_from_word(uint32_t w)
{
    float v;
    __builtin_memcpy(&v,&w,sizeof v);
    return v;
}
/* Explicit negative numerical normal-input domain (no NaN, infinity,
 * subnormal source or zero vector). Negative/positive zero COMPONENTS are
 * allowed as long as squared length is positive normal, and are retained.
 * No caller should treat rejection as an original guest exception. */
static inline bf_0010fbf0_result bf_0010fbf0_project(
    const bf_0011c810_guest_bytes *io,uint32_t ecx,uint32_t output)
{
    bf_0010fbf0_result r={0};
    uint32_t a,b;
    if (!io || !io->read || !io->write) return r;
    r.stage=BF_0010FBF0_READ_X;
    r.guest_fault_va=ecx+UINT32_C(0x410);
    if (!bf_0011c810_load_guest_u32(io,r.guest_fault_va,&a)) return r;
    r.stage=BF_0010FBF0_READ_Z;
    r.guest_fault_va=ecx+UINT32_C(0x428);
    if (!bf_0011c810_load_guest_u32(io,r.guest_fault_va,&b)) return r;
    r.stage=BF_0010FBF0_FLOAT_UNVERIFIED;
    r.guest_fault_va=0;
    const float x=bf_0010fbf0_float_from_word(a);
    const float z=bf_0010fbf0_float_from_word(b);
    const uint32_t am=a & UINT32_C(0x7fffffff), bm=b & UINT32_C(0x7fffffff);
    if (am>=UINT32_C(0x7f800000) || bm>=UINT32_C(0x7f800000) ||
        (am>0 && am<UINT32_C(0x00800000)) ||
        (bm>0 && bm<UINT32_C(0x00800000))) return r;
#if !BF_0010FBF0_NUMERIC_PROJECTION_AVAILABLE
    (void)x;
    (void)z;
    (void)output;
    /* MSVC targets usually use 64-bit long double: no silent SSE substitute. */
    return r;
#else
    /* Use the independently documented original FLD/FMUL/FADDP/FSTP
     * order. long double is the host x87 80-bit proxy, NOT a byte match. */
    const long double ex=(long double)x, ez=(long double)z;
    const float sq=(float)((ez*ez)+(ex*ex));
    const uint32_t sqbits=bf_0010fbf0_word_from_float(sq)&UINT32_C(0x7fffffff);
    if (sqbits<UINT32_C(0x00800000) || sqbits>=UINT32_C(0x7f800000)) return r;
    const float inv=_mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(sq)));
    const uint32_t invbits=bf_0010fbf0_word_from_float(inv)&UINT32_C(0x7fffffff);
    if (invbits==0u || invbits>=UINT32_C(0x7f800000)) return r;
    const float value_x=(float)(-((long double)inv*ex));
    const float value_z=(float)(-((long double)inv*ez));
    r.result_words[0]=bf_0010fbf0_word_from_float(value_x);
    r.result_words[1]=UINT32_C(0);
    r.result_words[2]=bf_0010fbf0_word_from_float(value_z);
    const uint32_t offset[3]={UINT32_C(0),UINT32_C(4),UINT32_C(8)};
    const bf_0010fbf0_stage stages[3]={BF_0010FBF0_WRITE_X,BF_0010FBF0_WRITE_ZERO,BF_0010FBF0_WRITE_Z};
    for (unsigned i=0;i<3;i++) {
        r.stage=stages[i];
        r.guest_fault_va=output+offset[i];
        if(!bf_0011c810_store_guest_u32(io,r.guest_fault_va,r.result_words[i])) return r;
    }
    r.completed=true;
    r.stage=BF_0010FBF0_COMPLETE;
    r.guest_fault_va=0;
    return r;
#endif
}
/* Install as the previously explicit virtual scalar-body callback ONLY when
 * the target was proved to be 0x0010FBF0 and the bounded domain is met.
 * The concrete executor separately supplies observed EAX and RET4 ESP. */
static inline bool bf_0010fbf0_project_executor(
    void *context,const bf_0011c810_guest_bytes *io,
    uint32_t receiver_ecx,uint32_t output_guest_va)
{
    bf_0010fbf0_result *out=context;
    const bf_0010fbf0_result r=bf_0010fbf0_project(io,receiver_ecx,output_guest_va);
    if(out)*out=r;
    return r.completed;
}
#endif
