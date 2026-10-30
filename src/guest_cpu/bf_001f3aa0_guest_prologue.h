/* Original Xbox 001F3AA0..001F3AB5 guest prologue:
 * PUSH EBP; EBP=ESP; AND ESP,-16; EAX=20A8; CALL 002EBEA0;
 * PUSH ESI; PUSH EDI. All reads/writes remain guest 32-bit memory.
 * This reconstructs the actual entry register/stack contract, not a
 * host C ABI or complete native game runtime.
 */
#ifndef BF_001F3AA0_GUEST_PROLOGUE_H
#define BF_001F3AA0_GUEST_PROLOGUE_H
#include "bf_002ebea0_guest_chkstk.h"
typedef enum bf_001f3aa0_prologue_status {
    BF_001F3AA0_PROLOGUE_OK=0,
    BF_001F3AA0_PROLOGUE_INVALID,
    BF_001F3AA0_PROLOGUE_WRITE_FAULT,
    BF_001F3AA0_PROLOGUE_PROBE_FAILED,
    BF_001F3AA0_PROLOGUE_RETURN_MISMATCH
} bf_001f3aa0_prologue_status;
typedef struct bf_001f3aa0_prologue_entry {
    uint32_t caller_esp,caller_ebp,caller_esi,caller_edi,caller_ecx;
} bf_001f3aa0_prologue_entry;
typedef struct bf_001f3aa0_prologue_result {
    bf_001f3aa0_prologue_status status;
    uint32_t pc,fault_va,guest_ebp,live_esp,incoming_ecx;
    bf_002ebea0_result stack_probe;
} bf_001f3aa0_prologue_result;
static inline bf_001f3aa0_prologue_result bf_001f3aa0_execute_prologue(
    const bf_002ebea0_guest_mem *m,bf_001f3aa0_prologue_entry in)
{
    bf_001f3aa0_prologue_result r={0};
    r.status=BF_001F3AA0_PROLOGUE_INVALID;
    if(!m||!m->read_dword||!m->write_dword)return r;
#define WR(addr,w,at) do{const uint32_t va=(addr);r.pc=(at);\
    if(!m->write_dword(m->context,va,(w))){\
        r.status=BF_001F3AA0_PROLOGUE_WRITE_FAULT;\
        r.fault_va=va;return r;}}while(0)
    r.guest_ebp=in.caller_esp-4u;
    WR(r.guest_ebp,in.caller_ebp,UINT32_C(0x1f3aa0));
    const uint32_t aligned=r.guest_ebp&~UINT32_C(15);
    WR(aligned-4u,UINT32_C(0x001f3ab0),UINT32_C(0x1f3aab));
    const bf_002ebea0_regs regs={
        UINT32_C(0x20a8),in.caller_ecx,aligned-4u,0u
    };
    r.stack_probe=bf_002ebea0_execute(m,regs);
    if(r.stack_probe.status!=BF_002EBEA0_OK){
        r.status=BF_001F3AA0_PROLOGUE_PROBE_FAILED;
        r.fault_va=r.stack_probe.fault_address;
        r.pc=UINT32_C(0x1f3aab);return r;
    }
    if(r.stack_probe.regs.next_eip!=UINT32_C(0x1f3ab0)||
       r.stack_probe.regs.esp!=aligned-UINT32_C(0x20a8)||
       r.stack_probe.regs.ecx!=in.caller_ecx){
        r.status=BF_001F3AA0_PROLOGUE_RETURN_MISMATCH;return r;
    }
    WR(r.stack_probe.regs.esp-4u,in.caller_esi,UINT32_C(0x1f3ab3));
    WR(r.stack_probe.regs.esp-8u,in.caller_edi,UINT32_C(0x1f3ab4));
    r.live_esp=r.stack_probe.regs.esp-8u;
    r.incoming_ecx=in.caller_ecx;
    r.status=BF_001F3AA0_PROLOGUE_OK;
    r.pc=UINT32_C(0x1f3ab5);
#undef WR
    return r;
}
#endif
