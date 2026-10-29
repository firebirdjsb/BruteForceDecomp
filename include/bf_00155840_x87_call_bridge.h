/* 0x000621C0: original Xbox register call, guest-memory/x87 operation bridge.
 * XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Evidence is original 0x000621C0..0x00062225, not a native x87 implementation.
 * The executing backend must preserve x87 80-bit intermediates, control/status,
 * exceptions, and preexisting x87 stack. Host float arithmetic is NOT a substitute.
 */
#ifndef BF_00155840_X87_CALL_BRIDGE_H
#define BF_00155840_X87_CALL_BRIDGE_H

#include <stdbool.h>
#include <stdint.h>
#include "bf_00155840_frame_contract.h"

typedef struct bf_621c0_guest_words {
    void *ctx;
    bool (*read_u32)(void *, uint32_t, uint32_t *);
    bool (*write_u32)(void *, uint32_t, uint32_t);
} bf_621c0_guest_words;

typedef struct bf_621c0_x87_operations {
    void *ctx;
    bool (*fld_m32fp)(void *, uint32_t);
    bool (*fmul_m32fp)(void *, uint32_t);
    bool (*faddp_st1_st0)(void *);
    bool (*fadd_m32fp)(void *, uint32_t);
    bool (*fstp_m32fp)(void *, uint32_t *);
} bf_621c0_x87_operations;

typedef enum bf_621c0_status {
    BF_621C0_OK = 0,
    BF_621C0_INVALID_INTERFACE,
    BF_621C0_GUEST_READ_FAILED,
    BF_621C0_GUEST_WRITE_FAILED,
    BF_621C0_X87_BACKEND_FAILED
} bf_621c0_status;

/* callee_entry_esp points at the original CALL-pushed return address.
 * Original SUB ESP,8 reserves [entry_esp-8] and [entry_esp-4].
 * On successful completion the arithmetic has left the x87 stack at its
 * original depth; the backend is responsible for the actual FP environment.
 * Failure handling is diagnostic only, NOT verified guest fault/SEH replay.
 * For a failed access, fault_guest_addr identifies the attempted location.
 */
static inline bf_621c0_status
bf_00155840_execute_621c0(const bf_621c0_guest_words *mem,
                           const bf_621c0_x87_operations *x87,
                           bf_00155840_call_621c0_inputs r,
                           uint32_t callee_entry_esp,
                           uint32_t *fault_guest_addr)
{
    uint32_t word;
    uint32_t z_bits;
    uint32_t y_bits;
    const uint32_t scratch = callee_entry_esp - UINT32_C(8);
    if (fault_guest_addr) *fault_guest_addr = 0;
    if (!mem || !mem->read_u32 || !mem->write_u32 || !x87 ||
        !x87->fld_m32fp || !x87->fmul_m32fp || !x87->faddp_st1_st0 ||
        !x87->fadd_m32fp || !x87->fstp_m32fp)
        return BF_621C0_INVALID_INTERFACE;
#define BF_621C0_READ_OP(op, address) do {                         \
    const uint32_t a = (address);                                  \
    if (!mem->read_u32(mem->ctx, a, &word)) {                       \
        if (fault_guest_addr) *fault_guest_addr = a;               \
        return BF_621C0_GUEST_READ_FAILED;                         \
    }                                                              \
    if (!x87->op(x87->ctx, word)) return BF_621C0_X87_BACKEND_FAILED; \
} while (0)
#define BF_621C0_ADDP() do {                                      \
    if (!x87->faddp_st1_st0(x87->ctx)) return BF_621C0_X87_BACKEND_FAILED; \
} while (0)
#define BF_621C0_POP_TO_BITS(dst) do {                            \
    if (!x87->fstp_m32fp(x87->ctx, &(dst))) return BF_621C0_X87_BACKEND_FAILED; \
} while (0)
#define BF_621C0_WRITE(address, bits) do {                        \
    const uint32_t a = (address);                                  \
    if (!mem->write_u32(mem->ctx, a, bits)) {                       \
        if (fault_guest_addr) *fault_guest_addr = a;               \
        return BF_621C0_GUEST_WRITE_FAILED;                        \
    }                                                              \
} while (0)
    /* 0x621C3..0x621D7: X sum (bottom x87 stack slot). */
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 8u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest + 8u);
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 4u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest + 4u);
    BF_621C0_ADDP();
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest);
    BF_621C0_ADDP();
    BF_621C0_READ_OP(fadd_m32fp, r.ecx_guest + 36u);
    /* 0x621DA..0x621EF: Y sum (middle x87 stack slot). */
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 20u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest + 8u);
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 12u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest);
    BF_621C0_ADDP();
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 16u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest + 4u);
    BF_621C0_ADDP();
    BF_621C0_READ_OP(fadd_m32fp, r.ecx_guest + 40u);
    /* 0x621F2..0x62207: Z sum (top x87 stack slot). */
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 32u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest + 8u);
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 24u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest);
    BF_621C0_ADDP();
    BF_621C0_READ_OP(fld_m32fp, r.ecx_guest + 28u);
    BF_621C0_READ_OP(fmul_m32fp, r.edx_guest + 4u);
    BF_621C0_ADDP();
    BF_621C0_READ_OP(fadd_m32fp, r.ecx_guest + 44u);
    /* 0x6220A..0x6221F: FSTP scratch Z, load its raw DWORD into EDX,
     * FSTP scratch Y, store Z, load raw Y into ECX, FSTP output X,
     * then store Y. Output order matters if guest addresses alias. */
    BF_621C0_POP_TO_BITS(z_bits);
    BF_621C0_WRITE(scratch + 4u, z_bits);
    if (!mem->read_u32(mem->ctx, scratch + 4u, &z_bits)) {
        if (fault_guest_addr) *fault_guest_addr = scratch + 4u;
        return BF_621C0_GUEST_READ_FAILED;
    }
    BF_621C0_POP_TO_BITS(y_bits);
    BF_621C0_WRITE(scratch, y_bits);
    BF_621C0_WRITE(r.eax_guest + 8u, z_bits);
    if (!mem->read_u32(mem->ctx, scratch, &y_bits)) {
        if (fault_guest_addr) *fault_guest_addr = scratch;
        return BF_621C0_GUEST_READ_FAILED;
    }
    BF_621C0_POP_TO_BITS(word);
    BF_621C0_WRITE(r.eax_guest, word);
    BF_621C0_WRITE(r.eax_guest + 4u, y_bits);
#undef BF_621C0_READ_OP
#undef BF_621C0_ADDP
#undef BF_621C0_POP_TO_BITS
#undef BF_621C0_WRITE
    return BF_621C0_OK;
}
#endif
