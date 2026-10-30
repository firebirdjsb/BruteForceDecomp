/* Original 0x001F3AA0 after verified guest prologue and source producer:
 * 002B7970 x87/SSE, 002B8D60 allocations, 256 sparse DWORD writes,
 * two conditional calls, x87 result, 002B8DE0 cleanup and RET 8.
 *
 * This is a complete after-producer guest operation schedule, not
 * a verified concrete Xbox allocator or virtual method implementation.
 * Original guest x87/MXCSR/SEH and the implicit entry ABI are supplied
 * by the host guest CPU and remain separate from draft C11 syntax.
 */
#ifndef BF_001F3AA0_COMPLETE_GUEST_H
#define BF_001F3AA0_COMPLETE_GUEST_H
#include "bf_001f3aa0_vector_alloc_sparse.h"
#include "bf_001f3aa0_guest_tail.h"

typedef enum bf_001f3aa0_complete_status {
    BF_001F3AA0_COMPLETE_OK=0,
    BF_001F3AA0_COMPLETE_INVALID,
    BF_001F3AA0_COMPLETE_PREFIX_FAILED,
    BF_001F3AA0_COMPLETE_TAIL_FAILED
} bf_001f3aa0_complete_status;

typedef struct bf_001f3aa0_complete_result {
    bf_001f3aa0_complete_status status;
    uint32_t pc,fault_va,final_esp,next_eip;
    uint32_t x87_final_bits; /* on success the backend has FLD-ed this */
    bf_001f3aa0_chain_result prefix;
    bf_001f3aa0_tail_result tail;
} bf_001f3aa0_complete_result;

static inline bf_001f3aa0_complete_result bf_001f3aa0_execute_after_producer(
    const bf_002b7970_tail_io *mem,
    const bf_002b7970_x87 *vector_base_fpu,
    const bf_002b7970_tail_ops *vector_tail_fpu,
    const bf_001f3aa0_tail_x87 *result_fpu,
    const bf_001f3aa0_producer_result *producer,
    bf_002b7970_xmm *xmm,
    uint32_t guest_ebp,uint32_t saved_ebx,bool direction_flag,
    bool (*call_guest_allocator)(void *,uint32_t,uint32_t,uint32_t,uint32_t *),
    bool (*call_branch)(void *,uint32_t,uint32_t,uint32_t,uint32_t,
                        uint32_t *,uint32_t *),
    bool (*call_free)(void *,uint32_t,uint32_t,uint32_t,
                      uint32_t *,uint32_t *),
    uint32_t max_buckets,uint32_t max_nodes)
{
    bf_001f3aa0_complete_result r={0};
    r.status=BF_001F3AA0_COMPLETE_INVALID;
    if(!mem||!producer||!xmm||!result_fpu||!vector_base_fpu||
       !vector_tail_fpu||!call_guest_allocator||!call_branch||!call_free||
       result_fpu->context!=vector_base_fpu->ctx ||
       result_fpu->context!=vector_tail_fpu->ctx)
        return r;
    r.prefix=bf_001f3aa0_execute_vector_alloc_sparse(
        mem,vector_base_fpu,vector_tail_fpu,producer,xmm,
        guest_ebp,saved_ebx,direction_flag,call_guest_allocator);
    if(r.prefix.status!=BF_001F3AA0_CHAIN_OK){
        r.status=BF_001F3AA0_COMPLETE_PREFIX_FAILED;
        r.pc=r.prefix.instruction_va;r.fault_va=r.prefix.fault_guest_va;
        return r;
    }
    const bf_001f3aa0_tail_io tail_io={
        {mem->words.ctx,mem->words.read32,mem->words.write32,call_free},
        call_branch
    };
    const bf_001f3aa0_tail_entry tail_entry={
        r.prefix.live_guest_esp,guest_ebp,producer->edi,saved_ebx,
        r.prefix.live_guest_esp+UINT32_C(0x90),
        max_buckets,max_nodes
    };
    r.tail=bf_001f3aa0_execute_tail(&tail_io,result_fpu,tail_entry);
    if(r.tail.status!=BF_001F3AA0_TAIL_OK){
        r.status=BF_001F3AA0_COMPLETE_TAIL_FAILED;
        r.pc=r.tail.pc;r.fault_va=r.tail.fault_address;
        return r;
    }
    r.status=BF_001F3AA0_COMPLETE_OK;
    r.pc=r.tail.pc;r.final_esp=r.tail.final_esp;
    r.next_eip=r.tail.return_eip;r.x87_final_bits=r.tail.loaded_final_float_bits;
    return r;
}
#endif
