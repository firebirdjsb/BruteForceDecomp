/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CB376C292FA8F6967BAE34AEE2046268E94D533917193E144975FCD03387261
 * Entry: 0x002bb980, Ghidra index: 9908, label: FUN_002bb980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
/* Original stores the incoming 64-bit value as two DWORDs. The x87 FST/FSTP
 * writeback to its guest stack slot remains ABI_UNVERIFIED. */
undefined4 FUN_002bb980(double param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint32_t value_words[2];
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0xbc) - *(float *)(in_ECX + 0x1a8);
  fVar3 = *(float *)(in_ECX + 0xc0) - *(float *)(in_ECX + 0x1ac);
  fVar2 = *(float *)(in_ECX + 0xc4) - *(float *)(in_ECX + 0x1b0);
  if ((fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 <= 0.0001) &&
     (fVar1 = *(float *)(in_ECX + 0xec) * *(float *)(in_ECX + 0x188) +
              *(float *)(in_ECX + 0x18c) * *(float *)(in_ECX + 0xf0) +
              *(float *)(in_ECX + 400) * *(float *)(in_ECX + 0xf4) +
              *(float *)(in_ECX + 0x194) * *(float *)(in_ECX + 0xf8), fVar1 = 1.0 - fVar1 * fVar1,
     (fVar1 + fVar1) * *(float *)(in_ECX + 4) * *(float *)(in_ECX + 4) <= 2.5e-05)) {
    uVar4 = 3;
    if (param_1 - *(double *)(in_ECX + 0x178) <= (double)*(float *)(*(int *)(in_ECX + 0xc) + 0x90))
    {
      uVar4 = 2;
    }
    return uVar4;
  }
  *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(in_ECX + 0xf0);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(in_ECX + 0xf4);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(in_ECX + 0xf8);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(in_ECX + 0xbc);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(in_ECX + 0xc0);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(in_ECX + 0xc4);
  /* 0x2bba81..0x2bba8f: high DWORD is written before low DWORD. */
  _Static_assert(sizeof param_1 == sizeof value_words, "64-bit incoming double");
  memcpy(value_words,&param_1,sizeof value_words);
  *(undefined4 *)(in_ECX + 0x17c) = value_words[1];
  *(undefined4 *)(in_ECX + 0x178) = value_words[0];
  fVar1 = *(float *)(in_ECX + 0xbc) - *(float *)(in_ECX + 0x1b8);
  fVar3 = *(float *)(in_ECX + 0xc0) - *(float *)(in_ECX + 0x1bc);
  fVar2 = *(float *)(in_ECX + 0xc4) - *(float *)(in_ECX + 0x1c0);
  if ((0.010000001 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) ||
     (fVar1 = *(float *)(in_ECX + 0x198) * *(float *)(in_ECX + 0xdc) +
              *(float *)(in_ECX + 0x19c) * *(float *)(in_ECX + 0xe0) +
              *(float *)(in_ECX + 0x1a0) * *(float *)(in_ECX + 0xe4) +
              *(float *)(in_ECX + 0x1a4) * *(float *)(in_ECX + 0xe8), fVar1 = 1.0 - fVar1 * fVar1,
     0.040000003 < (fVar1 + fVar1) * *(float *)(in_ECX + 4) * *(float *)(in_ECX + 4))) {
    *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(in_ECX + 0xdc);
    *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(in_ECX + 0xe0);
    *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(in_ECX + 0xe4);
    *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(in_ECX + 0xe8);
    *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(in_ECX + 0xbc);
    *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(in_ECX + 0xc0);
    *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(in_ECX + 0xc4);
    /* 0x2bbb8d..0x2bbb9b: low DWORD is written before high DWORD. */
    memcpy(value_words,&param_1,sizeof value_words);
    *(undefined4 *)(in_ECX + 0x180) = value_words[0];
    *(undefined4 *)(in_ECX + 0x184) = value_words[1];
  }
  else if (4.0 < param_1 - *(double *)(in_ECX + 0x180)) {
    return 3;
  }
  return 1;
}
