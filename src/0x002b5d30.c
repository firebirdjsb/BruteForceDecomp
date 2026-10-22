/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD2BA917025D95B674B7E10E7E5828C8236E992A7603E5708B0D3A43AB9D6FCB
 * Entry: 0x002b5d30, Ghidra index: 9811, label: FUN_002b5d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e810;
extern uint32_t PTR_FUN_0038e818;
extern uint32_t PTR_FUN_0038e83c;
int * FUN_002b5d30(int *param_1,int param_2,int *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[3] = 0;
  FUN_002be8e0();
  param_1[5] = (int)&PTR_FUN_0038e810;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  param_1[10] = 0;
  *param_1 = param_2;
  if (*param_3 == 0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_002ea01d(0x1c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_002be8e0();
      *puVar3 = &PTR_FUN_0038e818;
      *(undefined2 *)(puVar3 + 4) = 0;
      *(undefined2 *)((int)puVar3 + 0x12) = 0;
      *(undefined2 *)(puVar3 + 6) = 1;
      puVar3[5] = 0;
    }
    param_1[0xc] = (int)puVar3;
    iVar4 = FUN_002ea01d(0x14);
    if (iVar4 == 0) {
      param_1[0xd] = 0;
    }
    else {
      iVar4 = FUN_002bec00();
      param_1[0xd] = iVar4;
    }
  }
  if (param_3[1] == 0) {
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_002ea01d(0x1c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_002be8e0();
      *puVar3 = &PTR_FUN_0038e83c;
      *(undefined2 *)(puVar3 + 4) = 0;
      *(undefined2 *)((int)puVar3 + 0x12) = 0;
      *(undefined2 *)(puVar3 + 6) = 1;
      puVar3[5] = 0;
    }
    param_1[0xf] = (int)puVar3;
    iVar4 = FUN_002ea01d(0x14);
    if (iVar4 == 0) {
      param_1[0xe] = 0;
    }
    else {
      iVar4 = FUN_002bec00();
      param_1[0xe] = iVar4;
    }
  }
  if ((param_3[2] == 0) && (*(char *)(*param_1 + 0x70) == '\x10')) {
    *(undefined1 *)(*param_1 + 0x70) = 9;
    FUN_002bfdd0(*param_1);
  }
  param_1[1] = param_3[3];
  for (iVar4 = *(int *)(*param_1 + 0x20); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    iVar6 = *(short *)(iVar4 + 0x18) + iVar4;
    *(uint *)(iVar6 + 0x14) =
         *(uint *)(*(short *)(iVar4 + 0x18) + 0x14 + iVar4) & 0xffffdfff | 0x1000;
    FUN_002b5b10(iVar6);
    *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xfffff7ff | 0x400;
  }
  for (iVar4 = *(int *)(*param_1 + 0x1c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    iVar6 = (int)*(short *)(iVar4 + 0x18);
    fVar1 = *(float *)(iVar6 + 0x54 + iVar4);
    uVar5 = *(uint *)(iVar6 + 0x14 + iVar4);
    iVar6 = iVar6 + iVar4;
    *(uint *)(iVar6 + 0x14) = uVar5 & 0xffffdfff | 0x1000;
    if (0.0 <= fVar1) {
      uVar5 = uVar5 & 0xffffd3ff | 0x1000;
    }
    else {
      FUN_002b5b10(iVar6);
      uVar5 = *(uint *)(iVar6 + 0x14) & 0xfffff7ff | 0x400;
    }
    *(uint *)(iVar6 + 0x14) = uVar5;
  }
  puVar3 = *(undefined4 **)(*param_1 + 0x60);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return param_1;
    }
    puVar2 = (undefined4 *)puVar3[3];
    puVar3 = (undefined4 *)*puVar3;
    if (puVar2 == (undefined4 *)0x0) break;
    iVar4 = (**(code **)*puVar2)();
    if (iVar4 == 0) {
      uVar5 = *(uint *)(*(short *)(puVar2 + 6) + 0x14 + (int)puVar2);
      if ((uVar5 & 0x3000) == 0) {
        *(uint *)((int)puVar2 + *(short *)(puVar2 + 6) + 0x14) = uVar5 & 0xffffdfff | 0x1000;
      }
    }
  }
  return param_1;
}
