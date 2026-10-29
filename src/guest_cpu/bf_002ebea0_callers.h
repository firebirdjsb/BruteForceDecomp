/* Original verified CALL 0x002EBEA0 entry contracts for two Xbox functions.
 * Does not execute their prologues, PUSH/CALL, or other behavior.
 */
#ifndef BF_002EBEA0_CALLERS_H
#define BF_002EBEA0_CALLERS_H
#include "bf_002ebea0_guest_chkstk.h"

typedef struct bf_002ebea0_caller_entry {
    uint32_t caller_va;
    uint32_t guest_ebp;   /* after caller PUSH EBP / MOV EBP,ESP */
    uint32_t aligned_esp; /* after caller AND ESP */
    uint32_t call_entry_esp; /* after the CALL return address is pushed */
    uint32_t call_return_eip;
    bf_002ebea0_regs probe_regs;
} bf_002ebea0_caller_entry;

static inline bool bf_002ebea0_bind_verified_caller(
    uint32_t caller_va, uint32_t guest_ebp, uint32_t guest_ecx,
    bf_002ebea0_caller_entry *out)
{
    uint32_t alignment, request, return_eip;
    if (!out) return false;
    if (caller_va == UINT32_C(0x001f3aa0)) {
        /* 1F3AA3: AND ESP,FFFFFFF0; 1F3AA6: MOV EAX,20A8;
         * 1F3AAB: CALL 2EBEA0; 1F3AB0: continuation. */
        alignment=UINT32_C(16);
        request=UINT32_C(0x20a8);
        return_eip=UINT32_C(0x001f3ab0);
    } else if (caller_va == UINT32_C(0x00269600)) {
        /* 269603: AND ESP,FFFFFFF8; 269606: MOV EAX,14B4;
         * 26960B: CALL 2EBEA0; 269610: continuation. */
        alignment=UINT32_C(8);
        request=UINT32_C(0x14b4);
        return_eip=UINT32_C(0x00269610);
    } else return false;
    const uint32_t aligned_esp=guest_ebp & ~(alignment-1u);
    bf_002ebea0_caller_entry entry={0};
    entry.caller_va=caller_va;
    entry.guest_ebp=guest_ebp;
    entry.aligned_esp=aligned_esp;
    entry.call_entry_esp=aligned_esp-UINT32_C(4);
    entry.call_return_eip=return_eip;
    entry.probe_regs.eax=request;
    entry.probe_regs.ecx=guest_ecx;
    entry.probe_regs.esp=entry.call_entry_esp;
    *out=entry;
    return true;
}
#endif
