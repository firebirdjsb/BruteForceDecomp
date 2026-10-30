/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50B8896BB9308D6DB661B35C7AD73C257717A8DA8EA8B4786354414EA36BA630
 * Entry: 0x0028b000, Ghidra index: 9178, label: FUN_0028b000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028b000(uint param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float *in_EAX;
  int iVar13;
  int iVar14;
  int *in_EDX;
  int *unaff_EBX;
  float *unaff_ESI;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_48 [18];
  
  local_48[2] = 0.0;
  local_48[1] = 0.0;
  local_48[4] = 1.0;
  local_48[5] = 0.0;
  local_48[7] = 0.0;
  local_48[8] = 1.0;
  local_48[10] = 0.0;
  local_48[0xb] = 0.0;
  local_48[0xd] = -1.0;
  local_48[0xe] = 0.0;
  local_48[0x10] = 0.0;
  local_48[0x11] = -1.0;
  local_48[0] = 1.0;
  local_48[3] = 0.0;
  local_48[6] = 0.0;
  local_48[9] = -1.0;
  local_48[0xc] = 0.0;
  local_48[0xf] = 0.0;
  iVar14 = 2;
  iVar13 = 1;
  if ((((in_EDX != (int *)0x0) && (iVar5 = *in_EDX, iVar5 != 6)) &&
      (iVar13 = iVar5, unaff_EBX != (int *)0x0)) && (*unaff_EBX != 6)) {
    iVar14 = *unaff_EBX;
  }
  fVar6 = local_48[iVar13 * 3 + 2];
  fVar1 = local_48[iVar13 * 3];
  fVar7 = local_48[iVar13 * 3 + 1];
  local_64 = in_EAX[2];
  fVar4 = local_48[iVar14 * 3 + 1] * fVar1 - fVar7 * local_48[iVar14 * 3];
  fVar3 = fVar6 * local_48[iVar14 * 3] - local_48[iVar14 * 3 + 2] * fVar1;
  local_68 = in_EAX[1];
  fVar8 = local_48[iVar14 * 3 + 2] * fVar7 - fVar6 * local_48[iVar14 * 3 + 1];
  fVar2 = *in_EAX;
  fVar9 = 1.0 / SQRT(fVar2 * fVar2 + local_68 * local_68 + local_64 * local_64);
  fVar2 = fVar9 * fVar2;
  local_68 = local_68 * fVar9;
  local_64 = local_64 * fVar9;
  if (ABS(fVar1 * fVar2 + fVar7 * local_68 + fVar6 * local_64) <= 0.99) {
    fVar3 = local_68 * fVar1 - fVar7 * fVar2;
    fVar1 = fVar6 * fVar2 - local_64 * fVar1;
    fVar7 = fVar7 * local_64 - fVar6 * local_68;
    fVar6 = 1.0 / SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar7 * fVar7);
    local_58 = fVar1 * fVar6 * fVar2 - local_68 * fVar7 * fVar6;
    local_5c = local_64 * fVar7 * fVar6 - fVar6 * fVar3 * fVar2;
    fVar1 = fVar6 * fVar3 * local_68 - fVar1 * fVar6 * local_64;
    fVar6 = 1.0 / SQRT(local_5c * local_5c + local_58 * local_58 + fVar1 * fVar1);
    fVar1 = fVar1 * fVar6;
    local_5c = local_5c * fVar6;
    local_58 = local_58 * fVar6;
  }
  else {
    local_58 = fVar2 * fVar3 - local_68 * fVar8;
    local_5c = local_64 * fVar8 - fVar4 * fVar2;
    fVar1 = fVar4 * local_68 - fVar3 * local_64;
    fVar6 = 1.0 / SQRT(local_5c * local_5c + local_58 * local_58 + fVar1 * fVar1);
    fVar1 = fVar1 * fVar6;
    local_5c = local_5c * fVar6;
    local_58 = local_58 * fVar6;
  }
  if (2 < param_1) {
    local_64 = -local_64;
    local_68 = -local_68;
    fVar2 = -fVar2;
  }
  if (2 < param_2) {
    local_58 = -local_58;
    local_5c = -local_5c;
    fVar1 = -fVar1;
  }
  bVar11 = false;
  bVar10 = false;
  bVar12 = false;
  switch(param_1) {
  case 0:
  case 3:
    *unaff_ESI = fVar2;
    unaff_ESI[3] = local_68;
    unaff_ESI[6] = local_64;
    bVar11 = true;
    break;
  case 1:
  case 4:
    unaff_ESI[1] = fVar2;
    unaff_ESI[4] = local_68;
    unaff_ESI[7] = local_64;
    bVar10 = true;
    break;
  case 2:
  case 5:
    unaff_ESI[2] = fVar2;
    unaff_ESI[5] = local_68;
    unaff_ESI[8] = local_64;
    bVar12 = true;
  }
  switch(param_2) {
  case 0:
  case 3:
    *unaff_ESI = fVar1;
    unaff_ESI[3] = local_5c;
    unaff_ESI[6] = local_58;
    goto LAB_0028b56d;
  case 1:
  case 4:
    unaff_ESI[1] = fVar1;
    unaff_ESI[4] = local_5c;
    unaff_ESI[7] = local_58;
    bVar10 = true;
    break;
  case 2:
  case 5:
    unaff_ESI[2] = fVar1;
    unaff_ESI[5] = local_5c;
    unaff_ESI[8] = local_58;
    bVar12 = true;
  }
  if (!bVar11) {
    fVar2 = unaff_ESI[5] * unaff_ESI[1] - unaff_ESI[4] * unaff_ESI[2];
    fVar1 = unaff_ESI[7] * unaff_ESI[2] - unaff_ESI[8] * unaff_ESI[1];
    fVar6 = unaff_ESI[8] * unaff_ESI[4] - unaff_ESI[7] * unaff_ESI[5];
    fVar7 = 1.0 / SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar2 * fVar2);
    unaff_ESI[6] = fVar2 * fVar7;
    *unaff_ESI = fVar6 * fVar7;
    unaff_ESI[3] = fVar1 * fVar7;
    return;
  }
LAB_0028b56d:
  if (bVar10) {
    if (!bVar12) {
      fVar1 = unaff_ESI[7];
      fVar2 = unaff_ESI[4];
      fVar6 = unaff_ESI[1];
      fVar7 = unaff_ESI[6];
      fVar3 = unaff_ESI[3];
      fVar4 = *unaff_ESI;
      FUN_0001fd40();
      unaff_ESI[2] = fVar1 * fVar3 - fVar7 * fVar2;
      unaff_ESI[5] = fVar7 * fVar6 - fVar1 * fVar4;
      unaff_ESI[8] = fVar2 * fVar4 - fVar3 * fVar6;
    }
    return;
  }
  fVar2 = unaff_ESI[3] * unaff_ESI[2] - unaff_ESI[5] * *unaff_ESI;
  fVar1 = unaff_ESI[8] * *unaff_ESI - unaff_ESI[6] * unaff_ESI[2];
  fVar6 = unaff_ESI[6] * unaff_ESI[5] - unaff_ESI[8] * unaff_ESI[3];
  fVar7 = 1.0 / SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar2 * fVar2);
  unaff_ESI[7] = fVar2 * fVar7;
  unaff_ESI[1] = fVar6 * fVar7;
  unaff_ESI[4] = fVar1 * fVar7;
  return;
}
