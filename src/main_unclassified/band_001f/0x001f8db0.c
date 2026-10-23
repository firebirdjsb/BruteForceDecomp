/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E172DCC1CDA08273709F9E9839B28BF13A40DBB3C4E90BA83BBE0FDE8B7C5C8F
 * Entry: 0x001f8db0, Ghidra index: 7072, label: FUN_001f8db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_LAB_003a3fb4;
extern uint32_t PTR_LAB_003a4f50;
uint FUN_001f8db0(undefined4 *param_1,uint param_2,char param_3)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  bool bVar6;
  undefined ***pppuVar7;
  int *in_EAX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int *piVar15;
  int local_50;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined **local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((in_EAX[0x39] == 0) && (*(int *)(param_2 + 8) == 0)) {
    return param_2 & 0xffffff00;
  }
  puVar8 = (undefined4 *)FUN_00061500(local_4c);
  local_44 = 0;
  bVar6 = true;
  if (in_EAX[0x39] != 0) {
    if ((undefined4 *)in_EAX[0x38] == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14 = *(undefined4 **)in_EAX[0x38];
    }
    for (; puVar14 != (undefined4 *)in_EAX[0x38]; puVar14 = (undefined4 *)*puVar14) {
      if ((0.1 <= (float)puVar14[4]) || (puVar14[4] == -0x40800000)) {
        bVar6 = false;
        break;
      }
    }
  }
  piVar15 = (int *)0x0;
  if ((undefined4 *)in_EAX[0x38] != (undefined4 *)0x0) {
    piVar15 = *(int **)in_EAX[0x38];
  }
  local_48 = puVar8;
  if (piVar15 != (int *)in_EAX[0x38]) {
    do {
      iVar10 = piVar15[3];
      if (iVar10 != 0) {
        if (0.0 <= (float)piVar15[4]) {
          piVar15[4] = (int)((float)param_1 + (float)piVar15[4]);
        }
        puVar14 = *(undefined4 **)(param_2 + 4);
        if (puVar14 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9 = (undefined4 *)*puVar14;
        }
        if (puVar9 != puVar14) {
          do {
            if (puVar9[3] == iVar10) break;
            puVar9 = (undefined4 *)*puVar9;
          } while (puVar9 != puVar14);
          if (puVar9 != puVar14) goto LAB_001f8efd;
        }
        fVar2 = (float)piVar15[5];
        piVar15[5] = (int)((float)param_1 + fVar2);
        if (0.2 <= (float)param_1 + fVar2) {
          local_50 = iVar10;
          iVar10 = FUN_000ff730(local_4c,puVar8,puVar8[1],&local_50);
          FUN_000b2a50();
          puVar8[1] = iVar10;
          **(int **)(iVar10 + 4) = iVar10;
          puVar8 = local_48;
        }
      }
LAB_001f8efd:
      piVar15 = (int *)*piVar15;
    } while (piVar15 != (int *)in_EAX[0x38]);
  }
  local_30 = (undefined4 *)FUN_00061500(local_34);
  local_2c = 0;
  local_3c = (undefined4 *)FUN_00061500(local_40);
  puVar8 = *(undefined4 **)(param_2 + 4);
  local_38 = 0;
  if (puVar8 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)*puVar8;
  }
  if (param_1 != puVar8) {
    do {
      uVar3 = param_1[3];
      if (uVar3 != 0) {
        puVar8 = (undefined4 *)in_EAX[0x38];
        puVar14 = (undefined4 *)0x0;
        if (puVar8 != (undefined4 *)0x0) {
          puVar14 = (undefined4 *)*puVar8;
        }
        if (puVar14 != puVar8) {
          do {
            if (puVar14[3] == uVar3) break;
            puVar14 = (undefined4 *)*puVar14;
          } while (puVar14 != puVar8);
          if (puVar14 != puVar8) {
            if ((0.1 <= (float)puVar14[4]) && (puVar14[4] = 0xbf800000, param_3 == '\0')) {
              local_50 = puVar14[3];
              piVar15 = local_30 + 1;
              iVar10 = FUN_000ff730(local_34,local_30,local_30[1],&local_50);
              FUN_000b2a50();
              *piVar15 = iVar10;
              **(int **)(iVar10 + 4) = iVar10;
            }
            goto LAB_001f909c;
          }
        }
        if ((uVar3 & 1) == 0) {
          uVar11 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
          local_28 = *(undefined ***)(&DAT_00414da0 + uVar11 * 4);
          *(undefined ****)(&DAT_00414da0 + uVar11 * 4) = &local_28;
        }
        iVar10 = in_EAX[0x38];
        local_20 = 0;
        local_1c = 0;
        local_24 = uVar3;
        iVar12 = FUN_001fae40(in_EAX + 0x37,iVar10,*(undefined4 *)(iVar10 + 4),&local_28);
        FUN_0017a4b0();
        *(int *)(iVar10 + 4) = iVar12;
        **(int **)(iVar12 + 4) = iVar12;
        if ((local_24 != 0) && ((local_24 & 1) == 0)) {
          iVar10 = local_24 * 0x19660d;
          local_24 = 0;
          ppuVar4 = *(undefined ***)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          pppuVar7 = (undefined ***)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
          while (ppuVar4 != (undefined **)0x0) {
            pppuVar5 = (undefined ***)*pppuVar7;
            if (pppuVar5 == &local_28) {
              *pppuVar7 = (undefined **)**pppuVar7;
              break;
            }
            pppuVar7 = pppuVar5;
            ppuVar4 = *pppuVar5;
          }
        }
      }
LAB_001f909c:
      param_1 = (undefined4 *)*param_1;
    } while (param_1 != *(undefined4 **)(param_2 + 4));
  }
  param_2 = CONCAT31(param_2._1_3_,in_EAX[0x39] == 0);
  piVar15 = (int *)0x0;
  if ((undefined4 *)in_EAX[0x38] != (undefined4 *)0x0) {
    piVar15 = *(int **)in_EAX[0x38];
  }
  if (piVar15 != (int *)in_EAX[0x38]) {
    do {
      if (piVar15[3] == 0) {
        piVar1 = local_48 + 1;
        param_1 = (undefined4 *)0x0;
        iVar10 = FUN_000ff730(local_4c,local_48,local_48[1],&param_1);
        FUN_000b2a50();
        *piVar1 = iVar10;
        **(int **)(iVar10 + 4) = iVar10;
      }
      piVar15 = (int *)*piVar15;
    } while (piVar15 != (int *)in_EAX[0x38]);
  }
  if (local_48 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)*local_48;
  }
  puVar14 = local_48;
  if (puVar8 != local_48) {
    do {
      param_1 = (undefined4 *)puVar8[2];
      if ((undefined4 *)in_EAX[0x38] == (undefined4 *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = *(int **)in_EAX[0x38];
      }
      for (; piVar15 != (int *)in_EAX[0x38]; piVar15 = (int *)*piVar15) {
        if ((undefined4 *)piVar15[3] == param_1) {
          if ((piVar15 != (int *)in_EAX[0x38]) && (piVar15 != (int *)in_EAX[0x38])) {
            *(int *)piVar15[1] = *piVar15;
            *(int *)(*piVar15 + 4) = piVar15[1];
            if (piVar15[3] != 0) {
              FUN_0008f6e0();
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(piVar15);
          }
          break;
        }
      }
      if (param_3 == '\0') {
        piVar15 = local_3c + 1;
        iVar10 = FUN_000ff730(local_40,local_3c,local_3c[1],&param_1);
        FUN_000b2a50();
        *piVar15 = iVar10;
        **(int **)(iVar10 + 4) = iVar10;
        puVar14 = local_48;
      }
      else {
        (**(code **)(*in_EAX + 0x44))();
      }
      puVar8 = (undefined4 *)*puVar8;
    } while (puVar8 != puVar14);
  }
  if (local_30 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)*local_30;
  }
  if (puVar8 != local_30) {
    do {
      local_20 = (int)(char)in_EAX[0xf];
      local_1c = puVar8[2];
      piVar15 = (int *)0x0;
      local_28 = &PTR_LAB_003a3fb4;
      uStack_18 = 0xffffffff;
      local_24 = 0;
      if (((*(byte *)((int)in_EAX + 0x3d) & 0x10) == 0) &&
         ((*(byte *)((int)in_EAX + 0x3d) & 1) != 0)) {
        if ((undefined4 *)in_EAX[6] != (undefined4 *)0x0) {
          piVar15 = *(int **)in_EAX[6];
        }
        if (piVar15 != (int *)in_EAX[6]) {
          do {
            if ((int *)piVar15[3] != (int *)0x0) {
              (**(code **)(*(int *)piVar15[3] + 0x60))(&local_28);
            }
            piVar15 = (int *)*piVar15;
          } while (piVar15 != (int *)in_EAX[6]);
        }
        FUN_001ff000();
      }
      if (bVar6) {
        iStack_c = (int)(char)in_EAX[0xf];
        uStack_8 = puVar8[2];
        ppuStack_14 = &PTR_LAB_003a3fb4;
        uStack_4 = 0xffffffff;
        uStack_10 = 0x32;
        if (((*(byte *)((int)in_EAX + 0x3d) & 0x10) == 0) &&
           ((*(byte *)((int)in_EAX + 0x3d) & 1) != 0)) {
          if ((undefined4 *)in_EAX[6] == (undefined4 *)0x0) {
            piVar15 = (int *)0x0;
          }
          else {
            piVar15 = *(int **)in_EAX[6];
          }
          if (piVar15 != (int *)in_EAX[6]) {
            do {
              if ((int *)piVar15[3] != (int *)0x0) {
                (**(code **)(*(int *)piVar15[3] + 0x60))(&ppuStack_14);
              }
              piVar15 = (int *)*piVar15;
            } while (piVar15 != (int *)in_EAX[6]);
          }
          FUN_001ff000();
        }
        ppuStack_14 = &PTR_LAB_003a4f50;
      }
      local_24 = 0x27;
      (**(code **)(*in_EAX + 0x60))(&local_28);
      puVar8 = (undefined4 *)*puVar8;
      local_28 = &PTR_LAB_003a4f50;
    } while (puVar8 != local_30);
  }
  if (local_3c == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)*local_3c;
  }
  if (puVar8 != local_3c) {
    do {
      local_20 = (int)(char)in_EAX[0xf];
      local_1c = puVar8[2];
      local_28 = &PTR_LAB_003a3fb4;
      uStack_18 = 0xffffffff;
      local_24 = 1;
      if (((*(byte *)((int)in_EAX + 0x3d) & 0x10) == 0) &&
         ((*(byte *)((int)in_EAX + 0x3d) & 1) != 0)) {
        if ((undefined4 *)in_EAX[6] == (undefined4 *)0x0) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = *(int **)in_EAX[6];
        }
        if (piVar15 != (int *)in_EAX[6]) {
          do {
            if ((int *)piVar15[3] != (int *)0x0) {
              (**(code **)(*(int *)piVar15[3] + 0x60))(&local_28);
            }
            piVar15 = (int *)*piVar15;
          } while (piVar15 != (int *)in_EAX[6]);
        }
        FUN_001ff000();
      }
      local_24 = 0x28;
      (**(code **)(*in_EAX + 0x60))(&local_28);
      puVar8 = (undefined4 *)*puVar8;
      local_28 = &PTR_LAB_003a4f50;
    } while (puVar8 != local_3c);
  }
  if (((char)param_2 == '\0') && (piVar15 = (int *)0x0, in_EAX[0x39] == 0)) {
    iStack_c = (int)(char)in_EAX[0xf];
    ppuStack_14 = &PTR_LAB_003a3fb4;
    uStack_4 = 0xffffffff;
    uStack_10 = 0x2a;
    uStack_8 = 0;
    if (((*(byte *)((int)in_EAX + 0x3d) & 0x10) == 0) && ((*(byte *)((int)in_EAX + 0x3d) & 1) != 0))
    {
      if ((undefined4 *)in_EAX[6] != (undefined4 *)0x0) {
        piVar15 = *(int **)in_EAX[6];
      }
      if (piVar15 != (int *)in_EAX[6]) {
        do {
          if ((int *)piVar15[3] != (int *)0x0) {
            (**(code **)(*(int *)piVar15[3] + 0x60))(&ppuStack_14);
          }
          piVar15 = (int *)*piVar15;
        } while (piVar15 != (int *)in_EAX[6]);
      }
      FUN_001ff000();
    }
  }
  uVar13 = 0;
  if (local_3c != (undefined4 *)0x0) {
    uVar13 = *local_3c;
  }
  FUN_001298b0(&param_3,uVar13,local_3c);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_3c);
}
