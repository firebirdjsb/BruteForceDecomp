/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABEF11F34A520718AA9A47D17F15C9DC239816ACE47341C07E19A4F150FD1551
 * Entry: 0x001b5ed0, Ghidra index: 5686, label: FUN_001b5ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5ed0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *unaff_EBX = *param_1;
  unaff_EBX[1] = param_1[1];
  unaff_EBX[2] = param_1[2];
  unaff_EBX[3] = param_1[3];
  unaff_EBX[4] = param_1[4];
  uVar1 = param_1[8];
  uVar2 = param_1[7];
  uVar3 = param_1[5];
  unaff_EBX[6] = param_1[6];
  unaff_EBX[5] = uVar3;
  unaff_EBX[7] = uVar2;
  unaff_EBX[8] = uVar1;
  puVar5 = param_1 + 9;
  puVar6 = unaff_EBX + 9;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_001bad70(unaff_EBX + 0xe);
  FUN_001e0dd0(unaff_EBX + 0x12);
  FUN_001bb200(unaff_EBX + 0x16);
  FUN_001e0dd0(unaff_EBX + 0x1a);
  FUN_001e0dd0(unaff_EBX + 0x1e);
  unaff_EBX[0x22] = param_1[0x22];
  unaff_EBX[0x23] = param_1[0x23];
  return;
}
