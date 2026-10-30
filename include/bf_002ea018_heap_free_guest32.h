/* Guest32 heap-free thunk call boundary from the pinned original Brute Force XBE.
 * Historical opcode evidence: scripts/verify_002b8c60_heap_xbe.py.
 *
 * 0x002EA018: JMP rel32 to 0x00067BF0
 * 0x00067BF0: JMP DWORD PTR [0x003BC654] (guest-memory indirect target)
 * initial DWORD [0x003BC654] = 0x00237EC0
 * 0x00237EC0: MOV EAX,[ESP+4]; PUSH EAX; PUSH 0;
 *             CALL 0x002F77F3; PUSH EAX; CALL 0x002F77DC; RET
 *
 * The initial target reads one guest DWORD at entry ESP+4, and ends in
 * plain RET (no callee stack cleanup). The target may change at runtime.
 * The original jump does not create an additional guest return address.
 *
 * UNVERIFIED: guest register preservation, full callee effects, platform
 * heap identity and any dynamically replaced target. The following is a
 * deliberately undefined guest-runtime adapter, not host function-pointer
 * dispatch, native free(), or a behavioral 1:1 implementation. Linking the
 * game must fail until a guest-register/stack-aware implementation exists.
 */
#ifndef BF_002EA018_HEAP_FREE_GUEST32_H
#define BF_002EA018_HEAP_FREE_GUEST32_H
#include <stdint.h>
#define BF_XBOX_HEAP_FREE_INDIRECT_SLOT UINT32_C(0x003bc654)
/* Indirect jump preserves the target's EAX result, including the
 * zero-extended HeapFree status at the initial 0x00237EC0 target.
 * A dynamically replaced target is still ABI_UNVERIFIED. */
uint32_t bf_xbox_guest_tailjump1_u32(uint32_t guest_target_slot_va,
                                     uint32_t guest_stack_word_0);
/* Distinct guest address entrypoints. Ghidra assigned both the same
 * thunk_FUN_00237ec0 label; C++ symbols must not collapse them. */
uint32_t thunk_FUN_00067bf0(uint32_t guest_allocation_va);
uint32_t thunk_FUN_00237ec0(uint32_t guest_allocation_va);
#endif
