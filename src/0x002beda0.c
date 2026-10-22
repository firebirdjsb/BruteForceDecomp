/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E001CE13187F09CD55EE3D7111DD7EAAFA42FA9CE33C000579950D6B9D332018
 * Entry: 0x002beda0, Ghidra index: 9984, label: FUN_002beda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002beda0(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_EAX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar4 = *(uint *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0xc);
  uVar8 = param_2;
  while( true ) {
    uVar8 = uVar4 & uVar8;
    iVar1 = iVar5 + uVar8 * 0xc;
    if (((*(uint *)(iVar5 + uVar8 * 0xc) | 0x80000000) == param_2) &&
       (*(int *)(iVar1 + 4) == in_EAX)) break;
    uVar8 = uVar8 + 1;
  }
  uVar6 = *(undefined4 *)(iVar1 + 8);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  uVar7 = uVar4;
  if (*(int *)(iVar5 + 4 + uVar4 * 0xc) != 0) {
    uVar7 = *(uint *)(iVar5 + uVar4 * 0xc) & uVar4;
  }
  uVar9 = uVar8 + 1 & uVar4;
  puVar2 = (uint *)(iVar5 + uVar9 * 0xc);
  uVar10 = puVar2[1];
  while (uVar10 != 0) {
    uVar10 = *puVar2 & uVar4;
    if ((int)uVar8 < (int)uVar9) {
      if ((((int)uVar7 <= (int)uVar10) && ((uVar10 != uVar7 || ((int)uVar9 < (int)uVar10)))) ||
         ((int)uVar10 <= (int)uVar8)) {
LAB_002bee38:
        puVar3 = (uint *)(*(int *)(param_1 + 0xc) + uVar8 * 0xc);
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        uVar8 = uVar9;
      }
    }
    else {
      if (uVar8 != uVar4) break;
      if ((int)uVar7 <= (int)uVar10) goto LAB_002bee38;
    }
    uVar4 = *(uint *)(param_1 + 4);
    uVar9 = uVar9 + 1 & uVar4;
    puVar2 = (uint *)(*(int *)(param_1 + 0xc) + uVar9 * 0xc);
    uVar10 = puVar2[1];
  }
  *(undefined4 *)(uVar8 * 0xc + 4 + *(int *)(param_1 + 0xc)) = 0;
  *(undefined4 *)(uVar8 * 0xc + *(int *)(param_1 + 0xc)) = 0;
  return uVar6;
}
