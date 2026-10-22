/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2021377F1D261DBBB2CFC9374EFDDA1E6292515390FE5EB7B513005BEA4FB20
 * Entry: 0x00022bc0, Ghidra index: 201, label: FUN_00022bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00022bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if ((*(byte *)((int)unaff_ESI + 0x27) & 1) != 0) {
    iVar5 = unaff_ESI[0xc];
    iVar1 = unaff_ESI[0xb];
    iVar2 = unaff_ESI[10];
    unaff_EDI[1] = iVar1;
    *unaff_EDI = iVar2;
    unaff_EDI[2] = iVar5;
    *param_1 = unaff_ESI[0xd];
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  uVar3 = (**(code **)(*unaff_ESI + 0xac))();
  if ((char)uVar3 != '\0') {
    (**(code **)(*unaff_ESI + 0x40))();
    piVar4 = (int *)FUN_00039510();
    iVar5 = piVar4[2];
    iVar1 = piVar4[1];
    *unaff_EDI = *piVar4;
    unaff_EDI[1] = iVar1;
    unaff_EDI[2] = iVar5;
    iVar5 = *(int *)(unaff_ESI[3] + 4);
    if (((iVar5 == 2) || (iVar5 == 0x1a)) || (iVar5 == 0x1f)) {
      iVar5 = unaff_EDI[2];
      iVar1 = unaff_EDI[1];
      unaff_ESI[10] = *unaff_EDI;
      unaff_ESI[0xb] = iVar1;
      unaff_ESI[0xc] = iVar5;
      iVar5 = *param_1;
      unaff_ESI[0xd] = iVar5;
      *(byte *)((int)unaff_ESI + 0x27) = *(byte *)((int)unaff_ESI + 0x27) | 1;
    }
    return CONCAT31((int3)((uint)iVar5 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}
