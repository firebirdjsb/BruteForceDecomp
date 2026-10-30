/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42F523E3253D2B67C413BC9820C067DDFB5019A6159E4957954A56D73EE792A1
 * Entry: 0x0011fff0, Ghidra index: 3640, label: FUN_0011fff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0011fff0(void)

{
  float fVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *unaff_EBX;
  float10 fVar6;
  float10 extraout_ST0;
  float fStack_14;
  float fStack_10;
  
  piVar2 = *(int **)(in_EAX + 0x684);
  iVar3 = (**(code **)(*piVar2 + 0x40))();
  fStack_10 = *(float *)(iVar3 + 0x2c) + *(float *)(in_EAX + 0x694);
  fStack_14 = *(float *)(iVar3 + 0x28) + *(float *)(in_EAX + 0x690);
  iVar4 = *(int *)(in_EAX + 0x698);
  fVar6 = (float10)*(float *)(iVar3 + 0x24) + (float10)*(float *)(in_EAX + 0x68c);
  if ((iVar4 == 0) || (iVar4 == -1)) {
    if (*(int *)(in_EAX + 0x688) == DAT_0046d064) goto LAB_001200a8;
    iVar4 = FUN_00236e00();
    fVar6 = extraout_ST0;
    if (iVar4 == 0) goto LAB_001200a8;
    (**(code **)(*piVar2 + 0x40))();
    pfVar5 = (float *)FUN_00039510();
    fVar1 = *pfVar5;
    fStack_10 = pfVar5[2];
    fStack_14 = pfVar5[1];
  }
  else {
    fStack_10 = *(float *)(iVar4 + 0x40);
    fStack_14 = *(float *)(iVar4 + 0x3c);
    fVar1 = *(float *)(iVar4 + 0x38);
  }
  fVar6 = (float10)fVar1;
LAB_001200a8:
  *unaff_EBX = (float)fVar6;
  unaff_EBX[1] = fStack_14;
  unaff_EBX[2] = fStack_10;
  return;
}
