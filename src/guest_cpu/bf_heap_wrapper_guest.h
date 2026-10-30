/* Xbox Brute Force original 0x237EA0,0x237EC0,0x237EE0.
 * Image default indirections: [3BC650]=237EA0, [3BC654]=237EC0,
 * [3BC658]=237EE0. Runtime may patch these table entries; unknown
 * targets are refused, not replaced with native malloc/free.
 */
#ifndef BF_HEAP_WRAPPER_GUEST_H
#define BF_HEAP_WRAPPER_GUEST_H
#include <stdint.h>
#include <stdbool.h>
typedef struct bf_heap_guest_io {
    void *context;
    bool (*read32)(void*,uint32_t,uint32_t*);
    bool (*write32)(void*,uint32_t,uint32_t);
    /* Backend implements original nested 2F6E31/2F77DC/2F648F,
     * including all Xbox guest heap side effects and RET 12. */
    bool (*call_inner)(void*,uint32_t,uint32_t,uint32_t*,uint32_t*,uint32_t*);
} bf_heap_guest_io;
typedef enum bf_heap_guest_status {
    BF_HEAP_GUEST_OK=0,BF_HEAP_GUEST_INVALID,BF_HEAP_GUEST_READ_FAULT,
    BF_HEAP_GUEST_WRITE_FAULT,BF_HEAP_GUEST_PATCHED_TARGET,
    BF_HEAP_GUEST_CALLEE_UNKNOWN,BF_HEAP_GUEST_BAD_RETURN
} bf_heap_guest_status;
typedef enum bf_heap_op {
    BF_HEAP_ALLOC=0,BF_HEAP_FREE=1,BF_HEAP_FREE_ALT=2
} bf_heap_op;
typedef struct bf_heap_result {
    bf_heap_guest_status status;
    uint32_t pc,fault_address,loaded_target,inner_target;
    uint32_t result_eax,next_eip,final_esp;
    bool called_inner;
} bf_heap_result;

static inline bf_heap_result bf_heap_execute_default_wrapper(
    const bf_heap_guest_io *io,bf_heap_op op,uint32_t entry_esp)
{
    bf_heap_result r={0};r.status=BF_HEAP_GUEST_INVALID;
    if(!io||!io->read32||!io->write32||!io->call_inner||
       op>BF_HEAP_FREE_ALT)return r;
#define RD(a,v,pc0) do{const uint32_t address=(a);r.pc=(pc0);\
    if(!io->read32(io->context,address,&(v))){\
    r.status=BF_HEAP_GUEST_READ_FAULT;r.fault_address=address;return r;}}while(0)
#define WR(a,v,pc0) do{const uint32_t address=(a);r.pc=(pc0);\
    if(!io->write32(io->context,address,(v))){\
    r.status=BF_HEAP_GUEST_WRITE_FAULT;r.fault_address=address;return r;}}while(0)
    const uint32_t selector=op==BF_HEAP_ALLOC?UINT32_C(0x3bc650):
        op==BF_HEAP_FREE?UINT32_C(0x3bc654):UINT32_C(0x3bc658);
    const uint32_t initial_target=op==BF_HEAP_ALLOC?UINT32_C(0x237ea0):
        op==BF_HEAP_FREE?UINT32_C(0x237ec0):UINT32_C(0x237ee0);
    RD(selector,r.loaded_target,selector);
    if(r.loaded_target!=initial_target){
        r.status=BF_HEAP_GUEST_PATCHED_TARGET;return r;
    }
    uint32_t argument,heap_handle,inner_eip,inner_esp;
    const uint32_t first=initial_target;
    RD(entry_esp+4u,argument,first);
    if(op==BF_HEAP_ALLOC&&argument==0u){
        r.result_eax=0u;goto done;
    }
    /* PUSH arg, PUSH 0, CALL 2F77F3.
     * 2F77F3 returns the original [4A90D4] heap handle with RET.
     * Push that handle and CALL the real 3-argument backend. */
    WR(entry_esp-4u,argument,op==BF_HEAP_ALLOC?0x237eaau:0x237ec4u);
    WR(entry_esp-8u,0u,op==BF_HEAP_ALLOC?0x237eabu:0x237ec5u);
    const uint32_t get_heap=op==BF_HEAP_ALLOC?0x237eacu:
        op==BF_HEAP_FREE?0x237ec7u:0x237ee7u;
    WR(entry_esp-12u,get_heap+5u,get_heap);
    RD(UINT32_C(0x4a90d4),heap_handle,UINT32_C(0x2f77f3));
    WR(entry_esp-12u,heap_handle,op==BF_HEAP_ALLOC?0x237eb1u:
        op==BF_HEAP_FREE?0x237eccu:0x237eecu);
    r.inner_target=op==BF_HEAP_ALLOC?UINT32_C(0x2f6e31):
        op==BF_HEAP_FREE?UINT32_C(0x2f77dc):UINT32_C(0x2f648f);
    const uint32_t expected_ip=op==BF_HEAP_ALLOC?UINT32_C(0x237eb7):
        op==BF_HEAP_FREE?UINT32_C(0x237ed2):UINT32_C(0x237ef2);
    WR(entry_esp-16u,expected_ip,op==BF_HEAP_ALLOC?0x237eb2u:
        op==BF_HEAP_FREE?0x237ecdu:0x237eedu);
    r.called_inner=true;r.pc=op==BF_HEAP_ALLOC?0x237eb2u:
        op==BF_HEAP_FREE?0x237ecdu:0x237eedu;
    if(!io->call_inner(io->context,r.inner_target,entry_esp-16u,
                       &r.result_eax,&inner_eip,&inner_esp)){
        r.status=BF_HEAP_GUEST_CALLEE_UNKNOWN;return r;
    }
    if(inner_eip!=expected_ip||inner_esp!=entry_esp){
        r.status=BF_HEAP_GUEST_BAD_RETURN;return r;
    }
done:
    RD(entry_esp,r.next_eip,op==BF_HEAP_ALLOC?0x237eb7u:
        op==BF_HEAP_FREE?0x237ed2u:0x237ef2u);
    r.final_esp=entry_esp+4u;r.status=BF_HEAP_GUEST_OK;
#undef RD
#undef WR
    return r;
}
#endif
