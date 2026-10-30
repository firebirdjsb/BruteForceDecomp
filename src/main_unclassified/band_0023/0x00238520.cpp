/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35F74817B45B7B3CA1E03B6A11AE6BF99A83E4C95B47326079ADFE76AC4AF71A
 * Entry: 0x00238520, Ghidra index: 7875, label: FUN_00238520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394140;
void FUN_00238520(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  FUN_00238960(local_4,*(undefined4 *)(unaff_EDI + 0x28),0);
  puVar2 = *(undefined4 **)(unaff_EDI + 0x54);
  if (puVar2 != *(undefined4 **)(unaff_EDI + 0x50)) {
    do {
      iVar1 = puVar2[1];
      (**(code **)*puVar2)(0);
      *(undefined4 *)(iVar1 + 4) = 0;
      puVar2 = (undefined4 *)((int)puVar2 + *(int *)(iVar1 + 8));
    } while (puVar2 != *(undefined4 **)(unaff_EDI + 0x50));
  }
  iVar1 = *(int *)(unaff_EDI + 0x50);
  puVar2 = (undefined4 *)(iVar1 + -0x14);
  *(undefined4 **)(unaff_EDI + 0x54) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *(int *)(iVar1 + -0x10) = unaff_EDI + 0x34;
    *(undefined4 *)(iVar1 + -0xc) = 0;
    *puVar2 = &PTR_FUN_00394140;
    *(undefined4 *)(iVar1 + -4) = 0;
    *(undefined4 *)(iVar1 + -8) = 2;
    *(undefined4 **)(unaff_EDI + 0x38) = puVar2;
    return;
  }
  *(undefined4 *)(unaff_EDI + 0x38) = 0;
  return;
}
