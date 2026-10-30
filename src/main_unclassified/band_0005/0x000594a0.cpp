/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDBC616A416AFC63882448FEDD49C47D2FE5DBF9FD9A2D1BE9E564CCDE914ADA
 * Entry: 0x000594a0, Ghidra index: 890, label: FUN_000594a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_004a5900;
uint FUN_000594a0(int param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  int **ppiVar4;
  float fVar5;
  int **ppiVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint local_24;
  int *local_14;
  uint uStack_10;
  float fStack_8;
  float fStack_4;
  
  local_24 = 0;
  iVar8 = FUN_00058e10(param_1);
  uVar12 = 0;
  *(undefined4 *)(iVar8 + 4) = 0;
  fVar1 = *(float *)(param_2[1] + 0x110);
  iVar8 = DAT_004a5900;
  if (param_3 != 0) {
    puVar2 = *(undefined4 **)(param_3 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar12 = *puVar2;
    }
    FUN_000e1150(param_3,&local_14,uVar12,puVar2);
    iVar8 = DAT_004a5900;
  }
  do {
    if (*(int *)(iVar8 + 4) == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = (*(int *)(iVar8 + 8) - *(int *)(iVar8 + 4)) / 0x18;
    }
    iVar15 = iVar15 + -1;
    iVar13 = iVar15 * 0x18;
    if (*(char *)(*(int *)(iVar8 + 4) + 0x15 + iVar13) != '\0') goto LAB_0005982d;
    for (; -1 < iVar15; iVar15 = iVar15 + -1) {
      iVar10 = *(int *)(iVar8 + 4);
      uVar3 = *(uint *)(iVar10 + iVar13);
      piVar16 = (int *)(iVar10 + iVar13);
      if (*(char *)(iVar10 + 0x15 + iVar13) != '\0') break;
      cVar7 = (**(code **)*param_2)(uVar3);
      if (cVar7 != '\0') {
        local_24 = uVar3;
        if (param_3 == 0) goto LAB_0005982d;
        iVar8 = FUN_00058e10(uVar3);
        iVar8 = *(int *)(iVar8 + 4);
        goto joined_r0x0005968c;
      }
      iVar8 = *piVar16;
      puVar2 = *(undefined4 **)(iVar8 + 0x30);
      piVar9 = (int *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar9 = (int *)*puVar2;
      }
      piVar14 = *(int **)(iVar8 + 0x30);
      local_14 = piVar14;
      if (piVar9 != piVar14) {
        do {
          iVar8 = piVar9[3];
          if (((*(uint *)(iVar8 + 0x28) & 8) == 0) && ((*(uint *)(iVar8 + 0x28) & 4) != 0)) {
            fStack_4 = *(float *)(iVar8 + 0x1c) - *(float *)(param_1 + 0x1c);
            fStack_8 = *(float *)(iVar8 + 0x18) - *(float *)(param_1 + 0x18);
            fVar5 = *(float *)(iVar8 + 0x14) - *(float *)(param_1 + 0x14);
            if (fVar5 * fVar5 + fStack_8 * fStack_8 + fStack_4 * fStack_4 <= fVar1 * fVar1) {
              if ((param_3 != 0) && ((*(uint *)(iVar8 + 0x24) & 0xffff0000) == 0xffff0000)) {
                iVar10 = FUN_00058e10(iVar8);
                *(uint *)(iVar10 + 4) = uVar3;
              }
              FUN_00058e10(iVar8);
              piVar14 = local_14;
            }
          }
          piVar9 = (int *)*piVar9;
        } while (piVar9 != piVar14);
      }
      iVar13 = iVar13 + -0x18;
      *(undefined1 *)((int)piVar16 + 0x15) = 1;
      iVar8 = DAT_004a5900;
    }
  } while( true );
joined_r0x0005968c:
  if (iVar8 == 0) goto LAB_00059772;
  iVar8 = 0;
  uStack_10 = 0;
  if ((uVar3 != 0) && (uStack_10 = uVar3, (uVar3 & 1) == 0)) {
    uVar11 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
    local_14 = *(int **)(&DAT_00414da0 + uVar11 * 4);
    *(int ***)(&DAT_00414da0 + uVar11 * 4) = &local_14;
  }
  if (*(int **)(param_3 + 4) != (int *)0x0) {
    iVar8 = **(int **)(param_3 + 4);
  }
  iVar15 = FUN_000e1910(param_3,iVar8,*(undefined4 *)(iVar8 + 4),&local_14);
  FUN_000389d0();
  *(int *)(iVar8 + 4) = iVar15;
  **(int **)(iVar15 + 4) = iVar15;
  if ((uStack_10 != 0) && ((uStack_10 & 1) == 0)) {
    iVar8 = uStack_10 * 0x19660d;
    uStack_10 = 0;
    piVar16 = *(int **)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
    ppiVar6 = (int **)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
    while (piVar16 != (int *)0x0) {
      ppiVar4 = (int **)*ppiVar6;
      if (ppiVar4 == &local_14) {
        *ppiVar6 = (int *)**ppiVar6;
        break;
      }
      ppiVar6 = ppiVar4;
      piVar16 = *ppiVar4;
    }
  }
  iVar8 = FUN_00058e10(uVar3);
  uVar3 = *(uint *)(iVar8 + 4);
  iVar8 = FUN_00058e10(uVar3);
  iVar8 = *(int *)(iVar8 + 4);
  goto joined_r0x0005968c;
LAB_00059772:
  iVar8 = 0;
  uStack_10 = 0;
  if ((uVar3 != 0) && (uStack_10 = uVar3, (uVar3 & 1) == 0)) {
    uVar11 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
    local_14 = *(int **)(&DAT_00414da0 + uVar11 * 4);
    *(int ***)(&DAT_00414da0 + uVar11 * 4) = &local_14;
  }
  if (*(int **)(param_3 + 4) != (int *)0x0) {
    iVar8 = **(int **)(param_3 + 4);
  }
  iVar15 = FUN_000e1910(param_3,iVar8,*(undefined4 *)(iVar8 + 4),&local_14);
  FUN_000389d0();
  *(int *)(iVar8 + 4) = iVar15;
  **(int **)(iVar15 + 4) = iVar15;
  if ((uStack_10 != 0) && ((uStack_10 & 1) == 0)) {
    iVar8 = uStack_10 * 0x19660d;
    uStack_10 = 0;
    piVar16 = *(int **)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
    ppiVar6 = (int **)(&DAT_00414da0 + (iVar8 + 0x3c6ef35fU >> 0x15) * 4);
    while (piVar16 != (int *)0x0) {
      ppiVar4 = (int **)*ppiVar6;
      if (ppiVar4 == &local_14) {
        *ppiVar6 = (int *)**ppiVar6;
        break;
      }
      ppiVar6 = ppiVar4;
      piVar16 = *ppiVar4;
    }
  }
LAB_0005982d:
  FUN_00058d90();
  return local_24;
}
