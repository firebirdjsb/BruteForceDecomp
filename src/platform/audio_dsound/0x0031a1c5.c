/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC3E53A5B9B7A67568308DF08083DC0FFC7F8A20F3A1BA81982A12BBE0CC6870
 * Entry: 0x0031a1c5, Ghidra index: 12257, label: FUN_0031a1c5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031a1c5(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int *in_ECX;
  int iVar12;
  int iVar13;
  undefined4 *extraout_ECX;
  uint *extraout_ECX_00;
  uint uVar14;
  float10 fVar15;
  int local_10;
  float local_8;
  
  iVar12 = *in_ECX;
  fVar1 = *(float *)(iVar12 + 0x24);
  local_8 = (*(float *)(iVar12 + 0xc) - 1.0) * 5.0 * (2.0 - *(float *)(iVar12 + 0x28) * 0.01);
  if (local_8 < 1.0) {
    local_8 = 1.0;
  }
  if (60.0 < local_8) {
    local_8 = 60.0;
  }
  FUN_00319cd9();
  FUN_00319e80(*(undefined4 *)(*in_ECX + 4),*(undefined4 *)(*in_ECX + 0x2c));
  fVar15 = (float10)FUN_00319a70(((int *)*in_ECX)[5] + *(int *)*in_ECX);
  FUN_00319b4e((float)fVar15);
  FUN_00319b81(*(undefined4 *)(*in_ECX + 0x18));
  fVar15 = (float10)FUN_00319a70(((int *)*in_ECX)[7] + *(int *)*in_ECX);
  FUN_00319b9d((float)fVar15);
  FUN_00319bd2(*(undefined4 *)(*in_ECX + 0x20));
  FUN_00319ac9(local_8);
  iVar12 = *in_ECX;
  FUN_0031a0ee(*(undefined4 *)(iVar12 + 0xc),*(undefined4 *)(iVar12 + 0x10),
               *(undefined4 *)(iVar12 + 0x2c));
  FUN_00319c62(fVar1 * 0.01);
  puVar7 = (uint *)(in_ECX + 0x2c);
  iVar12 = 0xe;
  puVar10 = puVar7;
  do {
    *puVar10 = *puVar10 + 1 & 0xfffffffc;
    puVar10 = puVar10 + 2;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar10 = (uint *)(in_ECX + 0x47);
  iVar12 = 5;
  do {
    *puVar10 = *puVar10 + 1 & 0xfffffffc;
    puVar10 = puVar10 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar10 = (uint *)(in_ECX + 0x4d);
  iVar12 = 8;
  do {
    *puVar10 = *puVar10 + 1 & 0xfffffffc;
    puVar10 = puVar10 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  iVar12 = 4;
  in_ECX[0x4c] = in_ECX[0x4c] + 1U & 0xfffffffc;
  puVar10 = (uint *)(in_ECX + 0x55);
  iVar13 = iVar12;
  do {
    *puVar10 = *puVar10 + 1 & 0xfffffffc;
    puVar10 = puVar10 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  in_ECX[0x59] = in_ECX[0x59] + 1U & 0xfffffffc;
  iVar13 = 0xe;
  do {
    *puVar7 = *puVar7 - 1;
    puVar7 = puVar7 + 2;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  piVar11 = in_ECX + 0x48;
  do {
    *piVar11 = *piVar11 + in_ECX[0x47];
    piVar11 = piVar11 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  in_ECX[0x4c] = in_ECX[0x4c] + in_ECX[0x47];
  puVar7 = (uint *)(in_ECX + 0x4d);
  local_10 = 4;
  uVar9 = 0;
  do {
    uVar2 = puVar7[1];
    uVar3 = *puVar7;
    uVar14 = uVar2;
    if (uVar2 < uVar3) {
      uVar14 = uVar3;
    }
    uVar4 = puVar7[-0x21];
    uVar14 = uVar14 - uVar9;
    if (uVar4 < uVar14) {
      fVar1 = (float)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      fVar5 = (float)(int)uVar14;
      if ((int)uVar14 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      fVar6 = (float)(int)(uVar3 - uVar9);
      if ((int)(uVar3 - uVar9) < 0) {
        fVar6 = fVar6 + 4.2949673e+09;
      }
      uVar8 = FUN_00319a67(fVar6 * (fVar1 / fVar5));
      *extraout_ECX = uVar8;
      fVar6 = (float)(int)(extraout_ECX[1] - uVar9);
      if ((int)(extraout_ECX[1] - uVar9) < 0) {
        fVar6 = fVar6 + 4.2949673e+09;
      }
      uVar9 = FUN_00319a67(fVar6 * (fVar1 / fVar5));
      extraout_ECX_00[1] = uVar9;
      iVar12 = 2;
      puVar10 = extraout_ECX_00;
      do {
        *puVar10 = *puVar10 + 1 & 0xfffffffc;
        puVar10 = puVar10 + 1;
        iVar12 = iVar12 + -1;
        puVar7 = extraout_ECX_00;
      } while (iVar12 != 0);
    }
    else {
      *puVar7 = uVar3 - uVar9;
      puVar7[1] = uVar2 - uVar9;
    }
    puVar7 = puVar7 + 2;
    local_10 = local_10 + -1;
    uVar9 = uVar2;
  } while (local_10 != 0);
  puVar7 = (uint *)(in_ECX + 0x55);
  puVar10 = (uint *)(in_ECX + 0x34);
  iVar12 = 4;
  do {
    if (*puVar10 < *puVar7) {
      *puVar7 = *puVar10;
    }
    puVar10 = puVar10 + 2;
    puVar7 = puVar7 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if ((uint)in_ECX[0x44] < (uint)in_ECX[0x59]) {
    in_ECX[0x59] = in_ECX[0x44];
  }
  piVar11 = in_ECX + 0x5a;
  iVar12 = 8;
  do {
    if (*piVar11 < 0x800000) {
      if (*piVar11 < -0x7fffff) {
        *piVar11 = -0x7fffff;
      }
    }
    else {
      *piVar11 = 0x7fffff;
    }
    piVar11 = piVar11 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  iVar12 = 5;
  piVar11 = in_ECX + 0x47;
  do {
    *piVar11 = *piVar11 << 2;
    piVar11 = piVar11 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  in_ECX[0x4c] = in_ECX[0x4c] << 2;
  piVar11 = in_ECX + 0x4d;
  iVar12 = 8;
  do {
    *piVar11 = *piVar11 << 2;
    piVar11 = piVar11 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  piVar11 = in_ECX + 0x55;
  iVar12 = 4;
  do {
    *piVar11 = *piVar11 << 2;
    piVar11 = piVar11 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  in_ECX[0x59] = in_ECX[0x59] << 2;
  return;
}
