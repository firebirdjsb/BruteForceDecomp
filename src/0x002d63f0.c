/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BE0BC147B503A8D9EDF9E6FBBF30A1FA3A0A61D1C1F4F2AD6A9C6593F3BEEB5
 * Entry: 0x002d63f0, Ghidra index: 10242, label: FUN_002d63f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469f24;
void FUN_002d63f0(int param_1)

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
  
  FUN_002c16a0();
  if (((*(uint *)(param_1 + 0x14) & 0xc000) == 0) && (DAT_00469f24 < *(float *)(param_1 + 0x54))) {
    FUN_002d63a0();
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x44);
  iVar3 = *(int *)(iVar1 + 0x14);
  (**(code **)**(undefined4 **)(iVar3 + 0x1c))(iVar1,iVar2,&local_1c,&local_18);
  *(int *)(iVar3 + 0x80) = *(int *)(iVar3 + 0x80) + 1;
  FUN_002d62f0(param_1,unaff_ESI + unaff_EBP);
  uVar4 = *(undefined4 *)(iVar3 + 0x108);
  local_1c = *(undefined4 *)(iVar3 + 0x10c);
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
  uVar4 = FUN_002d5d50(iStack_c + 0x34,
                       (float)(((float10)(double)CONCAT44(uStack_14,local_18) -
                               (float10)*(double *)(iVar2 + 0x40)) *
                               (float10)*(float *)(iVar2 + 0x48) + (float10)*(float *)(iVar2 + 0x50)
                              + (float10)unaff_EBP));
  *(undefined4 *)(iStack_c + 0x38) = uVar4;
  return;
}
