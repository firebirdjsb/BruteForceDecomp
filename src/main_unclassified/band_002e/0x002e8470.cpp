/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B05C981159E3CCA27974FEB5849BF55DCA8ADD2A119826986C2A0F16C768A802
 * Entry: 0x002e8470, Ghidra index: 10535, label: FUN_002e8470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e89c;
extern uint32_t DAT_0040f0a0;
extern uint32_t DAT_0040f0a4;
int FUN_002e8470(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  
  FUN_002e7e50();
  *(code **)(in_ECX + 0x44) = param_1;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar1 < 0) {
    return iVar1;
  }
  *(code **)(in_ECX + 0x3c) = param_1;
  *(undefined4 *)(in_ECX + 0x38) = param_2;
  *(undefined4 *)(in_ECX + 8) = param_4;
  *(int *)(in_ECX + 0x20) = param_5;
  iVar1 = FUN_002e8ba0(DAT_0040f0a4,param_3);
  if (iVar1 < 0) {
    return iVar1;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(*(int *)(in_ECX + 8) << 2);
  *(undefined4 **)(in_ECX + 0x10) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  for (uVar6 = *(uint *)(in_ECX + 8) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  uVar6 = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    do {
      uVar3 = (*param_1)();
      *(undefined4 *)(*(int *)(in_ECX + 0x10) + uVar6 * 4) = uVar3;
      if (*(int *)(*(int *)(in_ECX + 0x10) + uVar6 * 4) == 0) goto LAB_002e854e;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(in_ECX + 8));
  }
  iVar7 = *(int *)(in_ECX + 8) * 4;
  piVar4 = (int *)FUN_002ea01d(*(int *)(in_ECX + 8) * 0x70 + 4);
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar4 + 1;
    *piVar4 = iVar7;
    FUN_0001fe40(piVar5,0x1c,iVar7,(uintptr_t)0x002e9ca0U);
  }
  *(int **)(in_ECX + 0x14) = piVar5;
  if (piVar5 != (int *)0x0) {
    if (param_5 != 0) {
      uVar3 = FUN_002ea01d(*(int *)(in_ECX + 8) << 2);
      *(undefined4 *)(in_ECX + 0x18) = uVar3;
      iVar7 = FUN_002ea01d(*(int *)(in_ECX + 8) << 2);
      *(int *)(in_ECX + 0x1c) = iVar7;
      if ((*(undefined4 **)(in_ECX + 0x18) == (undefined4 *)0x0) || (iVar7 == 0)) goto LAB_002e854e;
      puVar2 = *(undefined4 **)(in_ECX + 0x18);
      for (uVar6 = *(uint *)(in_ECX + 8) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar2 = *(undefined4 **)(in_ECX + 0x1c);
      for (uVar6 = *(uint *)(in_ECX + 8) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      uVar6 = 0;
      if (*(int *)(in_ECX + 8) != 0) {
        do {
          uVar3 = FUN_002ea01d(param_5);
          *(undefined4 *)(*(int *)(in_ECX + 0x18) + uVar6 * 4) = uVar3;
          iVar7 = *(int *)(*(int *)(in_ECX + 0x18) + uVar6 * 4);
          if (iVar7 == 0) goto LAB_002e854e;
          *(int *)(*(int *)(in_ECX + 0x1c) + uVar6 * 4) = iVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(in_ECX + 8));
      }
    }
    iVar7 = FUN_002ea01d(*(int *)(in_ECX + 8) * 4 + 0x10);
    *(int *)(in_ECX + 0x24) = iVar7;
    if (iVar7 != 0) {
      uVar6 = 1;
      if (1 < *(int *)(in_ECX + 8) + 4U) {
        do {
          *(undefined4 *)(*(int *)(in_ECX + 0x24) + uVar6 * 4) = 0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(int *)(in_ECX + 8) + 4U);
      }
      **(undefined4 **)(in_ECX + 0x24) = 0xfffffffb;
      DAT_0040e89c = (undefined4 *)FUN_002ea01d(DAT_0040f0a0 << 4);
      if (DAT_0040e89c != (undefined4 *)0x0) {
        puVar2 = DAT_0040e89c;
        for (iVar7 = (DAT_0040f0a0 & 0xfffffff) << 2; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
        *(undefined4 *)(in_ECX + 0xc) = 1;
        return iVar1;
      }
    }
  }
LAB_002e854e:
  FUN_002e7e50();
  return -0x7ff8fff2;
}
