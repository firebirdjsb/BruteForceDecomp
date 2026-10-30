/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7C3AF531BE8BB44825FB5C72B479D129F41A9FF09D5AEEA126003DD5AF56818
 * Entry: 0x001e8f50, Ghidra index: 6850, label: FUN_001e8f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396ca8;
void FUN_001e8f50(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_00396ca8;
  unaff_ESI[3] = 0;
  *(undefined2 *)((int)unaff_ESI + 6) = 0;
  *(undefined2 *)(unaff_ESI + 1) = 0;
  *(undefined2 *)((int)unaff_ESI + 10) = 0;
  *(undefined2 *)(unaff_ESI + 2) = 0;
  uVar1 = FUN_002ea01d(0x46);
  unaff_ESI[4] = uVar1;
  return;
}
