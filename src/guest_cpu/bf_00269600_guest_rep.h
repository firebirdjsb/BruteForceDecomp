/* Xbox Brute Force 0x00269600: original guest REP STOSD/MOVSD contracts.
 * Authenticated XBE SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Isolated original instruction operations, not a host C ABI replacement.
 */
#ifndef BF_00269600_GUEST_REP_H
#define BF_00269600_GUEST_REP_H
#include "bf_002ebea0_guest_chkstk.h"

typedef enum bf_00269600_rep_status {
    BF_00269600_REP_OK = 0,
    BF_00269600_REP_INVALID_INTERFACE,
    BF_00269600_REP_READ_FAULT,
    BF_00269600_REP_WRITE_FAULT
} bf_00269600_rep_status;

typedef struct bf_00269600_rep_result {
    bf_00269600_rep_status status;
    uint32_t esi, edi, ecx, eax; /* guest registers at stop/finish */
    uint32_t fault_address;
    uint32_t words_completed;
} bf_00269600_rep_result;

/* REP STOSD and REP MOVSD do not change guest EFLAGS (DF is an input).
 * On a data fault the current instruction is not retired, so register
 * pointers and ECX remain at the faulting iteration. Other side effects,
 * including earlier full DWORD operations, remain committed.
 */
static inline bf_00269600_rep_result bf_00269600_guest_repeat(
    const bf_002ebea0_guest_mem *mem, bool movsd, bool direction_flag,
    uint32_t eax, uint32_t esi, uint32_t edi, uint32_t count)
{
    bf_00269600_rep_result r={BF_00269600_REP_INVALID_INTERFACE,esi,edi,count,eax,0,0};
    if (!mem || !mem->write_dword || (movsd && !mem->read_dword))
        return r;
    const uint32_t delta=direction_flag?UINT32_C(0xfffffffc):UINT32_C(4);
    while (r.ecx!=0u) {
        uint32_t word=r.eax;
        if (movsd && !mem->read_dword(mem->context,r.esi,&word)) {
            r.status=BF_00269600_REP_READ_FAULT;
            r.fault_address=r.esi;
            return r;
        }
        if (!mem->write_dword(mem->context,r.edi,word)) {
            r.status=BF_00269600_REP_WRITE_FAULT;
            r.fault_address=r.edi;
            return r;
        }
        if (movsd) r.esi+=delta;
        r.edi+=delta;
        --r.ecx;
        ++r.words_completed;
    }
    r.status=BF_00269600_REP_OK;
    return r;
}

typedef struct bf_00269600_copy_result {
    bf_00269600_rep_status status;
    bf_00269600_rep_result repeat;
    uint32_t receiver_ebx;
    uint32_t source_count;
    uint32_t fault_address;
} bf_00269600_copy_result;

/* Caller stage 0x00269611..0x0026963C, after original PUSH EBX/ESI/EDI.
 * Live ESP must correspond to the frame immediately after those pushes.
 * EDX is loaded from [EBX+0x514], saved to [ESP+0x58], then:
 *   XOR EAX,EAX; LEA EDI,[ESP+0x10]; REP STOSD (ECX=EDX);
 *   MOV ECX,0x146; MOV ESI,EBX; LEA EDI,[ESP+0x578];
 *   REP MOVSD.
 * This routine stops before the later PUSH/CALL and additional stack writes.
 */
static inline bf_00269600_copy_result bf_00269600_guest_prepare(
    const bf_002ebea0_guest_mem *mem,
    uint32_t receiver_ecx, uint32_t live_guest_esp, bool direction_flag)
{
    bf_00269600_copy_result out={0};
    out.status=BF_00269600_REP_INVALID_INTERFACE;
    out.receiver_ebx=receiver_ecx;
    if (!mem || !mem->read_dword || !mem->write_dword) return out;
    if (!mem->read_dword(mem->context,receiver_ecx+UINT32_C(0x514),&out.source_count)) {
        out.status=BF_00269600_REP_READ_FAULT;
        out.fault_address=receiver_ecx+UINT32_C(0x514);
        return out;
    }
    if (!mem->write_dword(mem->context,live_guest_esp+UINT32_C(0x58),out.source_count)) {
        out.status=BF_00269600_REP_WRITE_FAULT;
        out.fault_address=live_guest_esp+UINT32_C(0x58);
        return out;
    }
    out.repeat=bf_00269600_guest_repeat(mem,false,direction_flag,0u,receiver_ecx,
                                       live_guest_esp+UINT32_C(0x10),
                                       out.source_count);
    out.status=out.repeat.status;
    out.fault_address=out.repeat.fault_address;
    if (out.status!=BF_00269600_REP_OK) return out;
    out.repeat=bf_00269600_guest_repeat(mem,true,direction_flag,0u,receiver_ecx,
                                       live_guest_esp+UINT32_C(0x578),
                                       UINT32_C(0x146));
    out.status=out.repeat.status;
    out.fault_address=out.repeat.fault_address;
    return out;
}

/* 0x002696E0..0x002696F1: returned EAX from FUN_0026A810
 * becomes ESI; [EBP+8] supplies caller's output buffer, ECX=0x146;
 * original REP MOVSD followed by POP EDI, POP ESI, POP EBX.
 * No guess about FUN_0026A810's return buffer is made.
 */
static inline bf_00269600_copy_result bf_00269600_guest_copy_output(
    const bf_002ebea0_guest_mem *mem, uint32_t guest_ebp,
    uint32_t source_return_eax, bool direction_flag)
{
    bf_00269600_copy_result out={0};
    out.status=BF_00269600_REP_INVALID_INTERFACE;
    if (!mem || !mem->read_dword || !mem->write_dword) return out;
    uint32_t dest;
    if (!mem->read_dword(mem->context,guest_ebp+UINT32_C(8),&dest)) {
        out.status=BF_00269600_REP_READ_FAULT;
        out.fault_address=guest_ebp+UINT32_C(8);
        return out;
    }
    out.repeat=bf_00269600_guest_repeat(mem,true,direction_flag,source_return_eax,
                                      source_return_eax,dest,UINT32_C(0x146));
    out.status=out.repeat.status;
    out.fault_address=out.repeat.fault_address;
    return out;
}
#endif
