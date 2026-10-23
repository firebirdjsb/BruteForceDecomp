/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CB42B68A5059921E0536914BA67F7EE5A9099566E79F3DC0BFA937F2609428F
 * Entry: 0x000d25e0, Ghidra index: 2613, label: FUN_000d25e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d25e0(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fStack_4c;
  undefined1 auStack_34 [52];
  
  iVar4 = param_1[1];
  if (iVar4 != -1) {
    iVar8 = param_1[2];
    if (iVar8 < iVar4) {
      iVar4 = (iVar8 - iVar4) + 1 + *param_1;
    }
    else {
      iVar4 = (iVar8 - iVar4) + 1;
    }
    if (0 < iVar4) {
      piVar1 = (int *)(*(int *)(param_2 + 0x8c) + 0x48);
      uVar5 = (**(code **)(*piVar1 + 0x14))();
      uVar2 = *(undefined4 *)(param_2 + 0x90);
      uVar3 = *(undefined4 *)(param_2 + 0x184);
      iVar4 = param_1[1];
      if (iVar4 == -1) {
        iVar4 = 0;
      }
      else {
        iVar8 = param_1[2];
        if (iVar8 < iVar4) {
          iVar4 = (iVar8 - iVar4) + 1 + *param_1;
        }
        else {
          iVar4 = (iVar8 - iVar4) + 1;
        }
      }
      iVar4 = iVar4 + -1;
      if (-1 < iVar4) {
        fStack_4c = 1.0;
        do {
          iVar8 = param_1[1];
          if (iVar8 == -1) {
            iVar6 = 0;
          }
          else {
            iVar6 = param_1[2];
            if (iVar6 < iVar8) {
              iVar6 = (iVar6 - iVar8) + 1 + *param_1;
            }
            else {
              iVar6 = (iVar6 - iVar8) + 1;
            }
          }
          if ((((iVar4 < iVar6) && (-1 < iVar4)) && (-1 < iVar8)) &&
             (uVar7 = iVar8 + iVar4 & *param_1 - 1U, uVar7 != 0xffffffff)) {
            iVar8 = param_1[4] + uVar7 * 0x18;
          }
          else {
            iVar8 = 0;
          }
          fVar9 = *(float *)(iVar8 + 8) * (float)param_1[9];
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          if (1.0 <= fVar9) {
            fVar9 = fStack_4c;
          }
          *(float *)(param_2 + 0x90) = fVar9;
          *(int *)(param_2 + 0x184) = (*(int *)(iVar8 + 0x10) << 0x1e) >> 0x1e;
          FUN_00236a50(piVar1,uVar5,0,*(undefined4 *)(param_2 + 0x180),param_2,auStack_34);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      *(undefined4 *)(param_2 + 0x90) = uVar2;
      *(undefined4 *)(param_2 + 0x184) = uVar3;
    }
  }
  return;
}
