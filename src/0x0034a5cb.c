/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD1351CCE8DB397AFC8EC66431A2C7EDEBD6D4DF9BAC6AE6913D81650A70E83E
 * Entry: 0x0034a5cb, Ghidra index: 12933, label: FUN_0034a5cb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034a5cb(int param_1)

{
  undefined1 uVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int local_d8 [48];
  undefined1 local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  local_18 = KeRaiseIrqlToDpcLevel();
  uVar4 = 0;
  if ((param_1 == 0) || (*(int *)(in_ECX + 0xae4) != 6)) {
LAB_0034a716:
    KfLowerIrql();
    return uVar4;
  }
  *(int *)(in_ECX + 0xae4) = 7;
  piVar6 = local_d8;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_10 = 0;
  piVar6 = local_d8;
  uVar3 = 0;
  do {
    local_8 = 0;
    local_14 = (int *)(in_ECX + 0xaf0);
    while( true ) {
      if ((int *)(in_ECX + 0xbb0) <= local_14) goto LAB_0034a670;
      if ((*local_14 == *(int *)(param_1 + uVar3 * 8)) &&
         (local_14[1] == *(int *)(param_1 + 4 + uVar3 * 8))) break;
      local_14 = local_14 + 0xc;
      local_8 = local_8 + 1;
    }
    uVar1 = *(undefined1 *)(in_ECX + 0xbb0 + local_8);
    piVar5 = local_14;
    local_c = piVar6;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    *(undefined1 *)((int)&local_10 + uVar3) = uVar1;
    piVar5 = local_14;
    for (iVar2 = 0xc; piVar6 = local_c, iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
LAB_0034a670:
    iVar2 = *(int *)(param_1 + 4 + uVar3 * 8);
    *piVar6 = *(int *)(param_1 + uVar3 * 8);
    piVar6[1] = iVar2;
    uVar3 = uVar3 + 1;
    piVar6 = piVar6 + 0xc;
    local_c = piVar6;
    if (3 < uVar3) {
      for (uVar3 = in_ECX + 0xaf0; uVar3 < in_ECX + 0xbb0U; uVar3 = uVar3 + 0x30) {
        if (*(int *)(uVar3 + 0x18) != 0) {
          ObfDereferenceObject();
        }
      }
      *(undefined4 *)(in_ECX + 0xbb0) = local_10;
      uVar3 = (uint)*(byte *)(in_ECX + 0xe);
      piVar6 = local_d8;
      piVar5 = (int *)(in_ECX + 0xaf0);
      for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar5 = piVar5 + 1;
      }
      pbVar7 = *(byte **)(in_ECX + 0xac4);
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        if (((*pbVar7 & 4) != 0) && (2 < pbVar7[2])) {
          if (pbVar7[2] == 3) {
            FUN_0034964a(pbVar7,0);
            pbVar7[2] = 2;
            FUN_0034a3bd(pbVar7);
          }
          else {
            FUN_00349552(pbVar7);
          }
        }
        pbVar7 = pbVar7 + 0x130;
      }
      FUN_0034886e();
      uVar4 = 1;
      goto LAB_0034a716;
    }
  } while( true );
}
