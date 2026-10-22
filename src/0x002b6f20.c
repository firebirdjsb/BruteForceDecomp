/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8513FFBD94473F5F22CA8A6F641648D332D23B1E3D36F2C3EB23C173B6A7103F
 * Entry: 0x002b6f20, Ghidra index: 9838, label: FUN_002b6f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6f20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *unaff_EBX;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  *unaff_EBX = *param_1;
  unaff_EBX[5] = param_1[5];
  unaff_EBX[10] = param_1[10];
  iVar7 = 1;
  puVar5 = unaff_EBX;
  puVar2 = unaff_EBX;
  do {
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 4;
    if (0 < iVar7) {
      puVar3 = puVar2;
      puVar4 = puVar5;
      iVar6 = iVar7;
      do {
        uVar1 = *(undefined4 *)(((int)param_1 - (int)unaff_EBX) + (int)puVar4);
        iVar6 = iVar6 + -1;
        *puVar4 = *(undefined4 *)(((int)param_1 - (int)unaff_EBX) + -0x10 + (int)(puVar3 + 4));
        *puVar3 = uVar1;
        puVar3 = puVar3 + 4;
        puVar4 = puVar4 + 1;
      } while (iVar6 != 0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  return;
}
