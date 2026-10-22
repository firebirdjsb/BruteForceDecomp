/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C4297B4CE0AA57E7CFC9324D3ED5C70AAA5B54AB5BFAE6C58093C5EBC68CFA6
 * Entry: 0x000f0a30, Ghidra index: 3006, label: FUN_000f0a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
undefined4 FUN_000f0a30(void)

{
  char cVar1;
  byte bVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int **ppiVar8;
  undefined4 uVar9;
  int *piVar10;
  bool bVar11;
  int *piStack_240;
  int *local_23c;
  int *local_238;
  int *local_234;
  int *local_230;
  int *local_22c;
  int *local_228;
  int *local_224;
  int *local_220;
  int iStack_21c;
  int *local_218;
  int iStack_214;
  byte bStack_210;
  int *piStack_20c;
  int *local_208;
  int *local_204 [129];
  
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x1e1bc50e)); piVar3 = piVar3 + 1) {
  }
  local_228 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 9)) {
    local_228 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x1cc47bf0)); piVar3 = piVar3 + 1) {
  }
  local_23c = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 1)) {
    local_23c = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x2c34470)); piVar3 = piVar3 + 1) {
  }
  local_218 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 1)) {
    local_218 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x2cec632)); piVar3 = piVar3 + 1) {
  }
  local_220 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 1)) {
    local_220 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != 0xd9b27ca)); piVar3 = piVar3 + 1) {
  }
  local_204[0] = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 1)) {
    local_204[0] = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x15ef9007)); piVar3 = piVar3 + 1) {
  }
  local_208 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 1)) {
    local_208 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0xd6f784d)); piVar3 = piVar3 + 1) {
  }
  local_238 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 7)) {
    local_238 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x192dbbae)); piVar3 = piVar3 + 1) {
  }
  local_234 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 7)) {
    local_234 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x1590ab80)); piVar3 = piVar3 + 1) {
  }
  local_230 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 7)) {
    local_230 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0xba885f3)); piVar3 = piVar3 + 1) {
  }
  local_224 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 7)) {
    local_224 = piVar10;
  }
  for (piVar3 = *(int **)(in_EAX + 0x74);
      (piVar10 = (int *)0x0, piVar3 != *(int **)(in_EAX + 0x78) &&
      (piVar10 = (int *)*piVar3, piVar10[9] != -0x21e1e44)); piVar3 = piVar3 + 1) {
  }
  local_22c = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 7)) {
    local_22c = piVar10;
  }
  if (local_228 == (int *)0x0) {
    return 0;
  }
  local_228 = (int *)FUN_001039b0();
  local_228 = (int *)*local_228;
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xd8))(&local_228);
  fVar5 = (float)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1c4))();
  if (iVar4 == 0) {
    return 0;
  }
  local_220 = (int *)fVar5;
  iVar6 = FUN_00103d40();
  piVar3 = piStack_240;
  if (iVar6 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(iVar6 + 4);
  }
  bVar11 = cVar1 == '\0';
  if (piStack_240 != (int *)0x0) {
    FUN_0010a850();
    bVar2 = *(byte *)(piVar3 + 10);
    if (bVar11 != (bool)(bVar2 >> 2 & 1)) {
      *(byte *)(piVar3 + 10) = (bVar11 << 2 ^ bVar2) & 4 ^ bVar2;
      (**(code **)(*piVar3 + 0x28))();
    }
  }
  if (iStack_21c != 0) {
    if (fVar5 == 0.0) {
      piVar3 = *(int **)(iVar4 + 100);
      if (((piVar3 != (int *)0x0) && (0 < piVar3[1])) && (0 < *piVar3)) {
        FUN_000ef180();
        piStack_240 = (int *)0x1512a125;
        uVar7 = FUN_001e97c0(*piVar3,piVar3[1]);
        FUN_002ea9a9(local_204,0x100,uVar7);
        FUN_0010a7d0();
        goto LAB_000f0e49;
      }
    }
    else {
      piStack_240 = (int *)0xe9251f1c;
      uVar7 = FUN_001e97c0(*(undefined4 *)(iVar4 + 0x14));
      FUN_002ea9a9(local_204,0x100,uVar7);
      FUN_0010a7d0();
    }
    FUN_000ef180();
  }
