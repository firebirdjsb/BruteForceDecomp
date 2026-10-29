/* Source-only host x87 approximation tests. Does NOT prove original Xbox FPU status. */
#define main bf_00155840_previous_focused_tests
#include "test_00155840_x87_call_bridge.c"
#undef main
#include <fenv.h>
#include <float.h>
#include <math.h>

/* On x86_64 Linux, C long double has an 80-bit significand, matching x87
 * arithmetic precision for these bounded reference cases. The independent
 * reference arithmetic is NOT a substitute for the verified x87 executor. */
static uint32_t edge_result(float coeff, float source, float bias,
                            int round_mode, int *flags)
{
    mem_model m;fp_model f={0};uint32_t fault=0;
    float matrix[12]={0};float vec[3]={0};
    matrix[0]=coeff;matrix[9]=bias;vec[0]=source;
    seed(&m,matrix,vec);
    CHECK(fesetround(round_mode)==0);
    CHECK(feclearexcept(FE_ALL_EXCEPT)==0);
    const bf_00155840_call_621c0_inputs r=bf_00155840_bind_621c0(EBP,MATRIX);
    CHECK(execute(&m,&f,r,&fault)==BF_621C0_OK);
    *flags=fetestexcept(FE_ALL_EXCEPT);
    CHECK(f.depth==0);
    return get(&m,r.eax_guest);
}
int main(void)
{
    CHECK(LDBL_MANT_DIG >= 64 && FLT_RADIX==2 && sizeof(float)==4);
    const int original_round=fegetround();CHECK(original_round>=0);
    int ex;
    const float half=0x1p-24f;
    CHECK(edge_result(1.f,half,1.f,FE_TONEAREST,&ex)==bits(1.f));
    CHECK((ex&FE_INEXACT)!=0);
    CHECK(edge_result(1.f,half,1.f,FE_UPWARD,&ex)==bits(0x1.000002p0f));
    CHECK(edge_result(1.f,half,1.f,FE_DOWNWARD,&ex)==bits(1.f));
    CHECK(edge_result(1.f,half,1.f,FE_TOWARDZERO,&ex)==bits(1.f));
    CHECK(edge_result(1.f,-half,-1.f,FE_TONEAREST,&ex)==bits(-1.f));
    CHECK(edge_result(1.f,-half,-1.f,FE_UPWARD,&ex)==bits(-1.f));
    CHECK(edge_result(1.f,-half,-1.f,FE_DOWNWARD,&ex)==bits(-0x1.000002p0f));
    const uint32_t nan= edge_result(INFINITY,0.f,0.f,FE_TONEAREST,&ex);
    CHECK(isnan(to_float(nan)));
    CHECK((ex&FE_INVALID)!=0);
    const uint32_t overflow=edge_result(FLT_MAX,FLT_MAX,0.f,FE_TONEAREST,&ex);
    CHECK(isinf(to_float(overflow)));
    CHECK((ex&FE_OVERFLOW)!=0);
    const uint32_t underflow=edge_result(FLT_MIN,FLT_MIN,0.f,FE_TONEAREST,&ex);
    CHECK(to_float(underflow)==0.f);
    CHECK((ex&FE_UNDERFLOW)!=0);
    CHECK(fesetround(original_round)==0);
    printf("PASS x87 source-only rounding/exception references: %u assertions\n",checks);
    return 0;
}
