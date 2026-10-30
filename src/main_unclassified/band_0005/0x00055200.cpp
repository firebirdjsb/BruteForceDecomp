/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FABD8772582D701CD0F1F52B570F7847D53E9D3F2ADF7F78B682956285935F8
 * Entry: 0x00055200, Ghidra index: 805, label: FUN_00055200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00055aa0(void);
extern undefined4 FUN_00022e20(void);

undefined4 FUN_00055200(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_EBX;
  int unaff_EDI;
  
  iVar5 = (**(code **)(**(int **)(unaff_EDI + 8) + 0xf4))();
  if (*(char *)(unaff_EDI + 0xd) != '\0') {
    if (unaff_EBX != (int *)0x0) {
      iVar6 = (**(code **)(**(int **)(unaff_EDI + 8) + 0x40))();
      iVar7 = (**(code **)(*unaff_EBX + 0x40))();
      fVar1 = *(float *)(iVar7 + 0x2c) - *(float *)(iVar6 + 0x2c);
      fVar2 = *(float *)(iVar7 + 0x28) - *(float *)(iVar6 + 0x28);
      fVar3 = *(float *)(iVar7 + 0x24) - *(float *)(iVar6 + 0x24);
      if (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 < 784.0) {
        return 1;
      }
    }
    if ((*(int *)(*(int *)(iVar5 + 0x358) + 8) != 0) || (*(int *)(iVar5 + 0x58) == 7)) {
      return 1;
    }
    if (((*(byte *)(*(int *)(*(int *)(unaff_EDI + 8) + 8) + 0xc50) & 0x10) == 0) &&
       (*(int *)(iVar5 + 0x42c) != 0)) {
      FUN_00055aa0();
      cVar4 = FUN_00022e20();
      if (cVar4 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}
