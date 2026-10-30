/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62CF278945679CE3B56F44DAE7289D04D5A4390CFB5B37A48791BB7519D24127
 * Entry: 0x00237ee0, Ghidra index: 7861, label: FUN_00237ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x00237EE0: MOV EAX,[ESP+4]; PUSH EAX; PUSH 0;
 * CALL 0x002F77F3 (loads the heap handle, consumes no stack words);
 * PUSH EAX; CALL 0x002F648F; RET. The helper's EAX survives RET.
 * Stack words are prepared for 0x002F648F, not for 0x002F77F3.
 * The original full guest register/ESP ABI remains ABI_UNVERIFIED.
 * Recorded opcode window: scripts/verify_002b8c60_heap_xbe.py.
 */
extern undefined4 FUN_002f77f3(void);
extern int FUN_002f648f(undefined4 heap, undefined4 flags,
                        int guest_pointer_va);
int FUN_00237ee0(uint32_t guest_pointer_va)
{
  const uint32_t guest_heap = FUN_002f77f3();
  return FUN_002f648f(guest_heap, 0, (int32_t)guest_pointer_va);
}
