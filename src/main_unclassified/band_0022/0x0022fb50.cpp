/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B92BAA10F4C8FF30B3B2F5D3ECE1F4E0CDF37E6B26357E95CBD353824327C7E
 * Entry: 0x0022fb50, Ghidra index: 7744, label: FUN_0022fb50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two caller DWORDs, original EAX result, RET 8; guest ECX/EDX unbound. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
int FUN_0022fb50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 extraout_ST1;
  int unaff_retaddr;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_34 [36];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar2 = (int *)FUN_00160da0(0xffffffff,1);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_00232180(param_2);
  if ((*(byte *)(param_1 + 0x225) & 2) != 0) {
    local_70 = *(undefined4 *)(param_1 + 0x2e4);
    local_68 = *(undefined4 *)(param_1 + 0x2e0);
    local_6c = *(undefined4 *)(param_1 + 0x2dc);
  }
  piVar2[0x54] = *(int *)(*(int *)(param_1 + 0x228) + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar3 = (**(code **)(*piVar2 + 8))(uVar1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_000da880(uVar1,iVar3,1);
  FUN_000da8f0(uVar1);
  if (*(int *)(unaff_retaddr + 0x1b0) == 0) {
    if (*(int *)(iVar3 + 0x1b4) != unaff_retaddr) {
      FUN_0008f6a0(unaff_retaddr);
    }
    if (*(int *)(unaff_retaddr + 0x184) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(unaff_retaddr + 0x184) + 0x1c);
    }
    if (*(int *)(iVar3 + 0x1bc) != iVar4) {
      FUN_0008f6a0(iVar4);
    }
    iVar4 = unaff_retaddr;
    if (*(int *)(iVar3 + 0x3c) == unaff_retaddr) goto LAB_0022fd03;
  }
  else {
    iVar4 = FUN_0014ab50();
    if (*(int *)(iVar3 + 0x1b4) != iVar4) {
      FUN_0008f6a0(iVar4);
    }
    iVar4 = FUN_0014ab50();
    iVar4 = (**(code **)(**(int **)(*(int *)(iVar4 + 8) + 0xbec) + 0xc))(iVar4);
    if (*(int *)(iVar3 + 0x1bc) != iVar4) {
      FUN_0008f6a0(iVar4);
    }
    iVar4 = FUN_0014ab50();
    if (*(int *)(iVar3 + 0x3c) == iVar4) goto LAB_0022fd03;
  }
  FUN_0008f6a0(iVar4);
LAB_0022fd03:
  FUN_00227dd0();
  uStack_10 = local_70;
  uStack_c = local_6c;
  uStack_8 = local_68;
  FUN_0022f840();
  FUN_00227ce0(iVar3,auStack_34,*(undefined4 *)(*(int *)(unaff_retaddr + 0x228) + 0x70),
               *(undefined4 *)(*(int *)(unaff_retaddr + 0x228) + 0x74));
  FUN_00226360();
  FUN_00227f40();
  fVar5 = (float10)FUN_002324c0();
  fVar5 = fVar5 / (float10)*(float *)(iVar3 + 0x208);
  *(float *)(iVar3 + 0x1dc) = (float)fVar5;
  *(float *)(iVar3 + 0x1d8) = (float)fVar5;
  *(float *)(iVar3 + 0x230) = (float)(fVar5 * extraout_ST1);
  return iVar3;
}
