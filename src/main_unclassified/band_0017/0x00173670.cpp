/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB2D3704B69D916BFBD5D8B80D9BB7BBFA7ED60980F9068C1C405F2967F22408
 * Entry: 0x00173670, Ghidra index: 4885, label: FUN_00173670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a3d0;
void FUN_00173670(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_LAB_0039a3d0;
  in_EAX[3] = 0;
  in_EAX[2] = 5;
  in_EAX[4] = 0x3f800000;
  in_EAX[5] = 0;
  *(undefined1 *)((int)in_EAX + 0x19) = 0;
  in_EAX[7] = 0x3f800000;
  in_EAX[8] = 0;
  in_EAX[9] = 0x3f800000;
  *(undefined1 *)(in_EAX + 10) = 0;
  *(undefined1 *)(in_EAX + 6) = 0;
  return;
}
