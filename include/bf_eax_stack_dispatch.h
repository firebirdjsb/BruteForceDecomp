#ifndef BF_EAX_STACK_DISPATCH_H
#define BF_EAX_STACK_DISPATCH_H
#include <stdint.h>
#include <stddef.h>
/* Original x86: EAX holds context, next stack word passed by value, ret 4. */
#if defined(__i386__) && (defined(__GNUC__) || defined(__clang__))
# define BF_X86_EAX_STACKCALL __attribute__((regparm(1),stdcall))
#elif defined(_M_IX86) && !defined(__clang__)
# error EAX-register calling requires an assembly bridge on this compiler
#else
# define BF_X86_EAX_STACKCALL /* host-only model, NOT original Xbox ABI */
#endif
/* Only a 0x18-byte observed window, not a claimed full game class. */
typedef struct BF_CounterState_563B0 {
    uint8_t unknown_00_07[8];
    uint32_t capacity_word_at_08;
    uint32_t rolling_index_at_0c;
    uint32_t remaining_at_10;
    uint32_t threshold_at_14;
} BF_CounterState_563B0;
_Static_assert(sizeof(BF_CounterState_563B0)==0x18, "observed state window");
_Static_assert(offsetof(BF_CounterState_563B0,threshold_at_14)==0x14, "x86 offset");
/* Callee's existing Ghidra-generated definition is ABI-INCONSISTENT. */
extern void BF_X86_EAX_STACKCALL FUN_000384a0(
    BF_CounterState_563B0 *incoming_eax, const uint32_t *stack_word_address);
void BF_X86_EAX_STACKCALL FUN_000563b0(
    BF_CounterState_563B0 *incoming_eax, uint32_t caller_stack_word);
#endif
