/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D2C1B25FB05E258F9DED58E3AD89A4F1D90CE603E7FF3B130666DE49D55A574
 * Entry: 0x00153410, Ghidra index: 4426, label: FUN_00153410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699c0;
extern uint32_t _DAT_0046d2f0;
extern uint32_t _DAT_0046d2f4;
/* WARNING: Removing unreachable block (ram,0x0015375b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00153410(undefined4 param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *unaff_ESI;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = DAT_004699c0;
  iVar5 = DAT_004699b4;
  iVar4 = DAT_004699b0;
  unaff_ESI[0xe8] = 0;
  unaff_ESI[0xe9] = 0;
  unaff_ESI[0xea] = 0;
  unaff_ESI[0xeb] = 0;
  unaff_ESI[0xec] = 0;
  unaff_ESI[0xed] = 0;
  unaff_ESI[0xee] = 0;
  unaff_ESI[0xef] = 0;
  *unaff_ESI = *unaff_ESI & 0xcf;
  local_c = 0;
  if (0 < iVar6) {
    do {
      iVar6 = *(int *)(*(int *)(iVar5 + 4) + local_c * 4);
      iVar9 = *(int *)(iVar4 + 4);
      iVar7 = iVar6 * 0x54;
      iVar8 = iVar7 + iVar9;
      if (*(float *)(iVar7 + 0x34 + iVar9) <= _DAT_0046d2f0) {
        fVar1 = *(float *)(iVar8 + 0x28);
        if ((fVar1 < _DAT_0046d2f0) && (_DAT_0046d2f4 < fVar1)) {
          *(int *)(unaff_ESI + 0xec) = *(int *)(unaff_ESI + 0xec) + 1;
        }
      }
      else {
        if ((*(int *)(unaff_ESI + 0xe4) < 0) ||
           (*(float *)(iVar8 + 0x40) < *(float *)(*(int *)(unaff_ESI + 0xe4) * 0x54 + 0x40 + iVar9))
           ) {
          *(int *)(unaff_ESI + 0xe4) = iVar6;
        }
        *(int *)(unaff_ESI + 0xe8) = *(int *)(unaff_ESI + 0xe8) + 1;
      }
      local_c = local_c + 1;
    } while (local_c < DAT_004699c0);
  }
  if (-1 < *(int *)(unaff_ESI + 0xe4)) {
    iVar6 = *(int *)(unaff_ESI + 0xe4) * 0x54 + *(int *)(iVar4 + 4);
    FUN_0012dab0(*(undefined4 *)(iVar6 + 0x4c),*(undefined4 *)(iVar6 + 0x50));
    if ((((*unaff_ESI & 1) == 0) || (param_2 < 0.0)) &&
       (*(float *)(iVar6 + 0x40) <
        (*(float *)(unaff_ESI + 0x1c) - *(float *)(unaff_ESI + 0x10)) + 0.1)) {
      *unaff_ESI = *unaff_ESI & 0xfb;
    }
  }
  param_2 = (float)(DAT_004699c0 + -1);
  bVar3 = false;
  if (0 < (int)param_2) {
    local_8 = 1;
    local_c = 0;
    do {
      if (bVar3) break;
      iVar9 = *(int *)(local_c + *(int *)(iVar5 + 4)) * 0x54 + *(int *)(iVar4 + 4);
      iVar6 = local_8;
      if (3 < (int)param_2) {
        local_4 = local_8 + 3;
        do {
          iVar7 = *(int *)(iVar4 + 4);
          iVar8 = *(int *)(*(int *)(iVar5 + 4) + iVar6 * 4) * 0x54;
          if (*(float *)(iVar9 + 0x30) * *(float *)(iVar8 + 0x30 + iVar7) +
              *(float *)(iVar8 + 0x38 + iVar7) * *(float *)(iVar9 + 0x38) +
              *(float *)(iVar8 + 0x34 + iVar7) * *(float *)(iVar9 + 0x34) < -0.3) {
            *unaff_ESI = *unaff_ESI | 0x20;
            bVar3 = true;
          }
          iVar7 = *(int *)(iVar4 + 4);
          iVar8 = *(int *)(*(int *)(iVar5 + 4) + 4 + iVar6 * 4) * 0x54;
          if (*(float *)(iVar9 + 0x30) * *(float *)(iVar8 + 0x30 + iVar7) +
              *(float *)(iVar8 + 0x38 + iVar7) * *(float *)(iVar9 + 0x38) +
              *(float *)(iVar8 + 0x34 + iVar7) * *(float *)(iVar9 + 0x34) < -0.3) {
            *unaff_ESI = *unaff_ESI | 0x20;
            bVar3 = true;
          }
          iVar7 = *(int *)(iVar4 + 4);
          iVar8 = *(int *)(*(int *)(iVar5 + 4) + 8 + iVar6 * 4) * 0x54;
          if (*(float *)(iVar9 + 0x30) * *(float *)(iVar8 + 0x30 + iVar7) +
              *(float *)(iVar8 + 0x38 + iVar7) * *(float *)(iVar9 + 0x38) +
              *(float *)(iVar8 + 0x34 + iVar7) * *(float *)(iVar9 + 0x34) < -0.3) {
            *unaff_ESI = *unaff_ESI | 0x20;
            bVar3 = true;
          }
          iVar7 = *(int *)(iVar4 + 4);
          iVar8 = *(int *)(*(int *)(iVar5 + 4) + 0xc + iVar6 * 4) * 0x54;
          if (*(float *)(iVar9 + 0x30) * *(float *)(iVar8 + 0x30 + iVar7) +
              *(float *)(iVar8 + 0x38 + iVar7) * *(float *)(iVar9 + 0x38) +
              *(float *)(iVar8 + 0x34 + iVar7) * *(float *)(iVar9 + 0x34) < -0.3) {
            *unaff_ESI = *unaff_ESI | 0x20;
            bVar3 = true;
          }
          local_4 = local_4 + 4;
          iVar6 = iVar6 + 4;
        } while (local_4 < DAT_004699c0);
      }
      if (iVar6 < DAT_004699c0) {
        do {
          iVar7 = *(int *)(iVar4 + 4);
          iVar8 = *(int *)(*(int *)(iVar5 + 4) + iVar6 * 4) * 0x54;
          if (*(float *)(iVar9 + 0x30) * *(float *)(iVar8 + 0x30 + iVar7) +
              *(float *)(iVar8 + 0x38 + iVar7) * *(float *)(iVar9 + 0x38) +
              *(float *)(iVar8 + 0x34 + iVar7) * *(float *)(iVar9 + 0x34) < -0.3) {
            *unaff_ESI = *unaff_ESI | 0x20;
            bVar3 = true;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_004699c0);
      }
      local_c = local_c + 4;
      param_2 = (float)((int)param_2 + -1);
      bVar2 = local_8 < DAT_004699c0 + -1;
      local_8 = local_8 + 1;
    } while (bVar2);
  }
  *unaff_ESI = *unaff_ESI ^ *unaff_ESI & 0x10;
  return;
}
