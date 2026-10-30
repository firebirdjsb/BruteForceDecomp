/* Original Xbox 0x00155840: isolated scalar RSQRTSS/SQRTSS load and
 * MOVSS store windows. Original image SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * No approximation guessed: numerical SSE instruction result is delegated
 * to the executing backend. All four XMM0 lanes are raw binary32 words.
 */
#ifndef BF_00155840_SCALAR_SSE_H
#define BF_00155840_SCALAR_SSE_H
#include "bf_00155840_x87_call_bridge.h"

typedef struct bf_00155840_xmm0_words {
    uint32_t lane[4];
} bf_00155840_xmm0_words;

typedef struct bf_00155840_scalar_backend {
    void *ctx;
    bool (*rsqrtss_low)(void *ctx, uint32_t source_bits, uint32_t *result_bits);
    bool (*sqrtss_low)(void *ctx, uint32_t source_bits, uint32_t *result_bits);
} bf_00155840_scalar_backend;

typedef enum bf_00155840_scalar_status {
    BF_00155840_SCALAR_OK,
    BF_00155840_SCALAR_INVALID,
    BF_00155840_SCALAR_READ_FAULT,
    BF_00155840_SCALAR_BACKEND_FAILED,
    BF_00155840_SCALAR_WRITE_FAULT
} bf_00155840_scalar_status;

typedef struct bf_00155840_scalar_result {
    bf_00155840_scalar_status status;
    uint32_t instruction_va;
    uint32_t fault_guest_va;
} bf_00155840_scalar_result;

/* Each pair is a specific original machine-code window, not a generalized
 * x86 emulator. The original RSQRTSS/SQRTSS loads source from m32fp,
 * overwrites ONLY XMM0's low lane, then MOVSS writes that lane into
 * caller-local guest storage. Upper XMM0 lanes must survive unchanged.
 * The original CPU can fault after the XMM write but before MOVSS store;
 * no restart/SEH equivalence is claimed for diagnostic failures.
 */
static inline bf_00155840_scalar_result bf_00155840_scalar_at(
    uint32_t instruction_va,
    const bf_621c0_guest_words *guest,
    const bf_00155840_scalar_backend *backend,
    bf_00155840_xmm0_words *xmm0,
    uint32_t guest_ebp)
{
    bf_00155840_scalar_result r={BF_00155840_SCALAR_INVALID,instruction_va,0u};
    uint32_t input_off,output_off,input_word;
    bool sqrt_operation=false;
    switch (instruction_va) {
    case UINT32_C(0x001559ea): input_off=0x1cu;output_off=0x18u;break;
    case UINT32_C(0x00155a36): input_off=0x1cu;output_off=0x18u;break;
    case UINT32_C(0x00155aea): input_off=0x1cu;output_off=0x18u;break;
    case UINT32_C(0x00155b4a): input_off=0x1cu;output_off=0x18u;break;
    case UINT32_C(0x00155bab): input_off=0x18u;output_off=0x10u;sqrt_operation=true;break;
    case UINT32_C(0x00155c28): input_off=0x1cu;output_off=0x18u;break;
    case UINT32_C(0x00155ca9): input_off=0x1cu;output_off=0x10u;break;
    default: return r;
    }
    if (!guest || !guest->read_u32 || !guest->write_u32 ||
        !backend || !xmm0 ||
        (sqrt_operation ? !backend->sqrtss_low : !backend->rsqrtss_low))
        return r;
    const uint32_t input_va=guest_ebp-input_off;
    const uint32_t output_va=guest_ebp-output_off;
    if (!guest->read_u32(guest->ctx,input_va,&input_word)) {
        r.status=BF_00155840_SCALAR_READ_FAULT;
        r.fault_guest_va=input_va;
        return r;
    }
    uint32_t result;
    const bool ok=sqrt_operation ?
        backend->sqrtss_low(backend->ctx,input_word,&result) :
        backend->rsqrtss_low(backend->ctx,input_word,&result);
    if (!ok) {r.status=BF_00155840_SCALAR_BACKEND_FAILED;return r;}
    xmm0->lane[0]=result;
    if (!guest->write_u32(guest->ctx,output_va,result)) {
        r.status=BF_00155840_SCALAR_WRITE_FAULT;
        r.fault_guest_va=output_va;
        return r;
    }
    r.status=BF_00155840_SCALAR_OK;
    return r;
}
#endif
