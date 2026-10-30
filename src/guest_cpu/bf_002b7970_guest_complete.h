/* Original Xbox 0x002B7970..0x002B7AF0 composed guest operation.
 * The x87 base and SIMD tail share one guest address space and one
 * original x87 stack backend. Not Xbox guest exception restart parity.
 */
#ifndef BF_002B7970_GUEST_COMPLETE_H
#define BF_002B7970_GUEST_COMPLETE_H
#include "bf_002b7970_guest_tail.h"
typedef enum bf_002b7970_complete_status {
    BF_002B7970_COMPLETE_OK=0,BF_002B7970_COMPLETE_INVALID,
    BF_002B7970_COMPLETE_BASE_FAILED,BF_002B7970_COMPLETE_TAIL_FAILED
} bf_002b7970_complete_status;
typedef struct bf_002b7970_complete_result {
    bf_002b7970_complete_status status;
    uint32_t pc,fault_va,final_eax,final_esp,return_eip;
    bf_002b7970_result base;
    bf_002b7970_tail_result tail;
} bf_002b7970_complete_result;
static inline bf_002b7970_complete_result bf_002b7970_execute_complete(
    const bf_002b7970_tail_io *mem,
    const bf_002b7970_x87 *base_x87,
    const bf_002b7970_tail_ops *tail_fpu,
    uint32_t entry_esp,bf_002b7970_xmm *xmm)
{
    bf_002b7970_complete_result r={0};r.status=BF_002B7970_COMPLETE_INVALID;
    if(!mem||!base_x87||!tail_fpu||!xmm||
       base_x87->ctx!=tail_fpu->ctx)return r;
    r.base=bf_002b7970_execute_base(&mem->words,base_x87,entry_esp);
    if(r.base.status!=BF_002B7970_OK){
        r.status=BF_002B7970_COMPLETE_BASE_FAILED;
        r.pc=r.base.pc;r.fault_va=r.base.fault_va;
        return r;
    }
    r.tail=bf_002b7970_execute_tail(mem,tail_fpu,entry_esp,xmm);
    if(r.tail.status!=BF_002B7970_TAIL_OK){
        r.status=BF_002B7970_COMPLETE_TAIL_FAILED;
        r.pc=r.tail.pc;r.fault_va=r.tail.fault_va;
        return r;
    }
    r.status=BF_002B7970_COMPLETE_OK;
    r.pc=r.tail.pc;r.final_eax=r.tail.final_eax;
    r.final_esp=r.tail.final_esp;r.return_eip=r.tail.return_eip;
    return r;
}
#endif
