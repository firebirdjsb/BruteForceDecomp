/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66AC32AC5889430AFD1F7D291F95651218CC6B0ACE0FC9F33DD1812A2264A21F
 * Entry: 0x00082980, Ghidra index: 1534, label: FUN_00082980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000782c0(int param_1);
extern void FUN_00077eb0(int param_1,float param_2);
extern float10 FUN_00077e80(void);
extern void FUN_00142510(void);

extern uint32_t DAT_00402000;
extern uint32_t DAT_00402004;
extern uint32_t DAT_00402008;
extern uint32_t DAT_0040200c;
extern uint32_t DAT_00402010;
extern uint32_t DAT_00402014;
void FUN_00082980(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  int unaff_retaddr;
  int local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  float local_24;
  int iStack_20;
  undefined4 local_18 [6];
  
  puVar8 = local_18;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_18[0] = DAT_00402000;
  local_18[1] = DAT_00402004;
  local_18[2] = DAT_00402008;
  local_18[3] = DAT_0040200c;
  iVar5 = FUN_000782c0(4);
  iVar7 = 0;
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 0xc);
    if (iVar2 == 1) {
      local_24 = *(float *)(iVar5 + 4);
      local_34 = (float)(int)local_24;
    }
    else if (iVar2 == 2) {
      local_34 = *(float *)(iVar5 + 4);
    }
    else if (iVar2 == 3) {
      local_34 = (float)(uint)*(byte *)(iVar5 + 4);
    }
    else {
      local_34 = 0.0;
    }
    FUN_00077eb0(iVar5,(float)(int)local_34 + *(float *)(param_3 + 0xc14));
  }
  local_38 = 0;
  local_2c = 0;
  local_30 = 0.0;
  iVar5 = (**(code **)(**(int **)(param_3 + 0xbec) + 0x10))(&local_38);
  if (iVar5 != 0) {
    iVar7 = *(int *)(iVar5 + 0x28);
    local_30 = *(float *)(iVar7 + 0x2c);
    local_34 = *(float *)(iVar7 + 0x30);
    iVar7 = iVar7 + 0x34;
  }
  local_18[2] = DAT_00402010;
  iVar5 = FUN_000782c0(4);
  if ((iVar5 != 0) && (local_30 != 0.0)) {
    fVar9 = (float10)FUN_00077e80();
    FUN_00077eb0(iVar5,(float)(fVar9 + (float10)local_30));
  }
  local_18[2] = DAT_00402014;
  iVar5 = FUN_000782c0(4);
  if ((iVar5 != 0) && (local_34 != 0.0)) {
    fVar9 = (float10)FUN_00077e80();
    FUN_00077eb0(iVar5,(float)(fVar9 + (float10)local_34));
  }
  if (iVar7 != 0) {
    puVar8 = *(undefined4 **)(iVar7 + 4);
    local_38 = 0;
    local_34 = 0.0;
    local_30 = 0.0;
    puVar3 = (undefined4 *)*puVar8;
    while (puVar3 != puVar8) {
      puStack_28 = puVar3;
      cVar4 = FUN_000837b0(unaff_retaddr,param_1,puVar3[3],&local_38,&local_34,&local_30);
      if (cVar4 != '\0') {
        iVar7 = *(int *)(local_38 + 0xc);
        if (iVar7 == 1) {
          local_24 = *(float *)(local_38 + 4);
          uVar6 = (uint)local_24;
        }
        else if (iVar7 == 2) {
          uVar6 = *(uint *)(local_38 + 4);
        }
        else if (iVar7 == 3) {
          uVar6 = (uint)*(byte *)(local_38 + 4);
        }
        else {
          uVar6 = 0;
        }
        iStack_20 = puVar3[5] + uVar6;
        FUN_00077eb0(local_38,(float)iStack_20);
        iVar7 = *(int *)((int)local_34 + 0xc);
        if (iVar7 == 1) {
          fVar1 = *(float *)((int)local_34 + 4);
        }
        else if (iVar7 == 2) {
          fVar1 = (float)*(int *)((int)local_34 + 4);
        }
        else if ((iVar7 == 3) && (*(char *)((int)local_34 + 4) != '\0')) {
          fVar1 = 1.0;
        }
        else {
          fVar1 = 0.0;
        }
        FUN_00077eb0(local_34,fVar1 + (float)puVar3[4]);
        local_2c = 0x3f800000;
        if (*(char *)(puVar3 + 6) == '\0') {
          local_2c = 0;
        }
        FUN_00077eb0(local_30,local_2c);
      }
      FUN_00142510();
      puVar3 = puStack_28;
    }
  }
  *(byte *)(unaff_retaddr + 0x5bc) = *(byte *)(unaff_retaddr + 0x5bc) | 0x40;
  return;
}
