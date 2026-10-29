/* 0x00155BF8..0x00155C19: three original x87 source-vector writes.
 * Original guest input words are [EBP-0x2c+i*4], [EBP-4],
 * [EBP-0x68+i*4]. Preserve FLD/FMUL/FADD/FSTP in that order.
 * Not a substitute for the remaining path-sensitive x87/SSE operations.
 */
#ifndef BF_00155840_FRAME_X87_INCREMENT_H
#define BF_00155840_FRAME_X87_INCREMENT_H
#include "bf_00155840_x87_call_bridge.h"
static inline bf_621c0_status bf_00155840_x87_add_vector(
    const bf_621c0_guest_words *mem, const bf_621c0_x87_operations *x87,
    uint32_t guest_ebp, uint32_t *fault_guest_addr)
{
    uint32_t w;
    if (fault_guest_addr) *fault_guest_addr = 0;
    if (!mem || !mem->read_u32 || !mem->write_u32 || !x87 ||
        !x87->fld_m32fp || !x87->fmul_m32fp ||
        !x87->fadd_m32fp || !x87->fstp_m32fp)
        return BF_621C0_INVALID_INTERFACE;
    for (uint32_t i = 0; i < 3u; ++i) {
        const uint32_t vector_addr = guest_ebp - UINT32_C(0x68) + i*4u;
        const uint32_t transformed_addr = guest_ebp - UINT32_C(0x2c) + i*4u;
        const uint32_t scale_addr = guest_ebp - UINT32_C(4);
        const uint32_t reads[3] = {transformed_addr, scale_addr, vector_addr};
        for (unsigned op = 0; op < 3; op++) {
            if (!mem->read_u32(mem->ctx,reads[op],&w)) {
                if (fault_guest_addr) *fault_guest_addr = reads[op];
                return BF_621C0_GUEST_READ_FAILED;
            }
            bool ok = op == 0 ? x87->fld_m32fp(x87->ctx,w) :
                      op == 1 ? x87->fmul_m32fp(x87->ctx,w) :
                                x87->fadd_m32fp(x87->ctx,w);
            if (!ok) return BF_621C0_X87_BACKEND_FAILED;
        }
        if (!x87->fstp_m32fp(x87->ctx,&w))
            return BF_621C0_X87_BACKEND_FAILED;
        if (!mem->write_u32(mem->ctx,vector_addr,w)) {
            if (fault_guest_addr) *fault_guest_addr = vector_addr;
            return BF_621C0_GUEST_WRITE_FAILED;
        }
    }
    return BF_621C0_OK;
}
#endif
