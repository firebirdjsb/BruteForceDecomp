/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04CAA60E20F90704ADEF8023EDE13532BEC086342ECCD417F60EA19C8FB2EC55
 * Entry: 0x00139db0, Ghidra index: 3969, label: FUN_00139db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_00139db0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  piVar1 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_0013ad60(param_2,piVar1,param_3 + -2,param_4,param_5,param_6,param_7);
  piVar6 = piVar1;
  while (local_48 = piVar6, param_2 < local_48) {
    cVar7 = FUN_00135d60();
    if ((cVar7 != '\0') || (cVar7 = FUN_00135d60(), piVar6 = local_48 + -2, cVar7 != '\0')) break;
  }
  do {
    piVar1 = piVar1 + 2;
    piVar6 = piVar1;
    local_50 = local_48;
    if (param_3 <= piVar1) break;
    cVar7 = FUN_00135d60();
    if ((cVar7 != '\0') || (cVar7 = FUN_00135d60(), cVar7 != '\0')) break;
  } while( true );
joined_r0x00139ea9:
  piVar9 = local_48;
  local_4c = piVar1;
  if (param_3 <= piVar6) {
joined_r0x0013a00b:
    for (; param_2 < piVar9; piVar9 = piVar9 + -2) {
      piVar12 = local_48 + -2;
      cVar7 = FUN_00135d60();
      if (cVar7 == '\0') {
        cVar7 = FUN_00135d60();
        if (cVar7 != '\0') break;
        uVar8 = local_50[-1];
        piVar11 = local_50 + -2;
        local_34 = 0;
        if ((uVar8 != 0) && (local_34 = uVar8, (uVar8 & 1) == 0)) {
          uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
          local_38 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_38;
        }
        uVar8 = local_50[-1];
        uVar3 = local_48[-1];
        if (uVar3 != uVar8) {
          if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
            local_50[-1] = 0;
            iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            piVar5 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (iVar2 != 0) {
              piVar4 = (int *)*piVar5;
              if (piVar4 == piVar11) {
                *piVar5 = *(int *)*piVar5;
                break;
              }
              piVar5 = piVar4;
              iVar2 = *piVar4;
            }
          }
          local_50[-1] = uVar3;
          if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
            uVar8 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
            *piVar11 = *(int *)(&DAT_00414da0 + uVar8 * 4);
            *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar11;
          }
        }
        uVar8 = local_48[-1];
        if (uVar8 != local_34) {
          if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
            local_48[-1] = 0;
            iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            piVar5 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (iVar2 != 0) {
              piVar4 = (int *)*piVar5;
              if (piVar4 == piVar12) {
                *piVar5 = *(int *)*piVar5;
                break;
              }
              piVar5 = piVar4;
              iVar2 = *piVar4;
            }
          }
          local_48[-1] = local_34;
          if ((local_34 != 0) && ((local_34 & 1) == 0)) {
            uVar8 = local_34 * 0x19660d + 0x3c6ef35f >> 0x15;
            *piVar12 = *(int *)(&DAT_00414da0 + uVar8 * 4);
            *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar12;
          }
        }
        local_50 = piVar11;
        if ((local_34 != 0) && ((local_34 & 1) == 0)) {
          iVar10 = local_34 * 0x19660d;
          local_34 = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          piVar11 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar5 = (int *)*piVar11;
            if (piVar5 == &local_38) {
              *piVar11 = *(int *)*piVar11;
              break;
            }
            piVar11 = piVar5;
            iVar2 = *piVar5;
          }
        }
      }
      local_48 = piVar12;
    }
    if (piVar9 == param_2) {
      if (piVar6 == param_3) {
        *param_1 = local_50;
        param_1[1] = piVar1;
        return;
      }
      if (piVar1 != piVar6) {
        uVar8 = local_50[1];
        local_2c = 0;
        if ((uVar8 != 0) && (local_2c = uVar8, (uVar8 & 1) == 0)) {
          uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
          local_30 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_30;
        }
        uVar8 = local_50[1];
        uVar3 = piVar1[1];
        if (uVar8 != uVar3) {
          if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
            local_50[1] = 0;
            iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            piVar12 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (iVar2 != 0) {
              piVar11 = (int *)*piVar12;
              if (piVar11 == local_50) {
                *piVar12 = *(int *)*piVar12;
                break;
              }
              piVar12 = piVar11;
              iVar2 = *piVar11;
            }
          }
          local_50[1] = uVar3;
          if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
            uVar8 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
            *local_50 = *(int *)(&DAT_00414da0 + uVar8 * 4);
            *(int **)(&DAT_00414da0 + uVar8 * 4) = local_50;
          }
        }
        uVar8 = piVar1[1];
        if (uVar8 != local_2c) {
          if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
            piVar1[1] = 0;
            iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            piVar12 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (iVar2 != 0) {
              piVar11 = (int *)*piVar12;
              if (piVar11 == piVar1) {
                *piVar12 = *(int *)*piVar12;
                break;
              }
              piVar12 = piVar11;
              iVar2 = *piVar11;
            }
          }
          piVar1[1] = local_2c;
          if ((local_2c != 0) && ((local_2c & 1) == 0)) {
            uVar8 = local_2c * 0x19660d + 0x3c6ef35f >> 0x15;
            *piVar1 = *(int *)(&DAT_00414da0 + uVar8 * 4);
            *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar1;
          }
        }
        if ((local_2c != 0) && ((local_2c & 1) == 0)) {
          iVar10 = local_2c * 0x19660d;
          local_2c = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          piVar12 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar11 = (int *)*piVar12;
            if (piVar11 == &local_30) {
              *piVar12 = *(int *)*piVar12;
              break;
            }
            piVar12 = piVar11;
            iVar2 = *piVar11;
          }
        }
      }
      piVar1 = piVar1 + 2;
      local_44 = piVar6 + 2;
      piVar12 = local_50 + 2;
      uVar8 = local_50[1];
      local_24 = 0;
      if ((uVar8 != 0) && (local_24 = uVar8, (uVar8 & 1) == 0)) {
        uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_28 = *(int *)(&DAT_00414da0 + uVar8 * 4);
        *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_28;
      }
      uVar8 = local_50[1];
      uVar3 = piVar6[1];
      if (uVar8 != uVar3) {
        if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
          local_50[1] = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          piVar11 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar5 = (int *)*piVar11;
            if (piVar5 == local_50) {
              *piVar11 = *(int *)*piVar11;
              break;
            }
            piVar11 = piVar5;
            iVar2 = *piVar5;
          }
        }
        local_50[1] = uVar3;
        if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
          uVar8 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
          *local_50 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = local_50;
        }
      }
      uVar8 = piVar6[1];
      if (uVar8 != local_24) {
        if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
          piVar6[1] = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          piVar11 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar5 = (int *)*piVar11;
            if (piVar5 == piVar6) {
              *piVar11 = *(int *)*piVar11;
              break;
            }
            piVar11 = piVar5;
            iVar2 = *piVar5;
          }
        }
        piVar6[1] = local_24;
        if ((local_24 != 0) && ((local_24 & 1) == 0)) {
          uVar8 = local_24 * 0x19660d + 0x3c6ef35f >> 0x15;
          *piVar6 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar6;
        }
      }
      piVar6 = local_44;
      local_48 = piVar9;
      local_50 = piVar12;
      if ((local_24 != 0) && ((local_24 & 1) == 0)) {
        iVar10 = local_24 * 0x19660d;
        local_24 = 0;
        iVar2 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
        piVar9 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar2 != 0) {
          piVar12 = (int *)*piVar9;
          local_4c = piVar1;
          if (piVar12 == &local_28) goto LAB_0013a838;
          piVar9 = piVar12;
          iVar2 = *piVar12;
        }
      }
    }
    else if (piVar6 == param_3) {
      piVar12 = local_50 + -2;
      local_48 = piVar9 + -2;
      if (local_48 != piVar12) {
        uVar8 = piVar9[-1];
        local_1c = 0;
        if ((uVar8 != 0) && (local_1c = uVar8, (uVar8 & 1) == 0)) {
          uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
          local_20 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_20;
        }
        uVar8 = piVar9[-1];
        uVar3 = local_50[-1];
        if (uVar8 != uVar3) {
          if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
            piVar9[-1] = 0;
            iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            piVar11 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (iVar2 != 0) {
              piVar5 = (int *)*piVar11;
              if (piVar5 == local_48) {
                *piVar11 = *(int *)*piVar11;
                break;
              }
              piVar11 = piVar5;
              iVar2 = *piVar5;
            }
          }
          piVar9[-1] = uVar3;
          if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
            uVar8 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
            *local_48 = *(int *)(&DAT_00414da0 + uVar8 * 4);
            *(int **)(&DAT_00414da0 + uVar8 * 4) = local_48;
          }
        }
        uVar8 = local_50[-1];
        if (uVar8 != local_1c) {
          if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
            local_50[-1] = 0;
            iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            piVar9 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (iVar2 != 0) {
              piVar11 = (int *)*piVar9;
              if (piVar11 == piVar12) {
                *piVar9 = *(int *)*piVar9;
                break;
              }
              piVar9 = piVar11;
              iVar2 = *piVar11;
            }
          }
          local_50[-1] = local_1c;
          if ((local_1c != 0) && ((local_1c & 1) == 0)) {
            uVar8 = local_1c * 0x19660d + 0x3c6ef35f >> 0x15;
            *piVar12 = *(int *)(&DAT_00414da0 + uVar8 * 4);
            *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar12;
          }
        }
        if ((local_1c != 0) && ((local_1c & 1) == 0)) {
          iVar10 = local_1c * 0x19660d;
          local_1c = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          piVar9 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar11 = (int *)*piVar9;
            if (piVar11 == &local_20) {
              *piVar9 = *(int *)*piVar9;
              break;
            }
            piVar9 = piVar11;
            iVar2 = *piVar11;
          }
        }
      }
      uVar8 = local_50[-1];
      local_4c = piVar1 + -2;
      local_14 = 0;
      if ((uVar8 != 0) && (local_14 = uVar8, (uVar8 & 1) == 0)) {
        uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_18 = *(int *)(&DAT_00414da0 + uVar8 * 4);
        *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_18;
      }
      uVar8 = local_50[-1];
      uVar3 = piVar1[-1];
      if (uVar8 != uVar3) {
        if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
          local_50[-1] = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          piVar9 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar11 = (int *)*piVar9;
            if (piVar11 == piVar12) {
              *piVar9 = *(int *)*piVar9;
              break;
            }
            piVar9 = piVar11;
            iVar2 = *piVar11;
          }
        }
        local_50[-1] = uVar3;
        if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
          uVar8 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
          *piVar12 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar12;
        }
      }
      uVar8 = piVar1[-1];
      if (uVar8 != local_14) {
        if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
          piVar1[-1] = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          piVar9 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar11 = (int *)*piVar9;
            if (piVar11 == local_4c) {
              *piVar9 = *(int *)*piVar9;
              break;
            }
            piVar9 = piVar11;
            iVar2 = *piVar11;
          }
        }
        piVar1[-1] = local_14;
        if ((local_14 != 0) && ((local_14 & 1) == 0)) {
          uVar8 = local_14 * 0x19660d + 0x3c6ef35f >> 0x15;
          *local_4c = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = local_4c;
        }
      }
      piVar1 = local_4c;
      local_50 = piVar12;
      if ((local_14 != 0) && ((local_14 & 1) == 0)) {
        iVar10 = local_14 * 0x19660d;
        local_14 = 0;
        iVar2 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
        piVar9 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar2 != 0) {
          piVar12 = (int *)*piVar9;
          local_44 = piVar6;
          if (piVar12 == &local_18) goto LAB_0013a838;
          piVar9 = piVar12;
          iVar2 = *piVar12;
        }
      }
    }
    else {
      local_44 = piVar6 + 2;
      uVar8 = piVar6[1];
      local_48 = piVar9 + -2;
      local_c = 0;
      if ((uVar8 != 0) && (local_c = uVar8, (uVar8 & 1) == 0)) {
        uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_10 = *(int *)(&DAT_00414da0 + uVar8 * 4);
        *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_10;
      }
      uVar8 = piVar6[1];
      uVar3 = piVar9[-1];
      if (uVar8 != uVar3) {
        if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
          piVar6[1] = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          piVar12 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar11 = (int *)*piVar12;
            if (piVar11 == piVar6) {
              *piVar12 = *(int *)*piVar12;
              break;
            }
            piVar12 = piVar11;
            iVar2 = *piVar11;
          }
        }
        piVar6[1] = uVar3;
        if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
          uVar8 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
          *piVar6 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar6;
        }
      }
      uVar8 = piVar9[-1];
      if (uVar8 != local_c) {
        if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
          piVar9[-1] = 0;
          iVar2 = *(int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          piVar6 = (int *)(&DAT_00414da0 + (uVar8 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
          while (iVar2 != 0) {
            piVar12 = (int *)*piVar6;
            if (piVar12 == local_48) {
              *piVar6 = *(int *)*piVar6;
              break;
            }
            piVar6 = piVar12;
            iVar2 = *piVar12;
          }
        }
        piVar9[-1] = local_c;
        if ((local_c != 0) && ((local_c & 1) == 0)) {
          uVar8 = local_c * 0x19660d + 0x3c6ef35f >> 0x15;
          *local_48 = *(int *)(&DAT_00414da0 + uVar8 * 4);
          *(int **)(&DAT_00414da0 + uVar8 * 4) = local_48;
        }
      }
      piVar6 = local_44;
      if ((local_c != 0) && ((local_c & 1) == 0)) {
        iVar10 = local_c * 0x19660d;
        local_c = 0;
        iVar2 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
        piVar9 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar2 != 0) {
          piVar12 = (int *)*piVar9;
          if (piVar12 == &local_10) goto LAB_0013a838;
          piVar9 = piVar12;
          iVar2 = *piVar12;
        }
      }
    }
    goto joined_r0x00139ea9;
  }
  cVar7 = FUN_00135d60();
  if (cVar7 == '\0') {
    cVar7 = FUN_00135d60();
    if (cVar7 != '\0') goto joined_r0x0013a00b;
    local_4c = piVar1 + 2;
    uVar8 = piVar1[1];
    local_3c = 0;
    if ((uVar8 != 0) && (local_3c = uVar8, (uVar8 & 1) == 0)) {
      uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
      local_40 = *(int *)(&DAT_00414da0 + uVar8 * 4);
      *(int **)(&DAT_00414da0 + uVar8 * 4) = &local_40;
    }
    uVar8 = piVar6[1];
    if (piVar1[1] != uVar8) {
      if (piVar1[1] != 0) {
        FUN_0008f6e0();
      }
      piVar1[1] = uVar8;
      if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
        uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
        *piVar1 = *(int *)(&DAT_00414da0 + uVar8 * 4);
        *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar1;
      }
    }
    uVar8 = local_3c;
    if (piVar6[1] != local_3c) {
      if (piVar6[1] != 0) {
        FUN_0008f6e0();
      }
      piVar6[1] = uVar8;
      if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
        uVar8 = uVar8 * 0x19660d + 0x3c6ef35f >> 0x15;
        *piVar6 = *(int *)(&DAT_00414da0 + uVar8 * 4);
        *(int **)(&DAT_00414da0 + uVar8 * 4) = piVar6;
      }
    }
    if ((local_3c != 0) && ((local_3c & 1) == 0)) {
      iVar10 = local_3c * 0x19660d;
      local_3c = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
      piVar1 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar9 = (int *)*piVar1;
        if (piVar9 == &local_40) {
          *piVar1 = *(int *)*piVar1;
          break;
        }
        piVar1 = piVar9;
        iVar2 = *piVar9;
      }
    }
  }
  piVar1 = local_4c;
  piVar6 = piVar6 + 2;
  goto joined_r0x00139ea9;
LAB_0013a838:
  *piVar9 = *(int *)*piVar9;
  piVar1 = local_4c;
  piVar6 = local_44;
  goto joined_r0x00139ea9;
}
