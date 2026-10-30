/* Guest32 allocator return and call-edge contract from the hash-pinned retail XBE.
 * 0x002EA01D: PUSH 1; PUSH [ESP+8]; CALL 0x00067CD0; POP ECX twice; RET.
 * 0x00067CD0: MOV EAX,[ESP+4]; PUSH EAX; CALL [0x003BC650];
 *             ADD ESP,4; RET. Both leave the imported EAX result untouched.
 *
 * The second PUSH 1 at the outer wrapper's entry is not used by 0x00067CD0:
 * this callee forwards only the first 32-bit stack word to the import. That
 * temporary guest stack word must NOT be confused with an import argument.
 *
 * Platform implementation of bf_xbox_guest_import_call1_u32 is intentionally
 * ABSENT. It must decode the Xbox guest import slot and preserve the guest
 * stack/register state; the external import's full behavior remains unknown.
 * This C++ syntax adapter must not be mistaken for native host allocation,
 * guest-pointer translation, a verified C++ object, or a linked game.
 */
#ifndef BF_002EA01D_ALLOCATOR_GUEST32_H
#define BF_002EA01D_ALLOCATOR_GUEST32_H
#include <stdint.h>
#define BF_XBOX_ALLOCATOR_IMPORT_SLOT UINT32_C(0x003bc650)
uint32_t bf_xbox_guest_import_call1_u32(uint32_t guest_import_slot_va,
                                         uint32_t guest_argument_0);
uint32_t FUN_00067cd0(uint32_t guest_size);
uint32_t FUN_002ea01d(uint32_t guest_size);
#endif
