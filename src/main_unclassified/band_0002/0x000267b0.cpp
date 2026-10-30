/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A15F8871D6D0F22B35AB8CC406349052867A64FCCD69DAE08FFAA6C069D73FB
 * Entry: 0x000267b0, Ghidra index: 265, label: FUN_000267b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00023420(void);

uint FUN_000267b0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x10);
  iVar2 = *(int *)(unaff_EDI + 4);
  uVar4 = iVar1 * 3;
  if ((((*(int *)(iVar2 + 0x14 + iVar1 * 0x18) != 0) && (-1 < (int)(iVar1 + 1U))) && (iVar2 != 0))
     && ((iVar5 = *(int *)(unaff_EDI + 8) - iVar2, uVar4 = iVar5 * 0x2aaaaaab,
         iVar1 + 1U < (uint)(iVar5 / 0x18) &&
         (uVar4 = 0, *(int *)(iVar2 + 0x2c + iVar1 * 0x18) != 0)))) {
    piVar3 = (int *)FUN_00023420();
    uVar4 = (**(code **)(*piVar3 + 0x3c))();
    if (uVar4 == 0x1c) {
      *(uint *)(param_1 + 0x3c4) = *(uint *)(param_1 + 0x3c4) | 0x1000;
      uVar4 = param_1;
    }
  }
  return uVar4 & 0xffffff00;
}
