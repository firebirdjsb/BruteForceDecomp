/* Original Xbox 0x002696C3..0x002696E0 CALL 0x0026A810.
 * Three original PUSHed guest addresses; no native host pointers.
 * Requires successful prior 0x00269600 prefix and true x87/memory
 * backend for original guest execution. No full Xbox SEH parity claim.
 */
#ifndef BF_00269600_COMBINE_CALL_H
#define BF_00269600_COMBINE_CALL_H
#include "bf_00269600_downstream_calls.h"
#include "bf_0026a810_guest_matrix.h"
typedef enum bf_00269600_combine_status {
    BF_00269600_COMBINE_OK=0,
    BF_00269600_COMBINE_INVALID,
    BF_00269600_COMBINE_PUSH_FAULT,
    BF_00269600_COMBINE_CALLEE_FAULT,
    BF_00269600_COMBINE_RETURN_MISMATCH
} bf_00269600_combine_status;
typedef struct bf_00269600_combine_result {
    bf_00269600_combine_status status;
    uint32_t fault_address,pc,after_return_esp;
    bf_0026a810_result callee;
} bf_00269600_combine_result;
static inline bf_00269600_combine_result bf_00269600_execute_combine_call(
    const bf_0026a810_mem *m,const bf_0026a810_x87 *f,
    const bf_00269600_call_contracts *contract,
    uint32_t saved_esi,uint32_t saved_edi,uint32_t saved_ebx,
    uint32_t saved_ebp,bool direction_flag)
{
    bf_00269600_combine_result r={0};
    r.status=BF_00269600_COMBINE_INVALID;
    if(!m||!m->write32||!m->read32||!f||!contract||!contract->valid)
        return r;
    const bf_00269600_guest_call *c=&contract->combine;
    if(c->target_va!=UINT32_C(0x0026a810)||
       c->return_eip!=UINT32_C(0x002696e0)||
       c->argument_count!=3u||
       c->known_reg_mask!=UINT32_C(0xf)||
       c->post_return_esp!=c->entry_esp+4u)
        return r;
#define PUSH(address,value,at) do{const uint32_t va=(address);r.pc=(at);\
    if(!m->write32(m->ctx,va,(value))){r.status=BF_00269600_COMBINE_PUSH_FAULT;\
        r.fault_address=va;return r;}}while(0)
    /* At 0x2696C3 live ESP=S-8 following the prior plain RET:
     * LEA EDX,[ESP+0x580]; PUSH EDX (third argument)
     * LEA EAX,[ESP+0xA9C]; PUSH EAX (second argument)
     * LEA ECX,[ESP+0xFB8]; PUSH ECX (first argument)
     * CALL pushes original continuation 0x002696E0. */
    PUSH(c->entry_esp+12u,c->args[2],UINT32_C(0x2696ca));
    PUSH(c->entry_esp+8u,c->args[1],UINT32_C(0x2696d2));
    PUSH(c->entry_esp+4u,c->args[0],UINT32_C(0x2696da));
    PUSH(c->entry_esp,c->return_eip,UINT32_C(0x2696db));
#undef PUSH
    const bf_0026a810_entry in={
        c->entry_esp,saved_esi,saved_edi,saved_ebx,saved_ebp,direction_flag
    };
    r.callee=bf_0026a810_execute(m,f,in);
    if(r.callee.status!=BF_0026A810_OK){
        r.status=BF_00269600_COMBINE_CALLEE_FAULT;
        r.pc=r.callee.pc;r.fault_address=r.callee.fault_address;
        return r;
    }
    if(r.callee.next_eip!=c->return_eip ||
       r.callee.esp!=c->post_return_esp ||
       r.callee.eax!=c->args[0]){
        r.status=BF_00269600_COMBINE_RETURN_MISMATCH;return r;
    }
    r.after_return_esp=r.callee.esp;
    r.status=BF_00269600_COMBINE_OK;
    r.pc=UINT32_C(0x2696e0);
    return r;
}
#endif
