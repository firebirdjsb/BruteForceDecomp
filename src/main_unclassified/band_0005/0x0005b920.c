/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6096C59C734A01A1AF557F7C5534D049374CBE80E0BD4DE98621C1CB7A369A9
 * Entry: 0x0005b920, Ghidra index: 925, label: FUN_0005b920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0005b920(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 4);
  uVar2 = 0;
  if (uVar1 == 0) {
LAB_0005b941:
    uVar2 = 0xffffffff;
  }
  else {
    if (uVar1 != 0) goto LAB_0005b931;
    iVar3 = 0;
    while (*(int *)(iVar3 + 4) != unaff_EDI) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) goto LAB_0005b941;
LAB_0005b931:
      iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4);
    }
  }
  return uVar2;
}
