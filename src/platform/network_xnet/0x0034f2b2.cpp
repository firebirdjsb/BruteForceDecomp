/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A812D0C32C08F75AECCC753222FD29367FF086A92BD6C4B231E4CA2E0267C87A
 * Entry: 0x0034f2b2, Ghidra index: 13034, label: FUN_0034f2b2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0034f2b2(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  
  KeRaiseIrqlToDpcLevel();
  iVar1 = FUN_00347b83(param_1);
  if (iVar1 == 0) {
    uVar6 = 0x2726;
    goto LAB_0034f461;
  }
  piVar2 = *(int **)(iVar1 + 0xf0);
  if ((param_5 & 0x10) == 0) {
    if (piVar2 == (int *)0x0) {
      uVar3 = ((uint)*(byte *)(in_ECX + 0x41) * 0xe + (uint)*(byte *)(in_ECX + 0xf)) * 4 + 0x40;
      piVar2 = (int *)ExAllocatePoolWithTag(uVar3,0x4754454e);
      if (piVar2 != (int *)0x0) {
        piVar7 = piVar2;
        for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)piVar7 = 0;
          piVar7 = (int *)((int)piVar7 + 1);
        }
      }
      if (piVar2 != (int *)0x0) {
        piVar7 = piVar2 + 4;
        piVar2[5] = (int)piVar7;
        *piVar7 = (int)piVar7;
        piVar2[6] = 0;
        piVar2[8] = -1;
        /* 0x34f369 stores a four-byte guest code address at object+0x24. */
        piVar2[9] = UINT32_C(0x0034f155);
        piVar2[10] = (uint)*(byte *)(in_ECX + 0x43) * 1000;
        /* 0x34f37d/0x34f382 load DWORD [0x38648c], then DWORD [EAX].
         * Preserve the original guest import-slot address instead of inventing
         * a host KeTickCount_exref object/type. Guest mapping is unverified. */
        piVar2[0xb] = *(int32_t *)(uintptr_t)
            *(uint32_t *)(uintptr_t)UINT32_C(0x0038648c);
        piVar2[0xd] = (int)(piVar2 + (uint)*(byte *)(in_ECX + 0x41) * 0xe + 0x10);
        piVar2[0xe] = (uint)*(byte *)(in_ECX + 0x41);
        iVar8 = ((uint)*(byte *)(in_ECX + 0xf) * 4 + 7 & 0xfffffff8) + 0x2b;
        /* 0x34f3af/0x34f3c8 push the same DWORD callback address.
         * ABI_UNVERIFIED: no host callback or helper prototype is inferred. */
        iVar4 = FUN_0034e23d(iVar8,UINT32_C(0x0034f165),piVar2,piVar2 + 2);
        if ((iVar4 != 0) &&
           (iVar4 = FUN_0034e23d(iVar8,UINT32_C(0x0034f165),piVar2,piVar2 + 3), iVar4 != 0)) {
          *(int **)(iVar1 + 0xf0) = piVar2;
          *piVar2 = iVar1;
          goto LAB_0034f3ea;
        }
        FUN_0034f178(piVar2);
      }
      uVar6 = 0x2747;
      goto LAB_0034f461;
    }
LAB_0034f3ea:
    if ((param_5 & 8) != 0) {
      uVar3 = param_4;
      if (param_4 < 0xfa1) {
        uVar3 = 4000;
      }
      if (uVar3 < 100000000) {
        uVar3 = 4000;
        if (4000 < param_4) {
          uVar3 = param_4;
        }
      }
      else {
        uVar3 = 100000000;
      }
      piVar2[10] = uVar3;
    }
    if ((param_5 & 4) != 0) {
      uVar3 = (uint)*(byte *)(in_ECX + 0xf) << 2;
      if (param_3 < uVar3) {
        uVar3 = param_3;
      }
      piVar2[0xc] = uVar3;
      puVar9 = (undefined4 *)piVar2[0xd];
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *param_2;
        param_2 = param_2 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    if ((param_5 & 3) != 0) {
      piVar2[1] = param_5 & 1;
    }
  }
  else {
    FUN_0034f178(piVar2);
    *(undefined4 *)(iVar1 + 0xf0) = 0;
  }
  uVar6 = 0;
LAB_0034f461:
  KfLowerIrql();
  return uVar6;
}
