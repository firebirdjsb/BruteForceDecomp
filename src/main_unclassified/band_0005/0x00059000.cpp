/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B4232635402379CA38E5B876724439374DC2414CEF275C1D5CB9291421BAF4C
 * Entry: 0x00059000, Ghidra index: 889, label: FUN_00059000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000e1150(int param_1,undefined4 *param_2,int *param_3,int *param_4);
extern int FUN_00058e10(int param_1);
extern float10 FUN_00058ef0(void);
extern void FUN_001611d0(void);
extern void FUN_00059920(int param_1,int param_2,int param_3);
extern void FUN_00059850(void);
extern float10 FUN_00058f50(void);
extern int FUN_000e1910(void);
extern void FUN_000389d0(void);
extern void FUN_00058d90(void);

extern uint32_t DAT_00414da0;
extern uint32_t DAT_004a5900;
/* XBE 0x59003/0x59026 use [0x004021a8] as an x87 f32 operand. */
extern float _DAT_004021a8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00059000(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int **ppiVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int **ppiVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  float10 fVar14;
  undefined1 local_31;
  float local_30;
  int *local_2c;
  int *local_1c;
  uint local_18;
  uint *local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = -1.0;
  if (0.0 < _DAT_004021a8) {
    local_30 = _DAT_004021a8 * _DAT_004021a8;
  }
  puVar1 = *(undefined4 **)(param_3 + 4);
  uVar12 = 0;
  local_10 = (uint *)0x0;
  local_c = 0;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar12 = *puVar1;
  }
  FUN_000e1150(param_3,&local_1c,uVar12,puVar1);
  iVar8 = FUN_00058e10(param_1);
  *(undefined4 *)(iVar8 + 8) = 0;
  fVar14 = (float10)FUN_00058ef0();
  *(float *)(iVar8 + 0xc) = (float)fVar14;
  *(undefined4 *)(iVar8 + 4) = 0;
  *(float *)(iVar8 + 0x10) = (float)(fVar14 + (float10)*(float *)(iVar8 + 8));
  FUN_001611d0();
  iVar9 = local_c;
  puVar13 = local_10;
  if (1 < local_c - (int)local_10 >> 2) {
    FUN_00059920(local_10,0,*(undefined4 *)(local_c + -4),local_4);
  }
  *(undefined1 *)(iVar8 + 0x14) = 1;
  local_31 = 0;
  while( true ) {
    if ((puVar13 == (uint *)0x0) || (iVar9 - (int)puVar13 >> 2 == 0)) goto LAB_00059472;
    uVar11 = *puVar13;
    iVar9 = FUN_00058e10(uVar11);
    FUN_00059850();
    *(undefined1 *)(iVar9 + 0x14) = 0;
    if (uVar11 == param_2) break;
    local_2c = (int *)0x0;
    if (*(undefined4 **)(uVar11 + 0x30) != (undefined4 *)0x0) {
      local_2c = (int *)**(undefined4 **)(uVar11 + 0x30);
    }
    local_1c = *(int **)(uVar11 + 0x30);
    if (local_2c != local_1c) {
      do {
        iVar9 = local_2c[3];
        if ((((*(uint *)(iVar9 + 0x28) & 8) == 0) &&
            (((*(uint *)(iVar9 + 0x28) & 4) != 0 ||
             ((*(int *)(DAT_004a5900 + 4) != 0 &&
              ((*(int *)(DAT_004a5900 + 8) - *(int *)(DAT_004a5900 + 4)) / 0x18 == 1)))))) &&
           ((local_30 <= 0.0 ||
            (fVar4 = *(float *)(iVar9 + 0x1c) - *(float *)(param_1 + 0x1c),
            fVar6 = *(float *)(iVar9 + 0x18) - *(float *)(param_1 + 0x18),
            fVar5 = *(float *)(iVar9 + 0x14) - *(float *)(param_1 + 0x14),
            fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5 <= local_30)))) {
          iVar8 = FUN_00058e10(uVar11);
          fVar14 = (float10)FUN_00058f50();
          iVar8 = (int)(fVar14 + (float10)*(float *)(iVar8 + 8));
          iVar10 = FUN_00058e10(iVar9);
          if (((*(char *)(iVar10 + 0x14) == '\0') && (*(char *)(iVar10 + 0x15) == '\0')) ||
             ((float)iVar8 < *(float *)(iVar10 + 8))) {
            *(uint *)(iVar10 + 4) = uVar11;
            *(float *)(iVar10 + 8) = (float)iVar8;
            fVar14 = (float10)FUN_00058ef0();
            *(float *)(iVar10 + 0xc) = (float)fVar14;
            *(float *)(iVar10 + 0x10) = (float)(fVar14 + (float10)*(float *)(iVar10 + 8));
            if (*(char *)(iVar10 + 0x15) != '\0') {
              iVar9 = FUN_00058e10(iVar9);
              *(undefined1 *)(iVar9 + 0x15) = 0;
            }
            if (*(char *)(iVar10 + 0x14) == '\0') {
              FUN_001611d0();
              if (1 < local_c - (int)local_10 >> 2) {
                FUN_00059920(local_10,0,*(undefined4 *)(local_c + -4),local_4);
              }
              *(undefined1 *)(iVar10 + 0x14) = 1;
            }
          }
        }
        local_2c = (int *)*local_2c;
      } while (local_2c != local_1c);
    }
    iVar9 = FUN_00058e10(uVar11);
    *(undefined1 *)(iVar9 + 0x15) = 1;
    iVar9 = local_c;
    puVar13 = local_10;
  }
  iVar9 = FUN_00058e10(param_2);
  for (iVar9 = *(int *)(iVar9 + 4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
    iVar9 = 0;
    local_18 = 0;
    if ((param_2 != 0) && (local_18 = param_2, (param_2 & 1) == 0)) {
      uVar11 = param_2 * 0x19660d + 0x3c6ef35f >> 0x15;
      local_1c = *(int **)(&DAT_00414da0 + uVar11 * 4);
      *(int ***)(&DAT_00414da0 + uVar11 * 4) = &local_1c;
    }
    if (*(int **)(param_3 + 4) != (int *)0x0) {
      iVar9 = **(int **)(param_3 + 4);
    }
    iVar8 = FUN_000e1910(param_3,iVar9,*(undefined4 *)(iVar9 + 4),&local_1c);
    FUN_000389d0();
    *(int *)(iVar9 + 4) = iVar8;
    **(int **)(iVar8 + 4) = iVar8;
    if ((local_18 != 0) && ((local_18 & 1) == 0)) {
      iVar9 = local_18 * 0x19660d;
      local_18 = 0;
      piVar2 = *(int **)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
      ppiVar7 = (int **)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
      while (piVar2 != (int *)0x0) {
        ppiVar3 = (int **)*ppiVar7;
        if (ppiVar3 == &local_1c) {
          *ppiVar7 = (int *)**ppiVar7;
          break;
        }
        ppiVar7 = ppiVar3;
        piVar2 = *ppiVar3;
      }
    }
    iVar9 = FUN_00058e10(param_2);
    param_2 = *(uint *)(iVar9 + 4);
    iVar9 = FUN_00058e10(param_2);
  }
  iVar9 = 0;
  local_18 = 0;
  if ((param_2 != 0) && (local_18 = param_2, (param_2 & 1) == 0)) {
    uVar11 = param_2 * 0x19660d + 0x3c6ef35f >> 0x15;
    local_1c = *(int **)(&DAT_00414da0 + uVar11 * 4);
    *(int ***)(&DAT_00414da0 + uVar11 * 4) = &local_1c;
  }
  if (*(int **)(param_3 + 4) != (int *)0x0) {
    iVar9 = **(int **)(param_3 + 4);
  }
  iVar8 = FUN_000e1910(param_3,iVar9,*(undefined4 *)(iVar9 + 4),&local_1c);
  FUN_000389d0();
  *(int *)(iVar9 + 4) = iVar8;
  **(int **)(iVar8 + 4) = iVar8;
  if ((local_18 != 0) && ((local_18 & 1) == 0)) {
    iVar9 = local_18 * 0x19660d;
    local_18 = 0;
    piVar2 = *(int **)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
    ppiVar7 = (int **)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
    while (piVar2 != (int *)0x0) {
      ppiVar3 = (int **)*ppiVar7;
      if (ppiVar3 == &local_1c) {
        *ppiVar7 = (int *)**ppiVar7;
        break;
      }
      ppiVar7 = ppiVar3;
      piVar2 = *ppiVar3;
    }
  }
  local_31 = 1;
  puVar13 = local_10;
LAB_00059472:
  FUN_00058d90();
  if (puVar13 == (uint *)0x0) {
    return local_31;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(puVar13);
}
