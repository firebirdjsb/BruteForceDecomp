/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C9677FB1A7E1A8E14B860851198C5AFFE072DECEE9669ABACE32296FCC7BCFC
 * Entry: 0x0013b3f0, Ghidra index: 3984, label: FUN_0013b3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0013b3f0(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int **ppiVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar9 = param_3 - param_1 >> 3;
  iVar10 = (int)param_2 - param_1 >> 3;
  iVar11 = iVar10;
  local_1c = iVar9;
  while (iVar3 = iVar11, iVar3 != 0) {
    iVar11 = local_1c % iVar3;
    local_1c = iVar3;
  }
  if ((local_1c < iVar9) && (0 < local_1c)) {
    param_2 = (int *)(param_1 + local_1c * 8);
    iVar11 = iVar10 * 8 + local_1c * 8 + param_1;
    do {
      local_4 = 0;
      uVar6 = *(uint *)(iVar10 * -8 + 4 + iVar11);
      if ((uVar6 != 0) && (local_4 = uVar6, (uVar6 & 1) == 0)) {
        uVar6 = uVar6 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_8 = *(undefined4 *)(&DAT_00414da0 + uVar6 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar6 * 4) = &local_8;
      }
      if (iVar11 == param_3) {
        piVar7 = &param_1;
      }
      else {
        local_14 = iVar11;
        piVar7 = &local_14;
      }
      piVar5 = (int *)*piVar7;
      piVar7 = param_2;
      while (piVar4 = piVar5, piVar4 != param_2) {
        uVar6 = piVar7[1];
        uVar1 = piVar4[1];
        if (uVar6 != uVar1) {
          if ((uVar6 != 0) && ((uVar6 & 1) == 0)) {
            piVar7[1] = 0;
            iVar9 = *(int *)(&DAT_00414da0 + (uVar6 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            piVar5 = (int *)(&DAT_00414da0 + (uVar6 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (iVar9 != 0) {
              piVar2 = (int *)*piVar5;
              if (piVar2 == piVar7) {
                *piVar5 = *(int *)*piVar5;
                break;
              }
              piVar5 = piVar2;
              iVar9 = *piVar2;
            }
          }
          piVar7[1] = uVar1;
          if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
            uVar6 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
            *piVar7 = *(int *)(&DAT_00414da0 + uVar6 * 4);
            *(int **)(&DAT_00414da0 + uVar6 * 4) = piVar7;
          }
        }
        iVar9 = param_3 - (int)piVar4 >> 3;
        if (iVar10 < iVar9) {
          local_10 = piVar4 + iVar10 * 2;
          ppiVar8 = &local_10;
        }
        else {
          local_c = (int *)(param_1 + (iVar10 - iVar9) * 8);
          ppiVar8 = &local_c;
        }
        piVar7 = piVar4;
        piVar5 = *ppiVar8;
      }
      if (piVar7[1] != local_4) {
        FUN_0008f6a0(local_4);
      }
      if (local_4 != 0) {
        FUN_0008f6e0();
      }
      param_2 = param_2 + -2;
      iVar11 = iVar11 + -8;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}
