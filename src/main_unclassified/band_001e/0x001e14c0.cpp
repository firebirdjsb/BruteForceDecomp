/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD4BFB56537A61D125250F68534E489B2745BC63190C76BC851A78501F3A1102
 * Entry: 0x001e14c0, Ghidra index: 6733, label: FUN_001e14c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e14c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int local_4;
  
  FUN_001e2600(*(int *)(unaff_ESI + 4),*(int *)(unaff_ESI + 8),
               (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x1c);
  FUN_001e2430(&local_4,*(undefined4 *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8));
  iVar1 = *(int *)(unaff_ESI + 8);
  if (local_4 != iVar1) {
    uVar2 = FUN_001e2a80(iVar1,iVar1,local_4);
    FUN_000762d0();
    *(undefined4 *)(unaff_ESI + 8) = uVar2;
  }
  return;
}
