/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80C42F351CBA79E84405ED9AA7896EBCBC4A0400AE8EDE3336FF1FE5FE2A072F
 * Entry: 0x001f2cf0, Ghidra index: 7016, label: FUN_001f2cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f2cf0(void)

{
  int iVar1;
  float fVar2;
  int in_ECX;
  byte *in_EDX;
  
  if ((*in_EDX & 1) != 0) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x1c) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x1c) = fVar2;
  }
  if ((*in_EDX & 2) != 0) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x20) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x20) = fVar2;
  }
  if ((*in_EDX & 4) != 0) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x14) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x14) = fVar2;
  }
  if ((*in_EDX & 8) != 0) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x18) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x18) = fVar2;
  }
  if ((*in_EDX & 0x10) != 0) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x4c) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x4c) = fVar2;
  }
  if ((*in_EDX & 0x20) != 0) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x50) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x50) = fVar2;
  }
  if ((*in_EDX & 0x40) != 0) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x44) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x44) = fVar2;
  }
  if ((char)*in_EDX < '\0') {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xb4) + 0x48) + 1.0;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    *(float *)(*(int *)(in_ECX + 0xb4) + 0x48) = fVar2;
  }
  fVar2 = (float)in_EDX[2] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x24);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x24) = fVar2;
  fVar2 = (float)in_EDX[3] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x28);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x28) = fVar2;
  fVar2 = (float)in_EDX[4] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x2c);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x2c) = fVar2;
  fVar2 = (float)in_EDX[5] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x30);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x30) = fVar2;
  fVar2 = (float)in_EDX[6] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x38);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x38) = fVar2;
  fVar2 = (float)in_EDX[7] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x34);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x34) = fVar2;
  fVar2 = (float)in_EDX[8] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x3c);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x3c) = fVar2;
  fVar2 = (float)in_EDX[9] * 0.003921569 + *(float *)(*(int *)(in_ECX + 0xb4) + 0x40);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0x40) = fVar2;
  fVar2 = *(float *)(in_EDX + 0x14) + *(float *)(*(int *)(in_ECX + 0xb4) + 4);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 4) = fVar2;
  fVar2 = *(float *)(in_EDX + 0x18) + *(float *)(*(int *)(in_ECX + 0xb4) + 8);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 8) = fVar2;
  fVar2 = *(float *)(in_EDX + 0x1c) + *(float *)(*(int *)(in_ECX + 0xb4) + 0xc);
  if (fVar2 <= 1.0) {
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(*(int *)(in_ECX + 0xb4) + 0xc) = fVar2;
  iVar1 = *(int *)(in_ECX + 0xb4);
  fVar2 = *(float *)(in_EDX + 0x20) + *(float *)(iVar1 + 0x10);
  if (1.0 < fVar2) {
    *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
    return;
  }
  if (fVar2 < -1.0) {
    *(undefined4 *)(iVar1 + 0x10) = 0xbf800000;
    return;
  }
  *(float *)(iVar1 + 0x10) = fVar2;
  return;
}
