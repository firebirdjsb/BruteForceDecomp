/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FD8A255FF203B398CDBBFACB25365159B2434B850AD794BDCA6C291E73E7130
 * Entry: 0x002d5220, Ghidra index: 10219, label: FUN_002d5220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d5220(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  float10 fVar8;
  
  uVar7 = (uint)*(ushort *)(param_2 + 2);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    iVar1 = *(int *)(*(int *)(param_2 + 4) + uVar7 * 4);
    if (param_3 != iVar1) {
      FUN_002d29f0(iVar1);
      iVar2 = *(int *)(iVar1 + 0x40);
      iVar3 = *(int *)(iVar1 + 0x10);
      uVar4 = *(undefined4 *)(iVar1 + 0x24);
      FUN_002d4e50(iVar2 + 0x40);
      iVar5 = *(int *)(iVar3 + 0x14);
      *(int *)(iVar2 + 0x30) = iVar3;
      *(undefined4 *)(iVar2 + 0x34) = uVar4;
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar1 + 0x18);
      *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar1 + 0x2c);
      piVar6 = *(int **)(iVar5 + 0xa4);
      fVar8 = (float10)(**(code **)(*piVar6 + 8))(iVar2);
      *(float *)(iVar2 + 0x58) = (float)fVar8;
      fVar8 = (float10)(**(code **)(*piVar6 + 4))(iVar2);
      *(float *)(iVar1 + 0x44) = (float)fVar8;
      if ((*(uint *)(iVar2 + 0x4c) & 0x300) == 0x100) {
        FUN_002c4720(*(undefined4 *)(param_1 + 0x2c));
      }
    }
  }
  return;
}
