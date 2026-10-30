/* Observed 0x00155A7E..0x00155A92 virtual method -> 0x000621C0.
 * This is a caller-side guest address bridge, not a guessed host vtable.
 * The indirect method's behavior remains unresolved; only an explicitly
 * supplied, validated guest method executor may produce its EAX return.
 */
#ifndef BF_00155840_VIRTUAL_621C0_H
#define BF_00155840_VIRTUAL_621C0_H
#include "bf_00155840_x87_call_bridge.h"

typedef struct bf_00155840_guest_virtual {
    void *ctx;
    bool (*invoke)(void *ctx, uint32_t target_va, uint32_t receiver_ecx,
                   uint32_t *eax_after_call);
} bf_00155840_guest_virtual;

typedef enum bf_00155840_virtual_621c0_status {
    BF_00155840_V621C0_OK = 0,
    BF_00155840_V621C0_INVALID_INTERFACE,
    BF_00155840_V621C0_GUEST_READ_FAILED,
    BF_00155840_V621C0_METHOD_UNRESOLVED,
    BF_00155840_V621C0_EXECUTION_FAILED
} bf_00155840_virtual_621c0_status;

typedef struct bf_00155840_virtual_621c0_result {
    bf_00155840_virtual_621c0_status status;
    bf_621c0_status bridge_status;
    uint32_t method_target_va;
    uint32_t receiver_ecx;
    uint32_t matrix_eax;
    uint32_t fault_guest_addr;
} bf_00155840_virtual_621c0_result;

static inline bf_00155840_virtual_621c0_result
bf_00155840_execute_virtual_621c0(const bf_621c0_guest_words *mem,
    const bf_621c0_x87_operations *x87,
    const bf_00155840_guest_virtual *method,
    uint32_t guest_ebp, uint32_t transform_callee_entry_esp)
{
    bf_00155840_virtual_621c0_result r = {BF_00155840_V621C0_OK};
    uint32_t arg, table;
    if (!mem || !mem->read_u32 || !method || !method->invoke || !x87) {
        r.status = BF_00155840_V621C0_INVALID_INTERFACE;
        return r;
    }
    /* Original MOV ECX,[EBP+8]; MOV EAX,[ECX+0x48];
     * ADD ECX,0x48; CALL DWORD PTR [EAX+0x14]. */
    r.fault_guest_addr = guest_ebp + 8u;
    if (!mem->read_u32(mem->ctx,r.fault_guest_addr,&arg)) goto read_failed;
    r.receiver_ecx = arg + 0x48u;
    r.fault_guest_addr = r.receiver_ecx;
    if (!mem->read_u32(mem->ctx,r.fault_guest_addr,&table)) goto read_failed;
    r.fault_guest_addr = table + 0x14u;
    if (!mem->read_u32(mem->ctx,r.fault_guest_addr,&r.method_target_va)) goto read_failed;
    r.fault_guest_addr = 0;
    if (!method->invoke(method->ctx,r.method_target_va,r.receiver_ecx,&r.matrix_eax)) {
        r.status = BF_00155840_V621C0_METHOD_UNRESOLVED;
        return r;
    }
    /* 0x00155A8A: ECX=returned EAX; 0x8C EDX=[EBP-0x68];
     * 0x8F EAX=[EBP-0x2c]; 0x92 CALL 0x000621C0. */
    r.bridge_status = bf_00155840_execute_621c0(mem,x87,
         bf_00155840_bind_621c0(guest_ebp,r.matrix_eax),
         transform_callee_entry_esp,&r.fault_guest_addr);
    r.status = r.bridge_status == BF_621C0_OK ? BF_00155840_V621C0_OK
                                             : BF_00155840_V621C0_EXECUTION_FAILED;
    return r;
read_failed:
    r.status = BF_00155840_V621C0_GUEST_READ_FAILED;
    return r;
}
#endif
