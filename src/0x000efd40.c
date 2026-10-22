/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E5FF387FFFC1A772E58A503EA4CBC6C00E1E265C1C2C7EE8FC0CC06DC553A57
 * Entry: 0x000efd40, Ghidra index: 2989, label: FUN_000efd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
undefined4 FUN_000efd40(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_ESI;
  
  if (unaff_ESI == (int *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*unaff_ESI + 4))();
  if (iVar3 != 3) {
    return 0;
  }
  iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
  uVar1 = unaff_ESI[0x1c];
  if (-1 < (int)uVar1) {
    if (unaff_ESI[0x19] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = unaff_ESI[0x1a] - unaff_ESI[0x19] >> 2;
    }
    if ((uVar1 < uVar4) &&
       (iVar2 = *(int *)(unaff_ESI[0x19] + uVar1 * 4), puVar5 = (undefined4 *)(iVar2 + 0x24),
       iVar2 != 0)) goto LAB_000efd96;
  }
  puVar5 = &DAT_0046d064;
LAB_000efd96:
  *(undefined4 *)(iVar3 + 4) = *puVar5;
  return 1;
}
