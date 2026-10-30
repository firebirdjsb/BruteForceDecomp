/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8452B97E7074227A4F362ED6F9C3DD3933B6036CB30EBFE4876F1453CD86A6F
 * Entry: 0x00173720, Ghidra index: 4888, label: FUN_00173720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c804;
extern uint32_t DAT_0040c806;
extern uint32_t PTR_LAB_0039a3d0;
void FUN_00173720(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 1;
  *in_EAX = PTR_LAB_0039a3d0;
  *(undefined2 *)(in_EAX + 3) = DAT_0040c804;
  *(undefined1 *)((int)in_EAX + 0xe) = DAT_0040c806;
  in_EAX[0x23] = 0x41efc28f;
  in_EAX[0x24] = 0;
  return;
}
