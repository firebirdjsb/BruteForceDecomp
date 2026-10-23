/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A90A2804BC1E4BB5FEBCC4F535CEA3531D9EB92805C8E83604AE11E51BBCDAB
 * Entry: 0x002dd100, Ghidra index: 10316, label: FUN_002dd100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dd100(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_EBP;
  float unaff_ESI;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_c;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x30);
  *(int *)(iVar2 + 0x80) = *(int *)(iVar2 + 0x80) + 1;
  (**(code **)**(undefined4 **)(iVar2 + 0x1c))(iVar1,iVar3,&local_1c,&local_18);
  FUN_002bf610(iVar1,iVar3,unaff_ESI + unaff_EBP,param_1 + 0x38,0,0,0,0,param_1 + 0x14);
  uVar4 = *(undefined4 *)(iVar2 + 0x108);
  local_1c = *(undefined4 *)(iVar2 + 0x10c);
  local_18 = uVar4;
  uStack_14 = local_1c;
  FUN_002d5de0();
  uVar4 = FUN_002d5d50(param_1 + 0x18,
                       (float)(((float10)(double)CONCAT44(local_1c,uVar4) -
                               (float10)*(double *)(iVar1 + 0x40)) *
                               (float10)*(float *)(iVar1 + 0x48) + (float10)*(float *)(iVar1 + 0x50)
                              + (float10)unaff_ESI));
  *(undefined4 *)(iStack_c + 0x1c) = uVar4;
  FUN_002d5de0();
  uVar4 = FUN_002d5d50(iStack_c + 0x28,
                       (float)(((float10)(double)CONCAT44(uStack_14,local_18) -
                               (float10)*(double *)(iVar3 + 0x40)) *
                               (float10)*(float *)(iVar3 + 0x48) + (float10)*(float *)(iVar3 + 0x50)
                              + (float10)unaff_EBP));
  *(undefined4 *)(iStack_c + 0x2c) = uVar4;
  return;
}
