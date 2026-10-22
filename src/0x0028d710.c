/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E596666AD51794022661CA99B3233005C6A266F9F080536DB0C7EF647A0A798
 * Entry: 0x0028d710, Ghidra index: 9194, label: FUN_0028d710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028d710(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  undefined4 *puVar5;
  int unaff_ESI;
  float10 fVar6;
  float local_70;
  undefined1 *puStack_6c;
  undefined1 local_18 [4];
  int iStack_14;
  
  puStack_6c = (undefined1 *)param_1;
  local_70 = 3.750615e-39;
  fVar6 = (float10)FUN_0028d480();
  uVar1 = *(undefined4 *)(in_EAX * 0xc + 0xc + *(int *)(unaff_ESI + 0x18));
  local_70 = (float)in_EAX;
  puVar5 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + (in_EAX * 3 + 6) * 4);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = *puVar5;
  puStack_6c = local_18;
  if (in_EAX < 0) {
    local_70 = local_70 + 4.2949673e+09;
  }
  local_70 = local_70 * *(float *)(unaff_ESI + 0xc);
  FUN_0028bec0();
  iStack_14 = in_EAX + 1;
  FUN_0028bec0();
  puVar5 = (undefined4 *)FUN_00277d10(uVar2,uVar3,uVar1,uVar3,(float)fVar6,uVar4,&local_70);
  uVar1 = puVar5[2];
  uVar2 = puVar5[1];
  *param_2 = *puVar5;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}
