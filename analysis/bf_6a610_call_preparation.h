#ifndef BF_6A610_CALL_PREPARATION_H
#define BF_6A610_CALL_PREPARATION_H
#include <stdint.h>
/* Original x86 register values immediately before call to 0x0006A610;
 * NOT a C-callable ABI or verified game implementation. */
typedef struct BF_6A610_CallPreparation {
 uint32_t incoming_ebx;
 uint32_t incoming_edi;
 uint32_t referenced_stack_word;
 uint8_t referenced_stack_arg_index;
 uint8_t caller_ret_stack_bytes;
 uint8_t callee_ret_stack_bytes;
} BF_6A610_CallPreparation;
BF_6A610_CallPreparation BF_prepare_6a5f0(
 uint32_t original_eax,uint32_t original_ecx,uint32_t original_stack_arg1);
BF_6A610_CallPreparation BF_prepare_907a0(
 uint32_t original_eax,uint32_t original_ecx,
 uint32_t original_stack_arg1,uint32_t original_stack_arg2);
#endif
