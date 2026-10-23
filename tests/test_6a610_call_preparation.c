#include "bf_6a610_call_preparation.h"
#include <stdint.h>
#include <stdio.h>
#include <assert.h>
int main(void)
{
 BF_6A610_CallPreparation a=BF_prepare_6a5f0(3,0x1000,UINT32_C(0xdeadbeef));
 assert(a.incoming_ebx==0x1008&&a.incoming_edi==0x10a0);
 assert(a.referenced_stack_word==UINT32_C(0xdeadbeef));
 assert(a.referenced_stack_arg_index==1&&a.caller_ret_stack_bytes==4);
 assert(a.callee_ret_stack_bytes==4);
 BF_6A610_CallPreparation b=BF_prepare_907a0(2,0x1000,5,UINT32_C(0x12345678));
 assert(b.incoming_ebx==0x1008&&b.incoming_edi==0x1c14);
 assert(b.referenced_stack_word==UINT32_C(0x12345678));
 assert(b.referenced_stack_arg_index==2&&b.caller_ret_stack_bytes==8);
 assert(b.callee_ret_stack_bytes==4);
 a=BF_prepare_6a5f0(UINT32_MAX,UINT32_MAX,0);
 assert(a.incoming_ebx==7);
 assert(a.incoming_edi==UINT32_MAX+4u*(5u*UINT32_MAX+25u));
 /* Verify the second wrapper's complete unsigned x86 DWORD wrap behavior. */
 b=BF_prepare_907a0(UINT32_MAX,UINT32_MAX,UINT32_MAX,UINT32_C(0xa5a5a5a5));
 assert(b.incoming_ebx==UINT32_C(7));
 assert(b.incoming_edi==(uint32_t)(UINT32_MAX+UINT32_C(0x62c)+
                                  UINT32_C(24)*(UINT32_C(29)*UINT32_MAX+UINT32_MAX)));
 assert(b.referenced_stack_word==UINT32_C(0xa5a5a5a5));
 assert(b.referenced_stack_arg_index==2);
 assert(b.caller_ret_stack_bytes==8&&b.callee_ret_stack_bytes==4);
 /* The first stack word affects EDI, not the forwarded second stack word.
  * These are input-preparation invariants, NOT evidence of callee behavior. */
 {
  BF_6A610_CallPreparation c=BF_prepare_907a0(2,0x1000,6,UINT32_C(0x12345678));
  assert(c.incoming_edi==UINT32_C(0x1c2c));
  assert(c.referenced_stack_word==UINT32_C(0x12345678));
 }
 puts("6a610 prep arithmetic model: PASS (not binary ABI)");
 return 0;
}