LAB_000f0e49:
  if (local_224 != (int *)0x0) {
    piStack_240 = (int *)0xfa5634c8;
    uVar7 = FUN_001e97c0();
    uVar7 = FUN_001e97c0(uVar7);
    FUN_002ea9a9(local_204,0x100,uVar7);
    piVar3 = local_224;
    FUN_0010a7d0();
    bVar2 = *(byte *)(piVar3 + 10);
    if (bVar11 != (bool)(bVar2 >> 2 & 1)) {
      *(byte *)(piVar3 + 10) = (bVar11 << 2 ^ bVar2) & 4 ^ bVar2;
      (**(code **)(*piVar3 + 0x28))();
    }
  }
  piVar3 = local_220;
  if (local_220 == (int *)0x0) {
    piStack_240 = (int *)0xffffffff;
  }
  else {
    piStack_240 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x74))
                                   ((int)local_220 + 0x4c,iVar4);
  }
  local_224 = (int *)0x0;
  ppiVar8 = &piStack_240;
  if ((int)piStack_240 < 1) {
    ppiVar8 = &local_224;
  }
  piVar10 = *ppiVar8;
  local_218 = (int *)0x0;
  iStack_214 = 0;
  bStack_210 = 0;
  cVar1 = '\0';
  if ((piVar3 != (int *)0x0) && (*(int *)(iVar4 + 0x48) != 0)) {
    cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1dc))(*(int *)(iVar4 + 0x48),&local_218);
  }
  if (local_208 == (int *)0x0) goto LAB_000f1030;
  if (piVar3 == (int *)0x0) {
    if ((*(int *)(iVar4 + 100) == 0) || (*(int *)(*(int *)(iVar4 + 100) + 8) == DAT_0046d064)) {
      FUN_000ef180();
    }
    else {
      FUN_000ef180();
      FUN_0010a850();
    }
    goto LAB_000f1030;
  }
  piStack_240 = (int *)0x15a70377;
  uVar7 = FUN_001e97c0();
  if ((bVar11) && (cVar1 != '\0')) {
    if ((int)piVar10 < 1) {
      if ((bStack_210 & 7) == 0) {
        piStack_240 = (int *)0xf2c845f8;
        uVar9 = FUN_001e97c0();
      }
      else {
        piStack_240 = (int *)0x353c137;
        uVar9 = FUN_001e97c0();
      }
      goto LAB_000f0fde;
    }
    piStack_240 = (int *)0xe707e3e5;
    uVar7 = FUN_001e97c0();
    FUN_002ea9a9(local_204,0x100,uVar7);
  }
  else {
    piStack_240 = (int *)0xf3ae1eda;
    uVar9 = FUN_001e97c0();
LAB_000f0fde:
    FUN_002ea9a9(local_204,0x100,uVar7,uVar9);
  }
  FUN_000ef180();
  FUN_0010a7d0();
LAB_000f1030:
  if (piStack_20c != (int *)0x0) {
    if ((((local_220 == (int *)0x0) || (!bVar11)) || (cVar1 == '\0')) ||
       (*(int *)((int)local_220 + 0x48) <= *(int *)(iVar4 + 0x14))) {
      if ((*(byte *)(piStack_20c + 10) & 4) != 0) {
        *(byte *)(piStack_20c + 10) = *(byte *)(piStack_20c + 10) & 0xfb;
        (**(code **)(*piStack_20c + 0x28))();
      }
      FUN_0010a7d0();
    }
    else {
      local_220 = (int *)0x173ebcaf;
      uVar7 = FUN_001e97c0();
      iVar4 = 0;
      if (0 < iStack_214) {
        local_220 = (int *)(((float)(int)local_218 * 100.0) / (float)iStack_214);
        iVar4 = (int)(float)local_220;
      }
      FUN_002ea9a9(local_204,0x100,uVar7,local_218,iStack_214,iVar4);
      FUN_000ef180();
      FUN_0010a7d0();
    }
  }
  if (local_23c != (int *)0x0) {
    bVar2 = bStack_210 >> 3 & 1;
    local_23c = (int *)0xef0224c4;
    if (bVar2 != 0) {
      local_23c = (int *)0xe3fabe34;
    }
    if (cVar1 == '\0') {
      FUN_000ef180();
    }
    else if (bVar11) {
      if (((bStack_210 & 1) == 0) && (bVar2 == 0)) {
        local_23c = (int *)0xf7f17abc;
        FUN_000f09c0();
      }
      else {
        FUN_000f0950();
      }
    }
    else {
      local_23c = (int *)0xf7f17abc;
      FUN_000f09c0();
    }
  }
  if (local_238 != (int *)0x0) {
    bVar2 = bStack_210 >> 4 & 1;
    local_238 = (int *)0x12e4a006;
    if (bVar2 != 0) {
      local_238 = (int *)0x1e1c3af6;
    }
    if (cVar1 == '\0') {
      FUN_000ef180();
    }
    else if (bVar11) {
      if (((bStack_210 & 2) == 0) && (bVar2 == 0)) {
        local_238 = (int *)0x106fe748;
        FUN_000f09c0();
      }
      else {
        FUN_000f0950();
      }
    }
    else {
      local_238 = (int *)0x106fe748;
      FUN_000f09c0();
    }
  }
  if (local_234 != (int *)0x0) {
    bVar2 = bStack_210 >> 5 & 1;
    local_234 = (int *)0x1bdb97;
    if (bVar2 != 0) {
      local_234 = (int *)0xce34167;
    }
    if (cVar1 == '\0') {
      FUN_000ef180();
    }
    else if (bVar11) {
      if (((bStack_210 & 4) == 0) && (bVar2 == 0)) {
        local_234 = (int *)0x1a56c51c;
        FUN_000f09c0();
      }
      else {
        FUN_000f0950();
      }
    }
    else {
      local_234 = (int *)0x1a56c51c;
      FUN_000f09c0();
    }
  }
  if (local_228 != (int *)0x0) {
    local_228 = (int *)0x8b1797b;
    if (cVar1 == '\0') {
      FUN_000ef180();
    }
    else if (bVar11) {
      if ((bStack_210 & 0x40) == 0) {
        local_228 = (int *)0x89775d1;
        FUN_000f09c0();
      }
      else {
        FUN_000f0950();
      }
    }
    else {
      local_228 = (int *)0x89775d1;
      FUN_000f09c0();
    }
  }
  if (local_230 != (int *)0x0) {
    local_230 = (int *)0xf0a8a9c;
    if (cVar1 != '\0') {
      if (!bVar11) {
        local_230 = (int *)0xef79c32;
        FUN_000f09c0();
        return 1;
      }
      if (-1 < (char)bStack_210) {
        local_230 = (int *)0xef79c32;
        FUN_000f09c0();
        return 1;
      }
      FUN_000f0950();
      return 1;
    }
    FUN_000ef180();
  }
  return 1;
}
