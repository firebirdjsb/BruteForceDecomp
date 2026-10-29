/* Brute Force original x86 0x00155BDD..0x00155BF7 (27 bytes).
 * Pinned image SHA256 B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Original span SHA256 12C9FC155561AACC121377CE09EBBFCF0BFED632F2765FE498E8367E9D8CC434
 * Per axis: FLD [EBP-0x0C]; FMUL [EBP-0x2C + i*4];
 *           FSTP [EBP-0x2C + i*4].
 * Only reached after original 0x00155BC3..0x00155BD7 conditionals.
 * This is a guest-memory-aware operation, not a native x87 executor.
 */
#ifndef BF_00155840_FRAME_X87_SCALE_H
#define BF_00155840_FRAME_X87_SCALE_H
#include "bf_00155840_frame_x87_increment.h"

static inline bf_621c0_status bf_00155840_x87_scale_direction(
    const bf_621c0_guest_words *mem, const bf_621c0_x87_operations *x87,
    uint32_t guest_ebp, uint32_t *fault_guest_addr)
{
    uint32_t bits;
    if (fault_guest_addr) *fault_guest_addr = 0;
    if (!mem || !mem->read_u32 || !mem->write_u32 || !x87 ||
        !x87->fld_m32fp || !x87->fmul_m32fp || !x87->fstp_m32fp)
        return BF_621C0_INVALID_INTERFACE;

    for (uint32_t i = 0; i != 3u; ++i) {
        const uint32_t scale_addr = guest_ebp - UINT32_C(0x0c);
        const uint32_t vector_addr =
            guest_ebp - UINT32_C(0x2c) + i * UINT32_C(4);
        /* Preserve load ordering and register precision until FSTP. */
        if (!mem->read_u32(mem->ctx, scale_addr, &bits)) {
            if (fault_guest_addr) *fault_guest_addr = scale_addr;
            return BF_621C0_GUEST_READ_FAILED;
        }
        if (!x87->fld_m32fp(x87->ctx, bits))
            return BF_621C0_X87_BACKEND_FAILED;
        if (!mem->read_u32(mem->ctx, vector_addr, &bits)) {
            if (fault_guest_addr) *fault_guest_addr = vector_addr;
            return BF_621C0_GUEST_READ_FAILED;
        }
        if (!x87->fmul_m32fp(x87->ctx, bits))
            return BF_621C0_X87_BACKEND_FAILED;
        if (!x87->fstp_m32fp(x87->ctx, &bits))
            return BF_621C0_X87_BACKEND_FAILED;
        if (!mem->write_u32(mem->ctx, vector_addr, bits)) {
            if (fault_guest_addr) *fault_guest_addr = vector_addr;
            return BF_621C0_GUEST_WRITE_FAILED;
        }
    }
    return BF_621C0_OK;
}

/* These are adjacent original instruction spans:
 * scale 0x00155BDD..0x00155BF7, add 0x00155BF8..0x00155C1B.
 * Gate conditions and the subsequent 0x00155C1C tail are NOT performed.
 * No rollback on a guest fault; original guest fault/SEH handling unverified.
 */
static inline bf_621c0_status bf_00155840_x87_scale_then_add(
    const bf_621c0_guest_words *mem, const bf_621c0_x87_operations *x87,
    uint32_t guest_ebp, uint32_t *fault_guest_addr)
{
    const bf_621c0_status first =
        bf_00155840_x87_scale_direction(mem, x87, guest_ebp,
                                        fault_guest_addr);
    if (first != BF_621C0_OK) return first;
    return bf_00155840_x87_add_vector(mem, x87, guest_ebp,
                                       fault_guest_addr);
}
#endif
