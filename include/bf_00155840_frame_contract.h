/* Brute Force: 0x00155840 verified guest-frame address relationship.
 * NOT a native calling convention, x87 emulation, or 1:1 behavior claim.
 * Pinned original XBE: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 */
#ifndef BF_00155840_FRAME_CONTRACT_H
#define BF_00155840_FRAME_CONTRACT_H

#include <stddef.h>
#include <stdint.h>

/* Original caller:
 * [EBP-0x68] through [EBP-0x3c] = twelve DWORDs (REP MOVSD source).
 * [EBP-0x2c] through [EBP-0x24] = transform output (three DWORDs).
 * A 12-byte interval separates those spans. Preserve raw DWORD bits:
 * x87 floating-point stores cannot be replaced with numerical casts.
 * This struct models offsets only, NOT all locals or uninitialized bytes.
 */
typedef struct bf_00155840_frame_span {
    uint32_t upload_words[12];       /* +0x00: original [EBP-0x68] */
    uint8_t intervening_bytes[12];   /* +0x30: original [EBP-0x38] */
    uint32_t transform_words[3];     /* +0x3c: original [EBP-0x2c] */
} bf_00155840_frame_span;

_Static_assert(sizeof(uint32_t) == 4, "guest DWORD must have 32 bits");
_Static_assert(offsetof(bf_00155840_frame_span, upload_words) == 0x00,
               "REP MOVSD source offset");
_Static_assert(offsetof(bf_00155840_frame_span, transform_words) == 0x3c,
               "0x000621C0 output address relative to [EBP-0x68]");
_Static_assert(sizeof(((bf_00155840_frame_span *)0)->upload_words) == 0x30,
               "12 DWORD upload region");
_Static_assert(sizeof(bf_00155840_frame_span) == 0x48,
               "verified span through [EBP-0x24]");

/* Input bindings at the ORIGINAL register call sites:
 * 0x00155962: ESI=[EBP-8], EDI=&[EBP-0x68], stack arg=&[EBP-4].
 * 0x00155A92: ECX=virtual result EAX, EDX=&[EBP-0x68],
 *             EAX=&[EBP-0x2c].
 * Guest addresses remain uint32_t and MUST NOT be cast directly to
 * host pointers by a future native linker. Callee implementations are
 * not safely callable through ordinary host C prototypes yet.
 */
typedef struct bf_00155840_call_22bc0_inputs {
    uint32_t esi_guest;
    uint32_t edi_guest;
    uint32_t stack_arg_guest;
} bf_00155840_call_22bc0_inputs;

typedef struct bf_00155840_call_621c0_inputs {
    uint32_t ecx_guest;
    uint32_t edx_guest;
    uint32_t eax_guest;
} bf_00155840_call_621c0_inputs;

/* Construct the original guest register values at the call boundaries.
 * These functions do NOT dereference guest addresses, execute calls or
 * approximate the x87 instructions. Unsigned 32-bit subtraction models
 * original x86 LEA address wraparound.
 */
static inline bf_00155840_call_22bc0_inputs
bf_00155840_bind_22bc0(uint32_t guest_ebp, uint32_t saved_esi)
{
    bf_00155840_call_22bc0_inputs r;
    r.esi_guest = saved_esi;
    r.edi_guest = guest_ebp - UINT32_C(0x68);
    r.stack_arg_guest = guest_ebp - UINT32_C(0x04);
    return r;
}

static inline bf_00155840_call_621c0_inputs
bf_00155840_bind_621c0(uint32_t guest_ebp, uint32_t virtual_result_eax)
{
    bf_00155840_call_621c0_inputs r;
    r.ecx_guest = virtual_result_eax;
    r.edx_guest = guest_ebp - UINT32_C(0x68);
    r.eax_guest = guest_ebp - UINT32_C(0x2c);
    return r;
}

/* Original 0x000621C0 computes the three x87 sums before stores.
 * Store order: FSTP [esp+4] (Z), FSTP [esp] (Y),
 * MOV [eax+8] (Z), FSTP [eax] (X), MOV [eax+4] (Y).
 * In particular, callers MUST NOT replace this with a host-C float
 * matrix multiply without x87 precision, rounding and alias tests.
 */

#endif
