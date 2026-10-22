/* Assembly-derived callsite preparation; does NOT invoke the game callee.
 * 0x0006A5F0 original body SHA-256: 307A25290BA18AAA55A25A67CB64712923EF1AF477E272CC6174F6A25F5A583C
 * 0x000907A0 original body SHA-256: 39EFCDB2B2C5B4FBEEC607D2E76CA473952B3A6B8FE8A84104380F12D0E5EF54
 */
#include "bf_6a610_call_preparation.h"
BF_6A610_CallPreparation BF_prepare_6a5f0(uint32_t eax,uint32_t ecx,uint32_t arg1)
{
 BF_6A610_CallPreparation out;
 const uint32_t index=UINT32_C(5)*eax+UINT32_C(25);
 out.incoming_ebx=ecx+UINT32_C(8);
 out.incoming_edi=ecx+UINT32_C(4)*index;
 out.referenced_stack_word=arg1;
 out.referenced_stack_arg_index=1;
 out.caller_ret_stack_bytes=4;
 out.callee_ret_stack_bytes=4;
 return out;
}
BF_6A610_CallPreparation BF_prepare_907a0(
 uint32_t eax,uint32_t ecx,uint32_t arg1,uint32_t arg2)
{
 BF_6A610_CallPreparation out;
 const uint32_t index=(UINT32_C(29)*eax+arg1)*UINT32_C(3);
 out.incoming_ebx=ecx+UINT32_C(8);
 out.incoming_edi=ecx+UINT32_C(0x62c)+UINT32_C(8)*index;
 out.referenced_stack_word=arg2;
 out.referenced_stack_arg_index=2;
 out.caller_ret_stack_bytes=8;
 out.callee_ret_stack_bytes=4;
 return out;
}
