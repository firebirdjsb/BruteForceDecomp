/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 792A3801244AEECF0D4A50210C261D157AD71281C69A1305CC2AD7883BDCD6BB
 * Entry: 0x002c5420, Ghidra index: 10062, label: FUN_002c5420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002c5420(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  
  uVar8 = (uint)*(ushort *)(param_1 + 2);
  uVar7 = uVar8;
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + uVar7 * 4);
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
    fVar9 = (float10)(**(code **)(*piVar6 + 8))(iVar2);
    *(float *)(iVar2 + 0x58) = (float)fVar9;
    fVar9 = (float10)(**(code **)(*piVar6 + 4))(iVar2);
    *(float *)(iVar1 + 0x44) = (float)fVar9;
    if ((*(uint *)(iVar2 + 0x4c) & 0x300) == 0x100) {
      uVar8 = uVar8 - 1;
      FUN_002c4720(param_2);
    }
  }
  return uVar8;
}
