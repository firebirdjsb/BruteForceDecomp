/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA91C5D4BC7985D5712BBAB44DF5487DFD43281B911BFEFF246A4E780AB40CC6
 * Entry: 0x001201b0, Ghidra index: 3642, label: FUN_001201b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001201b0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_EBX;
  int unaff_EDI;
  
  if (*(int **)(unaff_EDI + 0x684) != unaff_EBX) {
    FUN_0008f6a0();
  }
  if (unaff_EBX != (int *)0x0) {
    *(undefined4 *)(unaff_EDI + 0x694) = 0;
    *(undefined4 *)(unaff_EDI + 0x690) = 0;
    *(undefined4 *)(unaff_EDI + 0x68c) = 0;
    if (*(int *)(unaff_EBX[3] + 4) == 3) {
      iVar6 = (**(code **)(*unaff_EBX + 0x40))();
      iVar5 = unaff_EBX[0xfa];
      fVar1 = *(float *)(iVar5 + 0x40);
      fVar2 = *(float *)(iVar6 + 0x2c);
      fVar3 = *(float *)(iVar5 + 0x3c);
      fVar4 = *(float *)(iVar6 + 0x28);
      *(float *)(unaff_EDI + 0x68c) = *(float *)(iVar5 + 0x38) - *(float *)(iVar6 + 0x24);
      *(float *)(unaff_EDI + 0x690) = fVar3 - fVar4;
      *(float *)(unaff_EDI + 0x694) = fVar1 - fVar2;
    }
    if (*param_1 != 0) {
      *(int *)(unaff_EDI + 0x688) = *param_1;
    }
    *(undefined4 *)(unaff_EDI + 0x698) = 0xffffffff;
    if (*param_2 != 0) {
      uVar7 = FUN_00235d50(param_2);
      *(undefined4 *)(unaff_EDI + 0x698) = uVar7;
    }
  }
  return;
}
