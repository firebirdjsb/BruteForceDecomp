/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 186B27FC57E84BA2FDA109C3E7AF10432F0303B2A79DFA9C35E9CAA99D6FC2BE
 * Entry: 0x00150a10, Ghidra index: 4409, label: FUN_00150a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c8e0;
extern uint32_t DAT_0040c8e4;
extern uint32_t DAT_0040c8e8;
extern uint32_t DAT_0040c8ec;
extern uint32_t DAT_0040c8f0;
extern uint32_t DAT_0040c8f4;
extern uint32_t _DAT_003c027c;
extern uint32_t _DAT_0046d2f0;
extern uint32_t _DAT_0046d2f4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00150a10(char param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  byte *unaff_ESI;
  float *unaff_EDI;
  
  *(undefined4 *)(in_ECX + 0x48) = 2;
  pfVar1 = (float *)(in_ECX + DAT_0040c8ec * 0xc);
  iVar2 = in_ECX + DAT_0040c8e0 * 0xc;
  fVar3 = *(float *)(in_ECX + DAT_0040c8e0 * 0xc) - *pfVar1;
  fVar5 = *(float *)(iVar2 + 4) - pfVar1[1];
  fVar6 = *(float *)(iVar2 + 8) - pfVar1[2];
  fVar4 = ((*(float *)(in_ECX + 0x3c) - *pfVar1) * fVar3 +
          (*(float *)(in_ECX + 0x40) - pfVar1[1]) * fVar5 +
          (*(float *)(in_ECX + 0x44) - pfVar1[2]) * fVar6) /
          (fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
  if (((0.01 <= fVar4) && (fVar4 <= 1.01)) &&
     (fVar3 = *(float *)(in_ECX + 0x3c) - (fVar3 * fVar4 + *pfVar1),
     fVar7 = *(float *)(in_ECX + 0x40) - (fVar5 * fVar4 + pfVar1[1]),
     fVar5 = *(float *)(in_ECX + 0x44) - (fVar6 * fVar4 + pfVar1[2]),
     fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5 <= _DAT_003c027c)) {
    if ((fVar4 < 0.01) || (0.99 < fVar4)) {
      *(undefined4 *)(in_ECX + 0x48) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x48) = 1;
    }
  }
  pfVar1 = (float *)(in_ECX + DAT_0040c8f0 * 0xc);
  iVar2 = in_ECX + DAT_0040c8e4 * 0xc;
  fVar3 = *(float *)(in_ECX + DAT_0040c8e4 * 0xc) - *pfVar1;
  fVar5 = *(float *)(iVar2 + 4) - pfVar1[1];
  fVar6 = *(float *)(iVar2 + 8) - pfVar1[2];
  fVar4 = ((*(float *)(in_ECX + 0x3c) - *pfVar1) * fVar3 +
          (*(float *)(in_ECX + 0x40) - pfVar1[1]) * fVar5 +
          (*(float *)(in_ECX + 0x44) - pfVar1[2]) * fVar6) /
          (fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
  if (((0.01 <= fVar4) && (fVar4 <= 1.01)) &&
     (fVar3 = *(float *)(in_ECX + 0x3c) - (fVar3 * fVar4 + *pfVar1),
     fVar7 = *(float *)(in_ECX + 0x40) - (fVar5 * fVar4 + pfVar1[1]),
     fVar5 = *(float *)(in_ECX + 0x44) - (fVar6 * fVar4 + pfVar1[2]),
     fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5 <= _DAT_003c027c)) {
    if ((fVar4 < 0.01) || (0.99 < fVar4)) {
      *(undefined4 *)(in_ECX + 0x48) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x48) = 1;
    }
  }
  pfVar1 = (float *)(in_ECX + DAT_0040c8f4 * 0xc);
  iVar2 = in_ECX + DAT_0040c8e8 * 0xc;
  fVar3 = *(float *)(in_ECX + DAT_0040c8e8 * 0xc) - *pfVar1;
  fVar5 = *(float *)(iVar2 + 4) - pfVar1[1];
  fVar6 = *(float *)(iVar2 + 8) - pfVar1[2];
  fVar4 = ((*(float *)(in_ECX + 0x3c) - *pfVar1) * fVar3 +
          (*(float *)(in_ECX + 0x40) - pfVar1[1]) * fVar5 +
          (*(float *)(in_ECX + 0x44) - pfVar1[2]) * fVar6) /
          (fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
  if (((0.01 <= fVar4) && (fVar4 <= 1.01)) &&
     (fVar3 = *(float *)(in_ECX + 0x3c) - (fVar3 * fVar4 + *pfVar1),
     fVar7 = *(float *)(in_ECX + 0x40) - (fVar5 * fVar4 + pfVar1[1]),
     fVar5 = *(float *)(in_ECX + 0x44) - (fVar6 * fVar4 + pfVar1[2]),
     fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5 <= _DAT_003c027c)) {
    if ((fVar4 < 0.01) || (0.99 < fVar4)) {
      *(undefined4 *)(in_ECX + 0x48) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x48) = 1;
    }
  }
  if (((*(int *)(in_ECX + 0x48) == 1) || (*(int *)(in_ECX + 0x48) == 0)) ||
     (((unaff_EDI[1] + *(float *)(unaff_ESI + 0xc)) - *(float *)(unaff_ESI + 0x14) <
       *(float *)(in_ECX + 0x40) && ((*unaff_ESI & 1) == 0)))) {
    if (*(float *)(in_ECX + 0x40) <
        (*(float *)(unaff_ESI + 0x1c) - *(float *)(unaff_ESI + 0x10)) + *(float *)(unaff_ESI + 0x14)
       ) {
      *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(in_ECX + 0x24);
      *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x28);
      *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x2c);
      return;
    }
    if (((unaff_EDI[1] + *(float *)(unaff_ESI + 0xc)) - *(float *)(unaff_ESI + 0x14) <
         *(float *)(in_ECX + 0x40)) &&
       (fVar3 = *unaff_EDI - *(float *)(in_ECX + 0x3c),
       fVar4 = unaff_EDI[2] - *(float *)(in_ECX + 0x44),
       fVar3 * fVar3 + fVar4 * fVar4 <
       (*(float *)(unaff_ESI + 8) - 0.05) * (*(float *)(unaff_ESI + 8) - 0.05))) {
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined4 *)(in_ECX + 0x34) = 0xbf800000;
      *(undefined4 *)(in_ECX + 0x38) = 0;
      return;
    }
    fVar3 = *unaff_EDI;
    *(undefined4 *)(in_ECX + 0x34) = 0;
    *(float *)(in_ECX + 0x30) = fVar3 - *(float *)(in_ECX + 0x3c);
    *(float *)(in_ECX + 0x38) = unaff_EDI[2] - *(float *)(in_ECX + 0x44);
    fVar3 = 1.0 / SQRT(*(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x38) +
                       *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0x34) +
                       *(float *)(in_ECX + 0x30) * *(float *)(in_ECX + 0x30));
    *(float *)(in_ECX + 0x30) = fVar3 * *(float *)(in_ECX + 0x30);
    *(float *)(in_ECX + 0x34) = fVar3 * *(float *)(in_ECX + 0x34);
    *(float *)(in_ECX + 0x38) = fVar3 * *(float *)(in_ECX + 0x38);
    *(undefined4 *)(in_ECX + 0x34) = 0;
    *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x24) + *(float *)(in_ECX + 0x30);
    *(float *)(in_ECX + 0x38) = *(float *)(in_ECX + 0x2c) + *(float *)(in_ECX + 0x38);
    fVar3 = 1.0 / SQRT(*(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x38) +
                       *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0x34) +
                       *(float *)(in_ECX + 0x30) * *(float *)(in_ECX + 0x30));
    *(float *)(in_ECX + 0x30) = fVar3 * *(float *)(in_ECX + 0x30);
    *(float *)(in_ECX + 0x34) = fVar3 * *(float *)(in_ECX + 0x34);
    *(float *)(in_ECX + 0x38) = fVar3 * *(float *)(in_ECX + 0x38);
    return;
  }
  if ((_DAT_0046d2f0 <= *(float *)(in_ECX + 0x28)) || (*(float *)(in_ECX + 0x28) <= _DAT_0046d2f4))
  {
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(in_ECX + 0x24);
    *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x28);
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x2c);
    return;
  }
  if ((param_1 == '\x01') && ((*unaff_ESI & 1) == 0)) {
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(in_ECX + 0x24);
    *(undefined4 *)(in_ECX + 0x34) = 0;
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x2c);
    FUN_0001fd40();
    return;
  }
  *(float *)(in_ECX + 0x30) = *(float *)(in_ECX + 0x24) * 1.01;
  *(float *)(in_ECX + 0x34) = *(float *)(in_ECX + 0x28) * 1.01;
  *(float *)(in_ECX + 0x38) = *(float *)(in_ECX + 0x2c) * 1.01;
  return;
}
