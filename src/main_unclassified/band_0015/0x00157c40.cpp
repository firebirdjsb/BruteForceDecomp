/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12DB159223F45F151835C1AC8717DE5D3533218F2CDD8352B2C4F6A60258C8D7
 * Entry: 0x00157c40, Ghidra index: 4490, label: FUN_00157c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00157c40(float param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *in_ECX;
  float fVar4;
  
  in_ECX[4] = *(int *)(in_ECX[2] + 0xb60);
  iVar3 = (**(code **)(*in_ECX + 0x40))();
  if ((*(float *)(iVar3 + 0x28) < -500.0) &&
     ((*(int *)(in_ECX[3] + 4) != 3 || ((*(byte *)(in_ECX + 0x1c) & 1) == 0)))) {
    return '\0';
  }
  fVar4 = 0.0;
  if (0.0 <= (float)in_ECX[0x43] - param_1) {
    fVar4 = (float)in_ECX[0x43] - param_1;
  }
  in_ECX[0x43] = (int)fVar4;
  if ((((*(char *)((int)in_ECX + 0x79) != '\0') && ((*(byte *)((int)in_ECX + 0x71) & 0x10) != 0)) &&
      ((*(byte *)((int)in_ECX + 0x71) & 0x20) != 0)) ||
     (cVar1 = (**(code **)(*in_ECX + 0xd4))(), cVar1 != '\0')) {
    FUN_000ba1c0();
  }
  cVar1 = FUN_0015af20(param_1);
  if (cVar1 != '\0') {
    if ((int *)in_ECX[0x18] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x18] + 0xc))(param_1,in_ECX);
    }
    iVar3 = in_ECX[0x1b];
    if (*(int *)(iVar3 + 0x10) != 0) {
      iVar3 = *(int *)(iVar3 + 8);
    }
    iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0xc) + 4);
    if (((iVar3 == 3) || (iVar3 == 2)) || ((iVar3 == 0x1a || (iVar3 == 0x1f)))) {
      bVar2 = *(byte *)((int)in_ECX + 0x26) & 0xdf;
    }
    else {
      bVar2 = *(byte *)((int)in_ECX + 0x26) | 0x20;
    }
    *(byte *)((int)in_ECX + 0x26) = bVar2;
    if ((float)in_ECX[0x6a] != 0.0) {
      if (*(int *)(in_ECX[3] + 4) == 0x14) {
        fVar4 = (float)in_ECX[0x6a] - param_1;
      }
      else {
        fVar4 = (float)in_ECX[0x6a] - *(float *)(in_ECX[2] + 0xc5c) * param_1;
      }
      in_ECX[0x6a] = (int)fVar4;
      if ((float)in_ECX[0x6a] < 0.0 != ((float)in_ECX[0x6a] == 0.0)) {
        cVar1 = '\0';
      }
    }
    if (*(char *)((int)in_ECX + 0x26) < '\0') {
      in_ECX[0x52] = (int)(param_1 + (float)in_ECX[0x52]);
    }
  }
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) & 0x7f;
  if ((100 < *(byte *)(in_ECX + 0x1d)) && ((*(uint *)(in_ECX[3] + 0xa8) >> 0xb & 1) != 0)) {
    cVar1 = '\0';
  }
  return cVar1;
}
