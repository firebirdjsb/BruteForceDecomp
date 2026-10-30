/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5A63FD20029ACFCE83F9929AE2D8BD70FB652B1F80A7711EC1D75BF1E865414
 * Entry: 0x0004cbc0, Ghidra index: 641, label: FUN_0004cbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0011dfa0(void);

undefined4 FUN_0004cbc0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int *in_EAX;
  int iVar7;
  int iVar8;
  float *unaff_EBX;
  
  iVar7 = (**(code **)(*in_EAX + 0x40))();
  iVar8 = FUN_0011dfa0();
  fVar1 = *(float *)(iVar7 + 0x28);
  fVar2 = *(float *)(*(int *)(iVar8 + 0xc) + 0x18);
  fVar3 = unaff_EBX[2];
  fVar4 = unaff_EBX[1];
  fVar5 = *unaff_EBX;
  iVar7 = (**(code **)(*param_1 + 0x40))();
  fVar3 = (fVar3 + 0.0) - *(float *)(iVar7 + 0x2c);
  fVar1 = ((fVar1 - fVar2) + fVar4) - *(float *)(iVar7 + 0x28);
  fVar5 = fVar5 - *(float *)(iVar7 + 0x24);
  cVar6 = FUN_0004cd10(in_EAX[2],SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar3 * fVar3) + 0.05);
  if (cVar6 != '\0') {
    return 1;
  }
  return 0;
}
