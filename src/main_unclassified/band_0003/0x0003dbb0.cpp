/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96CBBD53C213CE76044888A3DBED92F5462E589BE888C1327BDB72145F1D8F79
 * Entry: 0x0003dbb0, Ghidra index: 463, label: FUN_0003dbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0015b7c0(void);
extern void FUN_0003d970(void);

undefined4 FUN_0003dbb0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x3f8) + 4 + *(int *)(unaff_ESI + 0x58) * 0xc);
  piVar2 = (int *)FUN_00023010(local_4,*(undefined4 *)(unaff_EDI + 4));
  if ((*piVar2 != *(int *)(iVar1 + 0xc)) &&
     (uVar3 = *piVar2 - *(int *)(iVar1 + 8) >> 2, -1 < (int)uVar3)) {
    *(undefined4 *)(unaff_EDI + 0x28) = param_1;
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x3f8) + 8 + *(int *)(unaff_ESI + 0x58) * 0xc);
    if ((*(int *)(iVar1 + 4) == 0) ||
       ((uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) <= uVar3)) {
      FUN_0015b7c0(iVar1);
    }
    *(undefined4 *)(unaff_EDI + 0x30) =
         *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) + 8);
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x3f8) + 8 + *(int *)(unaff_ESI + 0x58) * 0xc);
    if ((*(int *)(iVar1 + 4) == 0) ||
       ((uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) <= uVar3)) {
      FUN_0015b7c0(iVar1);
    }
    *(undefined4 *)(unaff_EDI + 0x2c) =
         *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) + 4);
    FUN_0003d970();
    return 1;
  }
  *(undefined4 *)(unaff_EDI + 0x28) = param_1;
  *(undefined4 *)(unaff_EDI + 0x30) = 0x3f800000;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0x33d6bf95;
  FUN_0003d970();
  return 0;
}
