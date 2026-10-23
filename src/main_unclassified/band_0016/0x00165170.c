/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F233F4A0D195FD00CD58F500C7DD19F3BA89376FC53F28BE9C9B55805E7242D2
 * Entry: 0x00165170, Ghidra index: 4694, label: FUN_00165170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00165170(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_EAX;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int local_1c;
  undefined4 *local_14;
  
  iVar1 = ((int)param_2 - (int)param_1) / 0x18;
  iVar6 = (in_EAX - (int)param_1) / 0x18;
  iVar2 = iVar6;
  local_1c = iVar1;
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar2 = local_1c % iVar3;
    local_1c = iVar3;
  }
  if ((local_1c < iVar1) && (0 < local_1c)) {
    piVar11 = param_1 + local_1c * 6 + 1;
    do {
      iVar1 = piVar11[-1];
      piVar13 = piVar11 + -1;
      if (*piVar11 == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        local_14 = (undefined4 *)FUN_002ea01d(4);
        if (local_14 == (undefined4 *)0x0) {
          local_14 = (undefined4 *)0x0;
        }
        else {
          *local_14 = 0;
        }
      }
      if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
        *local_14 = *(undefined4 *)*piVar11;
      }
      iVar2 = piVar11[1];
      iVar3 = piVar11[2];
      iVar4 = piVar11[3];
      iVar5 = piVar11[4];
      piVar10 = piVar11 + iVar6 * 6 + -1;
      if (piVar11 + iVar6 * 6 + -1 == param_2) {
        piVar10 = param_1;
      }
      piVar12 = piVar13;
      if (piVar10 != piVar11 + -1) {
        do {
          piVar13 = piVar10;
          *piVar12 = *piVar13;
          if (piVar13[1] == 0) {
            if (piVar12[1] != 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(piVar12[1]);
            }
            piVar12[1] = 0;
          }
          else if (piVar12[1] == 0) {
            puVar9 = (undefined4 *)FUN_002ea01d(4);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = 0;
            }
            piVar12[1] = (int)puVar9;
          }
          if ((undefined4 *)piVar13[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar12[1] = *(undefined4 *)piVar13[1];
          }
          uVar8 = 0;
          piVar10 = piVar13 + 2;
          do {
            piVar12[uVar8 + 2] = *piVar10;
            uVar8 = uVar8 + 1;
            piVar10 = piVar10 + 1;
          } while (uVar8 < 4);
          iVar7 = ((int)param_2 - (int)piVar13) / 0x18;
          if (iVar6 < iVar7) {
            piVar10 = piVar13 + iVar6 * 6;
          }
          else {
            piVar10 = param_1 + (iVar6 - iVar7) * 6;
          }
          piVar12 = piVar13;
        } while (piVar10 != piVar11 + -1);
      }
      *piVar13 = iVar1;
      if (local_14 == (undefined4 *)0x0) {
        if (piVar13[1] != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar13[1]);
        }
        piVar13[1] = 0;
      }
      else {
        if (piVar13[1] == 0) {
          puVar9 = (undefined4 *)FUN_002ea01d(4);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = 0;
          }
          piVar13[1] = (int)puVar9;
        }
        *(undefined4 *)piVar13[1] = *local_14;
      }
      piVar13[2] = iVar2;
      piVar13[3] = iVar3;
      piVar13[4] = iVar4;
      piVar13[5] = iVar5;
      if (local_14 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_14);
      }
      piVar11 = piVar11 + -6;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}
