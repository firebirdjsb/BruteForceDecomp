/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9422BB797CE3005A26202FE4C5CBBA52BE54923E7CFF3CB9A633F1B514054B5
 * Entry: 0x00078780, Ghidra index: 1429, label: FUN_00078780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_002f254a(void);
extern void FUN_002f258a(void);
extern void FUN_0001f730(uint param_1,uint param_2);

int FUN_00078780(int param_1,int *param_2,uint param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint in_ECX;
  uint __n;
  void *__src;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if ((*(uint *)(param_1 + 0x14) < in_ECX) || (*(uint *)((int)param_2 + 0x14) < param_3)) {
    FUN_002f254a();
  }
  uVar1 = *(int *)(param_1 + 0x14) - in_ECX;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  uVar1 = *(int *)((int)param_2 + 0x14) - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (-param_4 - 1 <= *(int *)(param_1 + 0x14) - in_EAX) {
    FUN_002f258a();
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar6 = (uVar1 - in_EAX) + param_4;
  __n = (uVar1 - in_ECX) - in_EAX;
  if (uVar1 < uVar6) {
    if (uVar6 == 0xffffffff) {
      FUN_002f258a();
    }
    if (*(uint *)(param_1 + 0x18) < uVar6) {
      FUN_0001f730(uVar6,*(undefined4 *)(param_1 + 0x14));
    }
    else if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        puVar3 = (undefined1 *)(param_1 + 4);
      }
      else {
        puVar3 = *(undefined1 **)(param_1 + 4);
      }
      *puVar3 = 0;
    }
  }
  piVar7 = (int *)(param_1 + 4);
  if ((int *)param_1 == param_2) {
    if (in_EAX < param_4) {
      if (in_ECX < param_3) {
        if (param_3 < in_ECX + in_EAX) {
          piVar4 = piVar7;
          piVar2 = piVar7;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            piVar4 = (int *)*piVar7;
            piVar2 = (int *)*piVar7;
          }
          _memmove((void *)((int)piVar4 + in_ECX),(void *)((int)piVar2 + param_3),in_EAX);
          piVar4 = piVar7;
          piVar2 = piVar7;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            piVar4 = (int *)*piVar7;
            piVar2 = (int *)*piVar7;
          }
          _memmove((void *)((int)piVar4 + param_4 + in_ECX),(void *)((int)piVar2 + in_EAX + in_ECX),
                   __n);
          piVar2 = piVar7;
          param_2 = piVar7;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            piVar2 = (int *)*piVar7;
            param_2 = (int *)*piVar7;
          }
          __n = param_4 - in_EAX;
          __src = (void *)((int)piVar2 + param_4 + param_3);
          puVar3 = (undefined1 *)((int)param_2 + in_EAX + in_ECX);
        }
        else {
          piVar4 = piVar7;
          piVar2 = piVar7;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            piVar4 = (int *)*piVar7;
            piVar2 = (int *)*piVar7;
          }
          _memmove((void *)((int)piVar4 + param_4 + in_ECX),(void *)((int)piVar2 + in_EAX + in_ECX),
                   __n);
          piVar4 = piVar7;
          piVar2 = piVar7;
          if (0xf < *(uint *)(param_1 + 0x18)) {
            piVar4 = (int *)*piVar7;
            piVar2 = (int *)*piVar7;
          }
          __src = (void *)((int)piVar2 + param_4 + (param_3 - in_EAX));
          puVar3 = (undefined1 *)((int)piVar4 + in_ECX);
          __n = param_4;
        }
      }
      else {
        piVar4 = piVar7;
        piVar2 = piVar7;
        if (0xf < *(uint *)(param_1 + 0x18)) {
          piVar4 = (int *)*piVar7;
          piVar2 = (int *)*piVar7;
        }
        _memmove((void *)((int)piVar4 + param_4 + in_ECX),(void *)((int)piVar2 + in_EAX + in_ECX),
                 __n);
        if (*(uint *)(param_1 + 0x18) < 0x10) {
          __src = (void *)((int)piVar7 + param_3);
          puVar3 = (undefined1 *)((int)piVar7 + in_ECX);
          __n = param_4;
        }
        else {
          __src = (void *)(*piVar7 + param_3);
          puVar3 = (undefined1 *)(*piVar7 + in_ECX);
          __n = param_4;
        }
      }
    }
    else {
      piVar4 = piVar7;
      piVar2 = piVar7;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        piVar4 = (int *)*piVar7;
        piVar2 = (int *)*piVar7;
      }
      _memmove((void *)((int)piVar4 + in_ECX),(void *)((int)piVar2 + param_3),param_4);
      piVar4 = piVar7;
      piVar2 = piVar7;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        piVar4 = (int *)*piVar7;
        piVar2 = (int *)*piVar7;
      }
      __src = (void *)((int)piVar2 + in_EAX + in_ECX);
      puVar3 = (undefined1 *)((int)piVar4 + param_4 + in_ECX);
    }
    _memmove(puVar3,__src,__n);
  }
  else {
    piVar4 = piVar7;
    piVar2 = piVar7;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      piVar4 = (int *)*piVar7;
      piVar2 = (int *)*piVar7;
    }
    _memmove((void *)((int)piVar4 + param_4 + in_ECX),(void *)((int)piVar2 + in_EAX + in_ECX),__n);
    if (*(uint *)((int)param_2 + 0x18) < 0x10) {
      iVar5 = (int)param_2 + 4;
    }
    else {
      iVar5 = *(int *)((int)param_2 + 4);
    }
    piVar2 = piVar7;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      piVar2 = (int *)*piVar7;
    }
    puVar8 = (undefined4 *)(param_3 + iVar5);
    puVar9 = (undefined4 *)(in_ECX + (int)piVar2);
    for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  if (uVar6 <= *(uint *)(param_1 + 0x14)) {
    if (uVar6 == 0xffffffff) {
      FUN_002f258a();
    }
    if (*(uint *)(param_1 + 0x18) < uVar6) {
      FUN_0001f730(uVar6,*(undefined4 *)(param_1 + 0x14));
    }
    else if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        piVar7 = (int *)*piVar7;
      }
      *(undefined1 *)piVar7 = 0;
      return param_1;
    }
    if (uVar6 == 0) {
      return param_1;
    }
  }
  *(uint *)(param_1 + 0x14) = uVar6;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    piVar7 = (int *)*piVar7;
  }
  *(undefined1 *)((int)piVar7 + uVar6) = 0;
  return param_1;
}
