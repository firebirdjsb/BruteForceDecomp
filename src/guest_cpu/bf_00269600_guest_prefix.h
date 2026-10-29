/* Original 0x00269600 entry-to-REP prefix composition.
 * Binary evidence: pinned Xbox Brute Force XBE, not guessed host ABI.
 * Preconditions: EBP points to original saved-EBP word after PUSH EBP;
 * real guest caller must provide ECX receiver, original callee-saved
 * registers and guest memory. The wrapper executes only through 0x26963E.
 * This is not a replacement for original FUN_00269600's remaining body.
 */
#ifndef BF_00269600_GUEST_PREFIX_H
#define BF_00269600_GUEST_PREFIX_H
#include "bf_002ebea0_callers.h"
#include "bf_00269600_guest_rep.h"

typedef struct bf_00269600_prefix_inputs {
    uint32_t guest_ebp;
    uint32_t receiver_ecx;
    uint32_t original_ebx;
    uint32_t original_esi;
    uint32_t original_edi;
    bool direction_flag;
} bf_00269600_prefix_inputs;

typedef enum bf_00269600_prefix_status {
    BF_00269600_PREFIX_OK = 0,
    BF_00269600_PREFIX_INVALID,
    BF_00269600_PREFIX_CALL_WRITE_FAULT,
    BF_00269600_PREFIX_PROBE_FAULT,
    BF_00269600_PREFIX_PUSH_FAULT,
    BF_00269600_PREFIX_COUNT_FAULT,
    BF_00269600_PREFIX_REP_FAULT
} bf_00269600_prefix_status;

typedef struct bf_00269600_prefix_result {
    bf_00269600_prefix_status status;
    uint32_t fault_address;
    uint32_t esp, ebx, esi, edi, ecx, edx, eax;
    uint32_t continuation_eip;
    bf_002ebea0_result probe;
    bf_00269600_copy_result copies;
} bf_00269600_prefix_result;

static inline bf_00269600_prefix_result bf_00269600_execute_prefix(
    const bf_002ebea0_guest_mem *mem, bf_00269600_prefix_inputs input)
{
    bf_00269600_prefix_result out={0};
    out.status=BF_00269600_PREFIX_INVALID;
    if (!mem || !mem->read_dword || !mem->write_dword) return out;
    bf_002ebea0_caller_entry site={0};
    if(!bf_002ebea0_bind_verified_caller(UINT32_C(0x00269600),
                                         input.guest_ebp,input.receiver_ecx,
                                         &site)) return out;
    out.esp=site.aligned_esp;
    out.ecx=input.receiver_ecx;
    out.ebx=input.original_ebx;
    out.esi=input.original_esi;
    out.edi=input.original_edi;
    out.continuation_eip=site.call_return_eip;
    /* 0x26960B: CALL 0x2EBEA0 pushes 0x269610. */
    if(!mem->write_dword(mem->context,site.call_entry_esp,site.call_return_eip)){
        out.status=BF_00269600_PREFIX_CALL_WRITE_FAULT;
        out.fault_address=site.call_entry_esp;
        return out;
    }
    out.esp=site.call_entry_esp;
    out.probe=bf_002ebea0_execute(mem,site.probe_regs);
    if(out.probe.status!=BF_002EBEA0_OK){
        out.status=BF_00269600_PREFIX_PROBE_FAULT;
        out.fault_address=out.probe.fault_address;
        return out;
    }
    out.esp=out.probe.regs.esp;
    out.eax=out.probe.regs.eax;
    out.ecx=out.probe.regs.ecx;
    /* 0x269610 PUSH EBX; 0x269611 MOV EBX,ECX. */
    const uint32_t save_ebx_addr=out.esp-UINT32_C(4);
    if(!mem->write_dword(mem->context,save_ebx_addr,input.original_ebx)){
        out.status=BF_00269600_PREFIX_PUSH_FAULT;
        out.fault_address=save_ebx_addr;
        return out;
    }
    out.esp=save_ebx_addr;
    out.ebx=out.ecx;
    /* 0x269613 MOV EDX,[EBX+0x514] runs BEFORE PUSH ESI/EDI. */
    if(!mem->read_dword(mem->context,out.ebx+UINT32_C(0x514),&out.edx)){
        out.status=BF_00269600_PREFIX_COUNT_FAULT;
        out.fault_address=out.ebx+UINT32_C(0x514);
        return out;
    }
    /* 0x269619 PUSH ESI; 0x26961A PUSH EDI. */
    const uint32_t save_esi_addr=out.esp-UINT32_C(4);
    if(!mem->write_dword(mem->context,save_esi_addr,input.original_esi)){
        out.status=BF_00269600_PREFIX_PUSH_FAULT;
        out.fault_address=save_esi_addr;
        return out;
    }
    out.esp=save_esi_addr;
    const uint32_t save_edi_addr=out.esp-UINT32_C(4);
    if(!mem->write_dword(mem->context,save_edi_addr,input.original_edi)){
        out.status=BF_00269600_PREFIX_PUSH_FAULT;
        out.fault_address=save_edi_addr;
        return out;
    }
    out.esp=save_edi_addr;
    /* 0x26961B MOV ECX,EDX, then REP STOSD; MOV ECX,0x146;
     * MOV ESI,EBX, then REP MOVSD. In original CPU an incoming DF
     * can reverse the traversal: do not silently force CLD. */
    out.copies=bf_00269600_guest_prepare_from_edx(
        mem,out.ebx,out.esp,out.edx,input.direction_flag);
    out.esi=out.copies.repeat.esi;
    out.edi=out.copies.repeat.edi;
    out.ecx=out.copies.repeat.ecx;
    out.eax=out.copies.repeat.eax;
    if(out.copies.status!=BF_00269600_REP_OK){
        out.status=BF_00269600_PREFIX_REP_FAULT;
        out.fault_address=out.copies.fault_address;
        return out;
    }
    out.status=BF_00269600_PREFIX_OK;
    return out;
}
#endif
