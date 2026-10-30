/* 0x001F3B31..0x001F3B4A: original MOV EAX,8; LEA ESI;
 * [ESP+0x40] = 0x0039EFC8; CALL 0x002B8D60 and resume.
 * Must be supplied the verified ESP after 0x002B7970 RET 8.
 */
#ifndef BF_001F3AA0_ALLOCATOR_CALL_H
#define BF_001F3AA0_ALLOCATOR_CALL_H
#include "bf_001f3aa0_sparse_site.h"
#include "bf_002b8d60_guest_alloc.h"

typedef enum bf_001f3aa0_allocator_status {
    BF_001F3AA0_ALLOC_OK=0,
    BF_001F3AA0_ALLOC_INVALID,
    BF_001F3AA0_ALLOC_WRITE_FAULT,
    BF_001F3AA0_ALLOC_CALLEE_FAULT,
    BF_001F3AA0_ALLOC_RETURN_MISMATCH
} bf_001f3aa0_allocator_status;
typedef struct bf_001f3aa0_allocator_result {
    bf_001f3aa0_allocator_status status;
    uint32_t instruction_va,fault_guest_va,after_return_esp;
    uint32_t output_object_guest;
    bf_002b8d60_result callee;
} bf_001f3aa0_allocator_result;

static inline bf_001f3aa0_allocator_result bf_001f3aa0_execute_allocator_call(
    const bf_002b8d60_guest_io *mem,
    uint32_t guest_ebp,uint32_t live_guest_esp,
    uint32_t ebx,uint32_t edi,bool direction_flag)
{
    bf_001f3aa0_allocator_result r={0};
    r.status=BF_001F3AA0_ALLOC_INVALID;
    if(!mem||!mem->write32||!mem->read32||!mem->call_allocator||
       live_guest_esp!=((guest_ebp&~UINT32_C(15))-UINT32_C(0x20b0)))
       return r;
    /* Original 1F3B31 MOV EAX,8; 1F3B36 LEA ESI,[ESP+0x90]. */
    r.output_object_guest=live_guest_esp+UINT32_C(0x90);
    /* 1F3B3D MOV [ESP+0x40],0x0039EFC8. */
    const uint32_t metadata_va=live_guest_esp+UINT32_C(0x40);
    r.instruction_va=UINT32_C(0x1f3b3d);
    if(!mem->write32(mem->ctx,metadata_va,UINT32_C(0x0039efc8))){
        r.status=BF_001F3AA0_ALLOC_WRITE_FAULT;
        r.fault_guest_va=metadata_va;
        return r;
    }
    /* 1F3B45 CALL pushes 1F3B4A at [ESP-4]. */
    const uint32_t entry_esp=live_guest_esp-UINT32_C(4);
    r.instruction_va=UINT32_C(0x1f3b45);
    if(!mem->write32(mem->ctx,entry_esp,UINT32_C(0x001f3b4a))){
        r.status=BF_001F3AA0_ALLOC_WRITE_FAULT;
        r.fault_guest_va=entry_esp;
        return r;
    }
    const bf_002b8d60_regs args={
        entry_esp,UINT32_C(8),r.output_object_guest,
        ebx,edi,direction_flag
    };
    r.callee=bf_002b8d60_execute(mem,args);
    if(r.callee.status!=BF_002B8D60_OK){
        r.status=BF_001F3AA0_ALLOC_CALLEE_FAULT;
        r.fault_guest_va=r.callee.fault_guest_va;
        r.instruction_va=r.callee.instruction_va;
        return r;
    }
    if(r.callee.next_eip!=UINT32_C(0x001f3b4a)||
       r.callee.final_eax!=r.output_object_guest||
       r.callee.final_esp!=live_guest_esp){
        r.status=BF_001F3AA0_ALLOC_RETURN_MISMATCH;
        return r;
    }
    r.after_return_esp=r.callee.final_esp;
    r.status=BF_001F3AA0_ALLOC_OK;
    r.instruction_va=UINT32_C(0x001f3b4a);
    return r;
}
#endif
