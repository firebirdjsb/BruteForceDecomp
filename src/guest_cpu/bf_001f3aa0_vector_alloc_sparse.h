/* Original Xbox 001F3B2C..001F3B62 connected guest operations:
 * CALL 002B7970, RET 8, CALL 002B8D60, sparse 256 DWORD writes.
 * Original 2B8D60 indirect heap allocator remains an external guest
 * callback, not a guessed Xbox XDK or host malloc implementation.
 */
#ifndef BF_001F3AA0_VECTOR_ALLOC_SPARSE_H
#define BF_001F3AA0_VECTOR_ALLOC_SPARSE_H
#include "bf_001f3aa0_vector_call.h"
#include "bf_001f3aa0_allocator_call.h"

typedef enum bf_001f3aa0_chain_status {
    BF_001F3AA0_CHAIN_OK=0,
    BF_001F3AA0_CHAIN_INVALID,
    BF_001F3AA0_CHAIN_VECTOR_FAILED,
    BF_001F3AA0_CHAIN_ALLOCATOR_FAILED,
    BF_001F3AA0_CHAIN_SPARSE_FAILED
} bf_001f3aa0_chain_status;

typedef struct bf_001f3aa0_chain_result {
    bf_001f3aa0_chain_status status;
    uint32_t instruction_va,fault_guest_va;
    uint32_t live_guest_esp,allocated_object_guest;
    bf_001f3aa0_vector_result vector;
    bf_001f3aa0_allocator_result allocation;
    bf_001f3aa0_sparse_site_result sparse;
} bf_001f3aa0_chain_result;

/* The original caller's saved EBX is explicitly provided from its
 * guest CPU state. The original EDI (incoming ECX object) is recovered
 * by the verified producer, not guessed from the host address.
 * The three operations share the exact same guest-memory callbacks.
 */
static inline bf_001f3aa0_chain_result
bf_001f3aa0_execute_vector_alloc_sparse(
    const bf_002b7970_tail_io *memory,
    const bf_002b7970_x87 *base_fpu,
    const bf_002b7970_tail_ops *tail_fpu,
    const bf_001f3aa0_producer_result *producer,
    bf_002b7970_xmm *xmm,
    uint32_t guest_ebp,
    uint32_t caller_ebx,
    bool direction_flag,
    bool (*call_guest_allocator)(void *,uint32_t,uint32_t,uint32_t,uint32_t *))
{
    bf_001f3aa0_chain_result result={0};
    result.status=BF_001F3AA0_CHAIN_INVALID;
    if(!memory||!memory->words.read32||!memory->words.write32||
       !producer||!call_guest_allocator||
       producer->live_guest_esp!=((guest_ebp&~UINT32_C(15))-UINT32_C(0x20b0)))
        return result;
    result.vector=bf_001f3aa0_execute_vector_call(
        memory,base_fpu,tail_fpu,producer,xmm);
    if(result.vector.status!=BF_001F3AA0_VECTOR_OK){
        result.status=BF_001F3AA0_CHAIN_VECTOR_FAILED;
        result.instruction_va=result.vector.pc;
        result.fault_guest_va=result.vector.fault_va;
        return result;
    }
    const bf_002b8d60_guest_io alloc_io={
        memory->words.ctx,memory->words.read32,memory->words.write32,
        call_guest_allocator
    };
    result.allocation=bf_001f3aa0_execute_allocator_call(
        &alloc_io,guest_ebp,result.vector.live_esp,caller_ebx,
        producer->edi,direction_flag);
    if(result.allocation.status!=BF_001F3AA0_ALLOC_OK){
        result.status=BF_001F3AA0_CHAIN_ALLOCATOR_FAILED;
        result.instruction_va=result.allocation.instruction_va;
        result.fault_guest_va=result.allocation.fault_guest_va;
        return result;
    }
    const bf_002ebea0_guest_mem guest={
        memory->words.ctx,memory->words.read32,memory->words.write32
    };
    result.sparse=bf_001f3aa0_execute_sparse_site(
        &guest,guest_ebp,result.allocation.after_return_esp);
    if(!result.sparse.accepted ||
       result.sparse.storage.status!=BF_002EBEA0_OK){
        result.status=BF_001F3AA0_CHAIN_SPARSE_FAILED;
        result.instruction_va=UINT32_C(0x001f3b4a);
        result.fault_guest_va=result.sparse.storage.fault_address;
        return result;
    }
    result.status=BF_001F3AA0_CHAIN_OK;
    result.instruction_va=UINT32_C(0x001f3b62);
    result.live_guest_esp=result.allocation.after_return_esp;
    result.allocated_object_guest=result.allocation.output_object_guest;
    return result;
}
#endif
