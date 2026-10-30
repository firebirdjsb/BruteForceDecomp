/* Original 0x001F3B2C CALL 0x002B7970: producer's two PUSHes are
 * already present at guest live ESP-4/-8. The actual CALL pushes the
 * continuation at live ESP-12. Original callee RET 8 restores ESP.
 */
#ifndef BF_001F3AA0_VECTOR_CALL_H
#define BF_001F3AA0_VECTOR_CALL_H
#include "bf_001f3aa0_guest_producer.h"
#include "bf_002b7970_guest_complete.h"
typedef enum bf_001f3aa0_vector_status {
    BF_001F3AA0_VECTOR_OK=0,BF_001F3AA0_VECTOR_INVALID,
    BF_001F3AA0_VECTOR_CALL_PUSH_FAULT,
    BF_001F3AA0_VECTOR_CALLEE_FAILED,
    BF_001F3AA0_VECTOR_RETURN_MISMATCH
} bf_001f3aa0_vector_status;
typedef struct bf_001f3aa0_vector_result {
    bf_001f3aa0_vector_status status;
    uint32_t pc,fault_va,live_esp,output_guest;
    bf_002b7970_complete_result callee;
} bf_001f3aa0_vector_result;
static inline bf_001f3aa0_vector_result bf_001f3aa0_execute_vector_call(
    const bf_002b7970_tail_io *mem,
    const bf_002b7970_x87 *base_fpu,
    const bf_002b7970_tail_ops *tail_fpu,
    const bf_001f3aa0_producer_result *producer,
    bf_002b7970_xmm *xmm)
{
    bf_001f3aa0_vector_result r={0};r.status=BF_001F3AA0_VECTOR_INVALID;
    if(!mem||!mem->words.write32||!producer||!xmm||
       producer->status!=BF_001F3AA0_PRODUCER_OK||
       producer->instruction_va!=UINT32_C(0x001f3b2c)||
       producer->return_eip!=UINT32_C(0x001f3b31)||
       producer->guest_call_esp!=producer->live_guest_esp-UINT32_C(8)||
       producer->first_arg!=producer->live_guest_esp+UINT32_C(0x40)||
       producer->second_arg!=producer->live_guest_esp+UINT32_C(0x18))
        return r;
    const uint32_t entry=producer->guest_call_esp-UINT32_C(4);
    r.pc=UINT32_C(0x001f3b2c);
    if(!mem->words.write32(mem->words.ctx,entry,producer->return_eip)){
        r.status=BF_001F3AA0_VECTOR_CALL_PUSH_FAULT;
        r.fault_va=entry;return r;
    }
    r.callee=bf_002b7970_execute_complete(mem,base_fpu,tail_fpu,entry,xmm);
    if(r.callee.status!=BF_002B7970_COMPLETE_OK){
        r.status=BF_001F3AA0_VECTOR_CALLEE_FAILED;
        r.pc=r.callee.pc;r.fault_va=r.callee.fault_va;
        return r;
    }
    if(r.callee.return_eip!=producer->return_eip||
       r.callee.final_esp!=producer->live_guest_esp||
       r.callee.final_eax!=producer->first_arg){
        r.status=BF_001F3AA0_VECTOR_RETURN_MISMATCH;
        return r;
    }
    r.status=BF_001F3AA0_VECTOR_OK;
    r.pc=producer->return_eip;r.live_esp=r.callee.final_esp;
    r.output_guest=r.callee.final_eax;
    return r;
}
#endif
