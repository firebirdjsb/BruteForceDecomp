/* Original Xbox 1F35E4 -> 2EA01D -> 67CD0 -> [3BC650] ->
 * initialized 237EA0 -> 2F77F3 / 2F6E31.
 * Reconstructs stack/return order; deepest heap manager is a callback.
 */
#ifndef BF_001F35B0_FIRST_ALLOCATION_H
#define BF_001F35B0_FIRST_ALLOCATION_H
#include "bf_001f35b0_entry_gate.h"
#include "bf_heap_wrapper_guest.h"

typedef enum bf_first_alloc_status {
    BF_FIRST_ALLOC_OK=0,BF_FIRST_ALLOC_INVALID,
    BF_FIRST_ALLOC_WRITE_FAULT,BF_FIRST_ALLOC_HEAP_FAILED,
    BF_FIRST_ALLOC_CONTROL_MISMATCH
} bf_first_alloc_status;
typedef struct bf_first_alloc_result {
    bf_first_alloc_status status;
    uint32_t pc,fault_va,allocated_guest,esp;
    bf_heap_result heap;
} bf_first_alloc_result;

static inline bf_first_alloc_result bf_001f35b0_allocate_first(
    const bf_heap_guest_io *io,bf_001f35b0_result gate)
{
    bf_first_alloc_result r={0};r.status=BF_FIRST_ALLOC_INVALID;
    if(!io||!io->write32||!io->read32||
       gate.status!=BF_001F35B0_NEEDS_ALLOCATOR ||
       gate.pc!=UINT32_C(0x1f35e4))
        return r;
    const uint32_t F=gate.esp;
#define WR(addr,w,at) do{const uint32_t a=(addr);r.pc=(at);\
    if(!io->write32(io->context,a,(w))){r.status=BF_FIRST_ALLOC_WRITE_FAULT;\
    r.fault_va=a;return r;}}while(0)
    /* 1F35E4 PUSH 8; CALL 2EA01D. That function pushes 1 then
     * the first argument and CALLs 67CD0, which PUSHes size and
     * CALLs the current [3BC650] guest heap function. */
    WR(F-4u,8u,UINT32_C(0x1f35e4));
    WR(F-8u,UINT32_C(0x1f35eb),UINT32_C(0x1f35e6));
    WR(F-12u,1u,UINT32_C(0x2ea01d));
    WR(F-16u,8u,UINT32_C(0x2ea01f));
    WR(F-20u,UINT32_C(0x2ea028),UINT32_C(0x2ea023));
    WR(F-24u,8u,UINT32_C(0x67cd4));
    WR(F-28u,UINT32_C(0x67cdb),UINT32_C(0x67cd5));
    r.heap=bf_heap_execute_default_wrapper(io,BF_HEAP_ALLOC,F-28u);
    if(r.heap.status!=BF_HEAP_GUEST_OK){
        r.status=BF_FIRST_ALLOC_HEAP_FAILED;r.pc=r.heap.pc;
        r.fault_va=r.heap.fault_address;return r;
    }
    if(r.heap.next_eip!=UINT32_C(0x67cdb) ||
       r.heap.final_esp!=F-24u){
        r.status=BF_FIRST_ALLOC_CONTROL_MISMATCH;return r;
    }
    /* 67CD0 RET, 2EA01D two POPs + RET, 1F35EB ADD ESP,4. */
    r.allocated_guest=r.heap.result_eax;
    r.esp=F;r.pc=UINT32_C(0x1f35ee);
    r.status=BF_FIRST_ALLOC_OK;
#undef WR
    return r;
}
#endif
