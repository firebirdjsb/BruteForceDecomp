/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43384CDA3AC53586B4D07A826470E46340B17F9EAA9E63E4627BC2C4CC10EB07
 * Entry: 0x003451b7, Ghidra index: 12800, label: XnInit
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b0;
extern uint32_t PTR_LAB_00387468;
int XONLINES__XnInit(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,
                    undefined2 param_5,undefined2 *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_21c [123];
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [8];
  undefined4 local_20 [6];
  int local_8;
  
  while( true ) {
    iVar3 = DAT_0040f5b0;
    if (DAT_0040f5b0 == 0) {
      DAT_0040f5b0 = 1;
      iVar3 = 0;
    }
    if (iVar3 == 0) break;
    XAPILIB__Sleep(0);
  }
  puVar1 = (undefined4 *)*param_1;
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ExAllocatePoolWithTag(0xbf0,0x4454454e);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar4 = puVar1;
      for (iVar3 = 0x2fc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      puVar1[0x99] = &PTR_LAB_00387468;
      FUN_0001fe40(puVar1 + 0xa7,0x18,0x40,&LAB_0034516a);
      FUN_0001fe40(puVar1 + 0x232,4,4,&LAB_0034516a);
      FUN_0001fe40(puVar1 + 0x236,4,4,&LAB_0034516a);
      FUN_0001fe40(puVar1 + 0x23c,4,4,&LAB_0034516a);
      FUN_0001fe40(puVar1 + 0x240,4,4,&LAB_0034516a);
    }
    *param_1 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      local_8 = RtlNtStatusToDosError(0x80072747);
      goto LAB_00345397;
    }
    local_30 = param_3;
    local_2c = param_2;
    FUN_00352e4c(local_28);
    uVar2 = FUN_00347629();
    puVar1[0x2fa] = uVar2;
    FUN_00347918(local_21c);
    puVar4 = local_21c;
    puVar5 = local_20;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = FUN_003454fa(&local_30);
    if (iVar3 < 0) {
      local_8 = RtlNtStatusToDosError(iVar3);
      if (local_8 == 0) goto LAB_003452f0;
    }
    else {
LAB_003452f0:
      puVar4 = local_20;
      puVar5 = local_21c;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_00347871(local_21c);
      if (((param_3 != 0) && ((*(byte *)(param_3 + 1) & 0x80) != 0)) ||
         (local_8 = FUN_003512aa(local_21c,0), local_8 == 0)) {
        FUN_0034d027();
        goto LAB_00345353;
      }
    }
    FUN_00347677(puVar1[0x2fa]);
    FUN_003474b5();
    *param_1 = 0;
  }
  else {
LAB_00345353:
    if (param_4 == 0) {
      *(short *)(puVar1 + 0x2f4) = *(short *)(puVar1 + 0x2f4) + 1;
    }
    else {
      *(short *)((int)puVar1 + 0xbd2) = *(short *)((int)puVar1 + 0xbd2) + 1;
      *(undefined1 *)(param_6 + 2) = 0;
      *(undefined1 *)((int)param_6 + 0x105) = 0;
      *param_6 = param_5;
      param_6[1] = 0x202;
      *(undefined4 *)(param_6 + 0xc6) = 0;
      param_6[0xc3] = 0;
      param_6[0xc4] = 0;
    }
  }
LAB_00345397:
  DAT_0040f5b0 = 0;
  if ((local_8 != 0) && (param_4 != 0)) {
    XAPILIB__SetLastError(local_8);
    local_8 = -1;
  }
  return local_8;
}
