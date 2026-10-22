#ifndef BF_XNET_RECORD_X86_H
#define BF_XNET_RECORD_X86_H
#include <stdint.h>
#include <stddef.h>
#if defined(_MSC_VER) && defined(_M_IX86)
# define BF_X86_CONTEXTCALL __thiscall
# define BF_X86_STACKCALL __stdcall
#elif (defined(__GNUC__) || defined(__clang__)) && defined(__i386__)
# define BF_X86_CONTEXTCALL __attribute__((thiscall))
# define BF_X86_STACKCALL __attribute__((stdcall))
#else
# define BF_X86_CONTEXTCALL /* non-Xbox test model */
# define BF_X86_STACKCALL /* non-Xbox test model */
#endif
/* Original ECX context and six stack words, ret 24. */
void BF_X86_CONTEXTCALL FUN_00349366(void *incoming_ecx_context,
 const void *first_stack_arg, uint16_t header_tag,
 const void *first_bytes, uint32_t first_byte_count,
 const void *second_bytes, uint32_t second_byte_count);
/* Dependent call cleanup is established from original x86; full interface
 * and external symbol/link details still require investigation. */
uintptr_t BF_X86_STACKCALL FUN_0034cb5a(
 uint32_t first_constant,uint32_t second_constant,uint32_t allocation_count,
 uint32_t zero_1,uint32_t zero_2,uint32_t zero_3);
void BF_X86_CONTEXTCALL FUN_00347fe3(
 void *incoming_ecx_context,uintptr_t handle,
 uint32_t field_from_first_stack_arg, uint32_t byte_flag);
void *BF_X86_CONTEXTCALL FUN_0034c932(uintptr_t handle);
void BF_X86_CONTEXTCALL FUN_00348e95(
 void *incoming_ecx_context,uintptr_t handle,
 const void *first_stack_arg,uint32_t zero);
#endif
