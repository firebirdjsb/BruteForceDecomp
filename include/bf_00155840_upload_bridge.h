/* 0x00155D36..0x00155D51: original 12-DWORD guest upload contract.
 * Pinned XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Independent of the unresolved virtual target and x87 execution backend.
 */
#ifndef BF_00155840_UPLOAD_BRIDGE_H
#define BF_00155840_UPLOAD_BRIDGE_H
#include "bf_00155840_x87_call_bridge.h"

#define BF_00155840_UPLOAD_DEST UINT32_C(0x0037e1e8)
#define BF_00155840_UPLOAD_WORDS 12u

typedef struct bf_00155840_shader_call {
    uint32_t ecx_guest;
    uint32_t edx_guest;
    uint32_t pushed_word;
} bf_00155840_shader_call;

/* 0x00155D47 PUSH 0xC; 0x00155D49 LEA EDX,[EBP-0x68];
 * 0x00155D4C MOV ECX,0x1B; 0x00155D51 CALL 0x0036F6C0.
 * Record register/stack input words only; no guessed host D3D ABI.
 */
static inline bf_00155840_shader_call
bf_00155840_shader_input(uint32_t guest_ebp)
{
    bf_00155840_shader_call r = {
        UINT32_C(0x1b), guest_ebp - UINT32_C(0x68), UINT32_C(12)
    };
    return r;
}

typedef enum bf_00155840_upload_status {
    BF_00155840_UPLOAD_OK = 0,
    BF_00155840_UPLOAD_INVALID_INTERFACE,
    BF_00155840_UPLOAD_READ_FAILED,
    BF_00155840_UPLOAD_WRITE_FAILED
} bf_00155840_upload_status;

/* 0x00155D36 JNE skips the 12-DWORD copy if bit 0x10 was set.
 * 0x00155D38..45: ECX=12, ESI=EBP-0x68, EDI=0x0037E1E8, REP MOVSD.
 * One read, then one write per word in forward order, preserving original
 * alias behavior. Error return is diagnostic, not Xbox fault/SEH parity.
 * The shader call following the conditional copy executes on either path.
 */
static inline bf_00155840_upload_status
bf_00155840_copy_shader_words(const bf_621c0_guest_words *mem,
                              uint32_t guest_ebp, uint8_t original_flag_byte,
                              uint32_t *fault_guest_addr)
{
    uint32_t src = guest_ebp - UINT32_C(0x68);
    uint32_t word;
    if (fault_guest_addr) *fault_guest_addr = 0;
    if (!mem || !mem->read_u32 || !mem->write_u32)
        return BF_00155840_UPLOAD_INVALID_INTERFACE;
    if ((original_flag_byte & UINT8_C(0x10)) != 0)
        return BF_00155840_UPLOAD_OK;
    for (uint32_t i = 0; i < BF_00155840_UPLOAD_WORDS; ++i) {
        uint32_t from = src + (i * UINT32_C(4));
        uint32_t to = BF_00155840_UPLOAD_DEST + (i * UINT32_C(4));
        if (!mem->read_u32(mem->ctx, from, &word)) {
            if (fault_guest_addr) *fault_guest_addr = from;
            return BF_00155840_UPLOAD_READ_FAILED;
        }
        if (!mem->write_u32(mem->ctx, to, word)) {
            if (fault_guest_addr) *fault_guest_addr = to;
            return BF_00155840_UPLOAD_WRITE_FAILED;
        }
    }
    return BF_00155840_UPLOAD_OK;
}
#endif
