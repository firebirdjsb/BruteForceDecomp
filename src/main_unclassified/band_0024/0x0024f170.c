/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1A010C6A7020F69FA21C09FC5D8C3955FC841E6F35EA79E280445E2207BCB68
 * Entry: 0x0024f170, Ghidra index: 8312, label: FUN_0024f170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024f170(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_ESI;
  
  iVar1 = FUN_0024fcc0();
  if (iVar1 != *(int *)(unaff_ESI + 4)) {
    if (*(uint *)(iVar1 + 0x24) < 0x10) {
      iVar2 = iVar1 + 0x10;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x10);
    }
    iVar2 = FUN_000e0b20(0,iVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar2) {
      *unaff_EBX = iVar1;
      return;
    }
  }
  *unaff_EBX = *(int *)(unaff_ESI + 4);
  return;
}
