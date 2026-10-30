/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE1F68355AE60675259B42CFC4BD470C696E3B302952932B6E9C1C6AE40F9733
 * Entry: 0x000d2240, Ghidra index: 2612, label: FUN_000d2240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000ea6c0(int param_1,int param_2,int param_3,int *param_4);
extern void FUN_001f6e60(undefined4 param_1);

extern uint32_t *DAT_00469b54;
/* Source-grounded f32 stores at +0x120 and +0x11c feed float arithmetic.
 * ABI_UNVERIFIED: confirm both destination widths against original XBE. */
extern float _DAT_004a8d34;
extern float _DAT_004a8d38;
extern uint32_t _DAT_004a8d3c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2240(int *param_1,byte *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((_DAT_004a8d3c & 1) == 0) {
    _DAT_004a8d3c = _DAT_004a8d3c | 1;
    iVar9 = (**(code **)(*DAT_00469b54 + 0x48))();
    _DAT_004a8d38 = *(float *)(iVar9 + 0x11c);
  }
  if ((_DAT_004a8d3c & 2) == 0) {
    _DAT_004a8d3c = _DAT_004a8d3c | 2;
    iVar9 = (**(code **)(*DAT_00469b54 + 0x48))();
    _DAT_004a8d34 = *(float *)(iVar9 + 0x120);
  }
  iVar9 = param_1[1];
  if (iVar9 != -1) {
    iVar1 = param_1[2];
    if (iVar1 < iVar9) {
      iVar9 = (iVar1 - iVar9) + 1 + *param_1;
    }
    else {
      iVar9 = (iVar1 - iVar9) + 1;
    }
    if (0 < iVar9) {
      pfVar10 = (float *)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0xc))();
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      fVar4 = *pfVar10;
      iVar9 = *(int *)(*(int *)(*(int *)(param_2 + 0x80) + 0xb74) + 0x5c);
      fVar5 = *(float *)(iVar9 + 0x14);
      fVar6 = *(float *)(iVar9 + 0x18);
      fVar7 = *(float *)(iVar9 + 0x10);
      uVar8 = *(undefined4 *)(param_2 + 0x2c);
      iVar9 = param_1[1];
      if (iVar9 == -1) {
        iVar9 = 0;
      }
      else {
        iVar1 = param_1[2];
        if (iVar1 < iVar9) {
          iVar9 = (iVar1 - iVar9) + 1 + *param_1;
        }
        else {
          iVar9 = (iVar1 - iVar9) + 1;
        }
      }
      while (iVar9 = iVar9 + -1, -1 < iVar9) {
        iVar1 = param_1[1];
        if (iVar1 == -1) {
          iVar11 = 0;
        }
        else {
          iVar11 = param_1[2];
          if (iVar11 < iVar1) {
            iVar11 = (iVar11 - iVar1) + 1 + *param_1;
          }
          else {
            iVar11 = (iVar11 - iVar1) + 1;
          }
        }
        if ((((iVar9 < iVar11) && (-1 < iVar9)) && (-1 < iVar1)) &&
           (uVar12 = iVar1 + iVar9 & *param_1 - 1U, uVar12 != 0xffffffff)) {
          piVar13 = (int *)(param_1[4] + uVar12 * 0x18);
        }
        else {
          piVar13 = (int *)0x0;
        }
        if ((*(byte *)(piVar13 + 3) & 1) != 0) {
          iVar1 = *piVar13;
          fVar16 = fVar3 - *(float *)(iVar1 + 0x40);
          fVar14 = fVar2 - *(float *)(iVar1 + 0x3c);
          fVar15 = fVar4 - *(float *)(iVar1 + 0x38);
          fVar16 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
          if (fVar16 < _DAT_004a8d34 * _DAT_004a8d34) {
            FUN_000ea6c0(*(undefined4 *)(*(int *)(param_2 + 0x80) + 0xb74),param_2,0,*piVar13);
            fVar14 = fVar5;
            if (fVar6 <= fVar5) {
              fVar14 = fVar6;
            }
            fVar15 = fVar7;
            if (fVar14 <= fVar7) {
              fVar15 = fVar14;
            }
            fVar14 = 1.0 - fVar15 * *(float *)(param_2 + 0x2c);
            fVar16 = (SQRT(fVar16) - _DAT_004a8d38 * fVar14) /
                     ((_DAT_004a8d34 - _DAT_004a8d38) * fVar14);
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            if (1.0 <= fVar16) {
              fVar16 = 1.0;
            }
            fVar16 = 1.0 - (1.0 - *(float *)(param_2 + 0x2c)) * (1.0 - fVar16);
            if (fVar16 < 1.0) {
              *(float *)(param_2 + 0x2c) = fVar16;
              FUN_001f6e60(*(undefined4 *)(*(int *)(param_2 + 0x80) + 0xa40));
            }
          }
        }
      }
      *param_2 = *param_2 & 0xfb;
      param_2[0x24] = 0;
      param_2[0x25] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x2a] = 0x80;
      param_2[0x2b] = 0x3f;
      *(undefined4 *)(param_2 + 0x2c) = uVar8;
    }
  }
  return;
}
