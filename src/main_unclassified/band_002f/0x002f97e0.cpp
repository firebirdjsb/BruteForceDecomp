/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF9E6945D95B38FC2CDDAF947F77463AFB7CC2800F9838937ECC1D14C23FE6FA
 * Entry: 0x002f97e0, Ghidra index: 10971, label: FUN_002f97e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f97e0(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  int in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_4;
  
  *param_1 = 0;
  local_c = 1;
  iVar11 = 1;
  if (8 < in_ECX) {
    do {
      in_ECX = in_ECX >> 1;
      iVar6 = 0;
      if (0 < iVar11) {
        piVar8 = param_1 + iVar11;
        do {
          *piVar8 = param_1[iVar6] + in_ECX;
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar6 < iVar11);
      }
      local_c = iVar11 * 2;
      iVar6 = iVar11 * 0x10;
      iVar11 = local_c;
    } while (iVar6 < in_ECX);
  }
  iVar11 = local_c * 2;
  if (local_c * 8 - in_ECX == 0) {
    local_10 = 0;
    if (0 < local_c) {
      local_1c = 0;
      local_14 = param_1;
      do {
        local_18 = 0;
        iVar6 = 0;
        if (7 < local_1c) {
          iVar10 = local_c * 4;
          local_4 = 3;
          piVar8 = param_1 + 2;
          do {
            iVar6 = *local_14 + local_18 * 2;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            iVar9 = piVar8[-2] + local_1c;
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar10;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + local_c * -2;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar6 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar10;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *pfVar2 = -fVar4;
            iVar6 = *local_14 + 2 + local_18 * 2;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            iVar9 = piVar8[-1] + local_1c;
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar6 = iVar6 + iVar11;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            iVar9 = iVar9 + iVar10;
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + local_c * -2;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar6 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar10;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *pfVar2 = -fVar4;
            iVar6 = local_18 * 2 + 4 + *local_14;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            iVar9 = *piVar8 + local_1c;
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar10;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            iVar9 = iVar9 + local_c * -2;
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar6 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar10;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *pfVar2 = -fVar4;
            iVar6 = *local_14 + local_18 * 2 + 6;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            iVar9 = piVar8[1] + local_1c;
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar10;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + local_c * -2;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar6 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar6 * 4) = -fVar5;
            iVar6 = iVar6 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar6 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar10;
            uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            local_18 = local_18 + 4;
            *pfVar2 = -fVar4;
            local_4 = local_4 + 4;
            piVar8 = piVar8 + 4;
            iVar6 = local_18;
          } while (local_4 < local_10);
        }
        for (; iVar6 < local_10; iVar6 = iVar6 + 1) {
          iVar9 = param_1[iVar6] + local_1c;
          iVar10 = *local_14 + iVar6 * 2;
          uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
          fVar4 = *(float *)(in_EAX + 4 + iVar10 * 4);
          fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
          *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
          *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar5;
          iVar10 = iVar10 + iVar11;
          *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
          *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
          iVar9 = iVar9 + local_c * 4;
          uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
          fVar4 = *(float *)(in_EAX + 4 + iVar10 * 4);
          fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
          *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
          *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar5;
          iVar10 = iVar10 + iVar11;
          *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
          *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
          iVar9 = iVar9 + local_c * -2;
          uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
          fVar4 = *(float *)(in_EAX + 4 + iVar10 * 4);
          fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
          *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
          *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar5;
          iVar10 = iVar10 + iVar11;
          *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
          *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
          iVar9 = iVar9 + local_c * 4;
          uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
          pfVar1 = (float *)(in_EAX + 4 + iVar10 * 4);
          fVar4 = *pfVar1;
          pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
          fVar5 = *pfVar2;
          *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
          *pfVar1 = -fVar5;
          *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
          *pfVar2 = -fVar4;
        }
        iVar10 = *local_14 + local_1c;
        iVar6 = iVar10 + iVar11;
        pfVar1 = (float *)(in_EAX + 4 + iVar6 * 4);
        *(float *)(in_EAX + 4 + iVar10 * 4) = -*(float *)(in_EAX + 4 + iVar10 * 4);
        iVar10 = iVar6 + iVar11;
        uVar3 = *(undefined4 *)(in_EAX + iVar6 * 4);
        fVar4 = *pfVar1;
        fVar5 = *(float *)(in_EAX + 4 + iVar10 * 4);
        *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar10 * 4);
        *pfVar1 = -fVar5;
        *(undefined4 *)(in_EAX + iVar10 * 4) = uVar3;
        local_14 = local_14 + 1;
        local_1c = local_1c + 2;
        *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar4;
        local_10 = local_10 + 1;
        *(float *)(in_EAX + 4 + (iVar10 + iVar11) * 4) =
             -*(float *)(in_EAX + 4 + (iVar10 + iVar11) * 4);
      } while (local_10 < local_c);
      return;
    }
  }
  else {
    *(float *)(in_EAX + 4) = -*(float *)(in_EAX + 4);
    local_10 = 1;
    *(float *)(in_EAX + 4 + local_c * 8) = -*(float *)(in_EAX + 4 + local_c * 8);
    if (1 < local_c) {
      iVar6 = 2;
      local_14 = param_1;
      do {
        local_14 = local_14 + 1;
        local_18 = 0;
        iVar10 = 0;
        if (7 < iVar6) {
          local_4 = 3;
          piVar8 = param_1 + 2;
          do {
            iVar10 = *local_14 + local_18 * 2;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar10 * 4);
            iVar9 = piVar8[-2] + iVar6;
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar5;
            iVar10 = iVar10 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar10 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar11;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *pfVar2 = -fVar4;
            iVar10 = *local_14 + 2 + local_18 * 2;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar10 * 4);
            iVar9 = piVar8[-1] + iVar6;
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar5;
            iVar10 = iVar10 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar10 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar11;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *pfVar2 = -fVar4;
            iVar10 = local_18 * 2 + 4 + *local_14;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            iVar9 = *piVar8 + iVar6;
            fVar4 = *(float *)(in_EAX + 4 + iVar10 * 4);
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar5;
            iVar10 = iVar10 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar10 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar11;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *pfVar2 = -fVar4;
            iVar10 = *local_14 + local_18 * 2 + 6;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            fVar4 = *(float *)(in_EAX + 4 + iVar10 * 4);
            iVar9 = piVar8[1] + iVar6;
            fVar5 = *(float *)(in_EAX + 4 + iVar9 * 4);
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *(float *)(in_EAX + 4 + iVar10 * 4) = -fVar5;
            iVar10 = iVar10 + iVar11;
            pfVar1 = (float *)(in_EAX + 4 + iVar10 * 4);
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar4;
            iVar9 = iVar9 + iVar11;
            uVar3 = *(undefined4 *)(in_EAX + iVar10 * 4);
            fVar4 = *pfVar1;
            pfVar2 = (float *)(in_EAX + 4 + iVar9 * 4);
            fVar5 = *pfVar2;
            *(undefined4 *)(in_EAX + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
            *pfVar1 = -fVar5;
            *(undefined4 *)(in_EAX + iVar9 * 4) = uVar3;
            local_18 = local_18 + 4;
            *pfVar2 = -fVar4;
            local_4 = local_4 + 4;
            piVar8 = piVar8 + 4;
            iVar10 = local_18;
          } while (local_4 < local_10);
        }
        for (; iVar10 < local_10; iVar10 = iVar10 + 1) {
          iVar9 = *local_14 + iVar10 * 2;
          uVar3 = *(undefined4 *)(in_EAX + iVar9 * 4);
          iVar7 = param_1[iVar10] + iVar6;
          fVar4 = *(float *)(in_EAX + 4 + iVar9 * 4);
          fVar5 = *(float *)(in_EAX + 4 + iVar7 * 4);
          *(undefined4 *)(in_EAX + iVar9 * 4) = *(undefined4 *)(in_EAX + iVar7 * 4);
          *(float *)(in_EAX + 4 + iVar9 * 4) = -fVar5;
          iVar9 = iVar9 + iVar11;
          pfVar1 = (float *)(in_EAX + 4 + iVar9 * 4);
          *(undefined4 *)(in_EAX + iVar7 * 4) = uVar3;
          *(float *)(in_EAX + 4 + iVar7 * 4) = -fVar4;
          iVar7 = iVar7 + iVar11;
          uVar3 = *(undefined4 *)(in_EAX + iVar9 * 4);
          fVar4 = *pfVar1;
          pfVar2 = (float *)(in_EAX + 4 + iVar7 * 4);
          fVar5 = *pfVar2;
          *(undefined4 *)(in_EAX + iVar9 * 4) = *(undefined4 *)(in_EAX + iVar7 * 4);
          *pfVar1 = -fVar5;
          *(undefined4 *)(in_EAX + iVar7 * 4) = uVar3;
          *pfVar2 = -fVar4;
        }
        iVar10 = *local_14 + iVar6;
        iVar6 = iVar6 + 2;
        *(float *)(in_EAX + 4 + iVar10 * 4) = -*(float *)(in_EAX + 4 + iVar10 * 4);
        local_10 = local_10 + 1;
        *(float *)(in_EAX + 4 + (iVar10 + iVar11) * 4) =
             -*(float *)(in_EAX + 4 + (iVar10 + iVar11) * 4);
      } while (local_10 < local_c);
    }
  }
  return;
}
