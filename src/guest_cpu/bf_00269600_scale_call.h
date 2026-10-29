/* Original 0x002696AD..0x002696C3: two PUSH arguments, CALL
 * 0x0026A780, then its plain RET into the original caller.
 * Proven entry stack addresses from bf_00269600_downstream_calls.h.
 * No invented host C pointer casting, x87 backend or guest SEH.
 */
#ifndef BF_00269600_SCALE_CALL_H
#define BF_00269600_SCALE_CALL_H
#include "bf_00269600_downstream_calls.h"
#include "bf_0026a780_guest_scale.h"

typedef enum bf_00269600_scale_call_status {
    BF_00269600_SCALE_OK=0,
    BF_00269600_SCALE_INVALID,
    BF_00269600_SCALE_PUSH_FAULT,
    BF_00269600_SCALE_CALLEE_FAULT,
    BF_00269600_SCALE_RETURN_MISMATCH
} bf_00269600_scale_call_status;
typedef struct bf_00269600_scale_call_result {
    bf_00269600_scale_call_status status;
    uint32_t fault_guest_va;
    uint32_t instruction_va;
    uint32_t after_return_esp;
    bf_0026a780_result callee;
} bf_00269600_scale_call_result;

static inline bf_00269600_scale_call_result
bf_00269600_execute_scale_call(
    const bf_0026a780_guest_io *mem,
    const bf_0026a780_x87_ops *fpu,
    const bf_00269600_call_contracts *contract,
    uint32_t saved_esi,uint32_t saved_edi,uint32_t saved_ebp,
    bool direction_flag)
{
    bf_00269600_scale_call_result r={0};
    r.status=BF_00269600_SCALE_INVALID;
    if(!mem||!mem->write32||!mem->read32||!fpu||!contract||
       !contract->valid||
       contract->scale.target_va!=UINT32_C(0x0026a780)||
       contract->scale.return_eip!=UINT32_C(0x002696c3)||
       contract->scale.argument_count!=2u||
       contract->scale.known_reg_mask!=UINT32_C(0xb))
        return r;
    const bf_00269600_guest_call *c=&contract->scale;
#define BF_PUSH_WORD(a,w,pc) do {const uint32_t va=(a);r.instruction_va=(pc);\
    if(!mem->write32(mem->ctx,va,(w))){ \
       r.status=BF_00269600_SCALE_PUSH_FAULT;r.fault_guest_va=va;return r;\
    }}while(0)
    /* 2696AD LEA EAX,[ESP+60]; 2696B1 PUSH EAX (second arg).
     * 2696B2 LEA ECX,[ESP+A94]; 2696B9 PUSH ECX (first arg).
     * 2696BE CALL 26A780 pushes continuation at entry_esp. */
    BF_PUSH_WORD(c->entry_esp+8u,c->args[1],UINT32_C(0x2696b1));
    BF_PUSH_WORD(c->entry_esp+4u,c->args[0],UINT32_C(0x2696b9));
    BF_PUSH_WORD(c->entry_esp,c->return_eip,UINT32_C(0x2696be));
#undef BF_PUSH_WORD
    const bf_0026a780_regs regs={
        c->entry_esp,c->ebx,saved_esi,saved_edi,saved_ebp,direction_flag
    };
    r.callee=bf_0026a780_execute(mem,fpu,regs);
    if(r.callee.status!=BF_0026A780_OK){
        r.status=BF_00269600_SCALE_CALLEE_FAULT;
        r.instruction_va=r.callee.instruction_va;
        r.fault_guest_va=r.callee.fault_guest_va;
        return r;
    }
    if(r.callee.next_eip!=c->return_eip||
       r.callee.final_esp!=c->post_return_esp){
        r.status=BF_00269600_SCALE_RETURN_MISMATCH;
        return r;
    }
    r.status=BF_00269600_SCALE_OK;
    r.instruction_va=UINT32_C(0x2696c3);
    r.after_return_esp=r.callee.final_esp;
    return r;
}
#endif
