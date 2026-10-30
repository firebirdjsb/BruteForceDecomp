/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 634C3152B83F09778D4A800C25EE4B17FA2A45506D1180A2429BAB756CB44BE2
 * Entry: 0x002c0cf0, Ghidra index: 10017, label: FUN_002c0cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0cf0(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  float10 fVar6;
  float10 fVar7;
  
  if ((*(byte *)(*(int *)(in_EAX + 0x28) + 0x70) & 7) == 0) {
    *(uint *)(in_EAX + 0x14) = *(uint *)(in_EAX + 0x14) & 0xffd7ffff | 0x140000;
    fVar6 = (float10)FUN_002bf0f0(0);
    fVar7 = (float10)FUN_002bf0f0(param_1);
    *(float *)(in_EAX + 0x5c) = (float)(fVar7 + (float10)(float)fVar6);
    return;
  }
  if ((*(byte *)(*(int *)(in_EAX + 0x44) + 0x70) & 7) == 0) {
    FUN_002c0cb0(param_1,0);
    return;
  }
  iVar1 = *(int *)(*(int *)(in_EAX + 0x28) + 0x90);
  iVar2 = *(int *)(*(int *)(in_EAX + 0x44) + 0x90);
  fVar3 = *(float *)(iVar1 + 0x158) + *(float *)(iVar1 + 0x150) + 1e-10;
  fVar5 = *(float *)(iVar2 + 0x158) + *(float *)(iVar2 + 0x150) + 1e-10;
  fVar4 = fVar5 * 0.1 + fVar3;
  fVar5 = fVar3 * 0.1 + fVar5;
  param_1 = param_1 / (fVar4 + fVar5);
  FUN_002c0cb0(param_1 * fVar4,param_1 * fVar5);
  return;
}
