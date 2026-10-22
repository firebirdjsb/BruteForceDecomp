/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD910A26F65DC6921693A4DCC1C52A34C58746A1D9E9588D9262C9BC216B66EC
 * Entry: 0x000efcd0, Ghidra index: 2988, label: FUN_000efcd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
undefined4 FUN_000efcd0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_ESI;
  
  if (unaff_ESI == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*unaff_ESI + 4))();
  if (iVar2 != 3) {
    return 0;
  }
  puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
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
       iVar2 != 0)) goto LAB_000efd26;
  }
  puVar5 = &DAT_0046d064;
LAB_000efd26:
  *puVar3 = *puVar5;
  return 1;
}
