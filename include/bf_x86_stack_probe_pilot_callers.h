/* Two instruction-observed CALL boundaries for Xbox stack probe 0x002EBEA0.
 * Only the boundary is modeled, not either complete caller or Xbox faults.
 * Every pointer/ESP/EIP here is a guest uint32_t, never a host address.
 * The memory callbacks execute the original CALL's DWORD push and all
 * 0x002EBEA0 accesses. A failed write may already have partial effects.
 *
 * Original caller evidence: docs/evidence/002ebea0-pilot-callers.md
 * Model evidence: docs/evidence/002ebea0-stack-effect.md
 * The original function drafts and their ABI_UNVERIFIED labels are unchanged.
 */
#ifndef BF_X86_STACK_PROBE_PILOT_CALLERS_H
#define BF_X86_STACK_PROBE_PILOT_CALLERS_H

#include "bf_x86_stack_probe_002ebea0.h"
#include <stddef.h>

/* These constants are original instruction locations, not host code ptrs. */
enum {
    BF_SP_PILOT_2C2530_CALL = 0x002c255b,
    BF_SP_PILOT_2C2530_NEXT = 0x002c2560,
    BF_SP_PILOT_33FA74_CALL = 0x0033fb4d,
    BF_SP_PILOT_33FA74_NEXT = 0x0033fb52,
    BF_SP_PILOT_FRAME_BELOW_EBP = 0x20
};

typedef enum bf_sp_pilot_status {
    BF_SP_PILOT_OK = 0,
    BF_SP_PILOT_NOT_CALLED,
    BF_SP_PILOT_BAD_CALL_CONTEXT,
    BF_SP_PILOT_CALL_WRITE_FAULT,
    BF_SP_PILOT_HELPER_FAULT
} bf_sp_pilot_status;

typedef struct bf_sp_pilot_result {
    bf_sp_pilot_status status;
    /* Valid after an actual call; the model's fault prefix is also valid. */
    bf_stack_probe_002ebea0_result helper;
    /* Only valid for status OK. All guest address arithmetic wraps at 32 bits. */
    uint32_t requested_bytes;
    uint32_t scratch_guest_va;
    /* Informative check against the original return site; do not rewrite EIP. */
    bool original_return_site;
} bf_sp_pilot_result;

/* Input state describes the real caller immediately before its CALL.
 * For these two paths only, original EBP-relative pre-CALL ESP=EBP-0x20.
 * We reject an incorrect synthetic frame instead of fabricating one.
 * The input EAX must equal the original rounded size at that CALL.
 * ECX, EFLAGS and their definedness are supplied, never guessed.
 * Calling and faulting are explicit; no source C entry is wired to this yet.
 */
static inline bf_sp_pilot_result bf_sp_pilot_invoke(
    bf_stack_probe_002ebea0_state before_call,
    uint32_t caller_ebp, uint32_t original_call_eip,
    uint32_t next_eip, uint32_t request,
    const bf_stack_probe_002ebea0_memory *memory)
{
    bf_sp_pilot_result out = {0};
    out.status = BF_SP_PILOT_BAD_CALL_CONTEXT;
    if (before_call.esp != caller_ebp - BF_SP_PILOT_FRAME_BELOW_EBP ||
        before_call.eip != original_call_eip || before_call.eax != request ||
        memory == NULL || memory->read32 == NULL || memory->write32 == NULL)
        return out;

    out.requested_bytes = request;
    /* CALL rel32 pushes a return DWORD before the first callee instruction.
     * On failed push ESP/EIP have not advanced; callback owns partial writes. */
    const uint32_t call_slot = before_call.esp - UINT32_C(4);
    if (!memory->write32(memory->user, call_slot, next_eip)) {
        out.status = BF_SP_PILOT_CALL_WRITE_FAULT;
        out.helper.state = before_call;
        out.helper.status = BF_STACK_PROBE_WRITE_FAULT;
        out.helper.fault_address = call_slot;
        return out;
    }
    before_call.esp = call_slot;
    before_call.eip = UINT32_C(0x002ebea0);
    out.helper = bf_stack_probe_002ebea0(before_call, memory);
    if (out.helper.status != BF_STACK_PROBE_OK) {
        out.status = BF_SP_PILOT_HELPER_FAULT;
        return out;
    }
    out.status = BF_SP_PILOT_OK;
    out.scratch_guest_va = out.helper.state.esp;
    out.original_return_site = out.helper.state.eip == next_eip;
    return out;
}

/* Original 0x2C254C MOVSX EDI,WORD followed by ADD EDI,3 / AND EDI,-4.
 * A negative original WORD becomes a large unsigned probe request: no clamp.
 * The caller must set pre-call EAX to this calculated DWORD. */
static inline uint32_t bf_sp_pilot_2c2530_request(uint16_t length_word)
{
    const uint32_t sign_extended = (length_word & UINT16_C(0x8000)) ?
        (UINT32_C(0xffff0000) | (uint32_t)length_word) : (uint32_t)length_word;
    return (sign_extended + UINT32_C(3)) & ~UINT32_C(3);
}

static inline bf_sp_pilot_result bf_sp_pilot_2c2530(
    bf_stack_probe_002ebea0_state before_call, uint32_t caller_ebp,
    uint16_t length_word, const bf_stack_probe_002ebea0_memory *memory)
{
    return bf_sp_pilot_invoke(before_call, caller_ebp,
        BF_SP_PILOT_2C2530_CALL, BF_SP_PILOT_2C2530_NEXT,
        bf_sp_pilot_2c2530_request(length_word), memory);
}

/* 0x33FB45 compares capacity and length as unsigned DWORDs. No allocation
 * and no memory callbacks occur on the non-allocation path in this adapter;
 * that path's other caller effects are deliberately not modeled here.
 * The caller must set EAX=(length+3)&~3 for the taken call path. */
static inline bf_sp_pilot_result bf_sp_pilot_33fa74(
    bf_stack_probe_002ebea0_state before_call, uint32_t caller_ebp,
    uint32_t capacity, uint32_t length,
    const bf_stack_probe_002ebea0_memory *memory)
{
    if (capacity >= length) {
        bf_sp_pilot_result out = {0};
        out.status = BF_SP_PILOT_NOT_CALLED;
        return out;
    }
    return bf_sp_pilot_invoke(before_call, caller_ebp,
        BF_SP_PILOT_33FA74_CALL, BF_SP_PILOT_33FA74_NEXT,
        (length + UINT32_C(3)) & ~UINT32_C(3), memory);
}

#endif
