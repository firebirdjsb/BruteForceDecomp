/* 0x00058D40 original Xbox guest32 register/memory contract.
 * The original XBE has two stack args and RET 8. The second is moved
 * to ECX, while the allocator's result is copied from EAX into EDX
 * immediately before CALL 0x001AAA90. This callee reads ECX/EDX
 * at original 0x001AAAB1..0x001AAAB3.
 *
 * No implementation of the storage/call hooks is provided in the game:
 * they require a verified 32-bit guest memory and register dispatcher,
 * not a native host-pointer cast. Test-only mocks are in tools/.
 */
#ifndef BF_00058D40_GUEST_HANDOFF_H
#define BF_00058D40_GUEST_HANDOFF_H
#include <stdint.h>
void bf_00058d40_guest_write_u32(uint32_t guest_va,
                                  uint32_t guest_value);
void bf_00058d40_call_001aaa90(uint32_t incoming_ecx,
                                 uint32_t incoming_edx);
void FUN_00058d40(uint32_t guest_output_word_va,
                  uint32_t guest_second_stack_word);
#endif
