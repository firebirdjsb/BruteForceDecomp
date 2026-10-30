/* Original Brute Force Xbox 0x0026963E..0x002696F1 downstream
 * call-boundary addresses after verified REP prefix and before/after
 * x87 reciprocal decisions. These are guest x86 inputs only; neither
 * original callee implementation nor its output is fabricated.
 * Original XBE SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 */
#ifndef BF_00269600_DOWNSTREAM_CALLS_H
#define BF_00269600_DOWNSTREAM_CALLS_H
#include "bf_00269600_guest_prefix.h"

typedef struct bf_00269600_guest_call {
    uint32_t target_va, return_eip;
    uint32_t entry_esp, post_return_esp;
    uint32_t argument_count, args[4]; /* [callee ESP+4+4*i] */
    uint32_t ebx, ecx, edx, eax; /* original values where mask set */
    uint32_t known_reg_mask; /* 1 EBX, 2 ECX, 4 EDX, 8 EAX.
                              * Unset fields are placeholders, not values. */
} bf_00269600_guest_call;

typedef struct bf_00269600_call_contracts {
    bool valid;
    uint32_t post_probe_stack_esp; /* original after 269870 RET 0x10 */
    bf_00269600_guest_call transform;
    bf_00269600_guest_call scale;
    bf_00269600_guest_call combine;
    uint32_t after_caller_add_esp_14;
    uint32_t output_dword_count;
} bf_00269600_call_contracts;

/* Must be called only after successful 0x26963B PUSH EAX.
 * The original input live_esp (after that push) is S-4.
 * At 0x26963E onward four arguments are pushed. The 0x269870
 * callee finishes with RET 0x10 and removes all four, including
 * the original earlier PUSH EAX. So S = live_esp + 4.
 *
 * After 0x2696AD, two arguments to 0x26A780 are pushed; its
 * plain RET leaves those 8 bytes on the caller's guest stack.
 * Three more arguments are pushed for 0x26A810; its plain RET
 * leaves all 20 bytes until 0x2696E5 ADD ESP,0x14.
 *
 * These formulas are address contracts; no host virtual calls
 * or guest memory is accessed here.
 */
static inline bf_00269600_call_contracts
bf_00269600_bind_original_downstream(bf_00269600_prefix_result prefix)
{
    bf_00269600_call_contracts r={0};
    /* A zero-initialized diagnostic result has enum status 0; it is
     * NOT a completed original guest prologue. Require the observed
     * post-probe return PC as well as its status. */
    if(prefix.status!=BF_00269600_PREFIX_OK ||
       prefix.continuation_eip!=UINT32_C(0x00269610) ||
       prefix.probe.regs.next_eip!=UINT32_C(0x00269610))
        return r;
    const uint32_t S=prefix.esp+UINT32_C(4);
    const uint32_t B=prefix.ebx;
    r.valid=true;
    r.post_probe_stack_esp=S;
    r.transform=(bf_00269600_guest_call){
        UINT32_C(0x00269870),UINT32_C(0x0026965f),
        S-UINT32_C(20),S,4u,
        {B,S+UINT32_C(0x578),S+UINT32_C(0x10),S+UINT32_C(0x60)},
        B,S+UINT32_C(0x10),S+UINT32_C(0x578),S+UINT32_C(0x60),UINT32_C(0xf)
    };
    r.scale=(bf_00269600_guest_call){
        UINT32_C(0x0026a780),UINT32_C(0x002696c3),
        S-UINT32_C(12),S-UINT32_C(8),2u,
        {S+UINT32_C(0xa90),S+UINT32_C(0x60),0u,0u},
        S+UINT32_C(0x10),S+UINT32_C(0xa90),0u,S+UINT32_C(0x60),UINT32_C(0xb)
    };
    r.combine=(bf_00269600_guest_call){
        UINT32_C(0x0026a810),UINT32_C(0x002696e0),
        S-UINT32_C(24),S-UINT32_C(20),3u,
        {S+UINT32_C(0xfa8),S+UINT32_C(0xa90),S+UINT32_C(0x578),0u},
        S+UINT32_C(0x10),S+UINT32_C(0xfa8),S+UINT32_C(0x578),S+UINT32_C(0xa90),UINT32_C(0xf)
    };
    r.after_caller_add_esp_14=S;
    r.output_dword_count=UINT32_C(0x146);
    return r;
}
#endif
