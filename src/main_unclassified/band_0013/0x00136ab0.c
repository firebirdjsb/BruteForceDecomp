/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5959745E5D72923DFFA504E78F56684DFBAB47BC9680D2E606055A029170AFD1
 * Entry: 0x00136ab0, Ghidra index: 3896, label: FUN_00136ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039db60;
extern uint32_t PTR_FUN_0039db6c;
void FUN_00136ab0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined **local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined **local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  byte local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 *local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 local_20 [32];
  
  *(undefined4 *)(param_1 + 0x4c) = param_3[1];
  *(undefined4 *)(param_1 + 0x58) = param_3[3];
  bVar5 = *(byte *)(param_1 + 0x48) ^ (*(byte *)(param_3 + 5) ^ *(byte *)(param_1 + 0x48)) & 1;
  *(byte *)(param_1 + 0x48) = bVar5;
  bVar5 = (*(char *)(param_3 + 7) << 1 ^ bVar5) & 2 ^ bVar5;
  *(byte *)(param_1 + 0x48) = bVar5;
  bVar5 = (*(char *)((int)param_3 + 0x1d) << 2 ^ bVar5) & 4 ^ bVar5;
  *(byte *)(param_1 + 0x48) = bVar5;
  bVar5 = (*(char *)((int)param_3 + 0x1e) << 3 ^ bVar5) & 8 ^ bVar5;
  *(byte *)(param_1 + 0x48) = bVar5;
  *(byte *)(param_1 + 0x48) = (*(char *)((int)param_3 + 0x1f) << 4 ^ bVar5) & 0x10 ^ bVar5;
  *(undefined4 *)(param_1 + 8) = param_3[4];
  *(undefined4 *)(param_1 + 0x50) = param_3[6];
  *(undefined4 *)(param_1 + 0x5c) = *param_3;
  piVar6 = (int *)param_3[0x15];
  if (piVar6 != (int *)param_3[0x16]) {
    do {
      if (*piVar6 == -0x149bfff8) {
        uVar8 = 2;
      }
      else {
        uVar8 = (uint)(*piVar6 == -0x57e7f66);
      }
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | uVar8;
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)param_3[0x16]);
  }
  puVar13 = (undefined4 *)param_3[9];
  if (puVar13 != (undefined4 *)param_3[10]) {
    do {
      local_a0 = *puVar13;
      local_a8 = puVar13[1];
      local_a4 = puVar13[2];
      local_ac = &PTR_FUN_0039db6c;
      FUN_00137640();
      puVar13 = puVar13 + 3;
    } while (puVar13 != (undefined4 *)param_3[10]);
  }
  *(undefined4 *)(param_1 + 4) = param_3[2];
  puVar13 = (undefined4 *)param_3[0xd];
  if (puVar13 != (undefined4 *)param_3[0xe]) {
    do {
      local_a0 = *puVar13;
      local_a8 = puVar13[2];
      local_ac = (undefined **)puVar13[1];
      local_a4 = puVar13[3];
      FUN_001376b0();
      puVar13 = puVar13 + 4;
    } while (puVar13 != (undefined4 *)param_3[0xe]);
  }
  puVar13 = (undefined4 *)param_3[0x11];
  if (puVar13 != (undefined4 *)param_3[0x12]) {
    do {
      local_64 = puVar13[3];
      local_60 = puVar13[4];
      local_5c = *puVar13;
      local_68 = puVar13[2];
      local_6c = puVar13[1];
      FUN_00137720(&local_6c);
      puVar13 = puVar13 + 5;
    } while (puVar13 != (undefined4 *)param_3[0x12]);
  }
  piVar6 = (int *)param_3[0x19];
  if (piVar6 != (int *)param_3[0x1a]) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    do {
      puVar13 = (undefined4 *)piVar6[5];
      local_80 = local_80 & 0xfe;
      local_94 = piVar6[1];
      local_90 = piVar6[2];
      local_8c = piVar6[8];
      local_98 = &PTR_FUN_0039db60;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      local_84 = 0;
      local_88 = 0;
      if (puVar13 != (undefined4 *)piVar6[6]) {
        do {
          iVar2 = local_74;
          local_ac = (undefined **)puVar13[1];
          local_a8 = puVar13[2];
          local_a4 = puVar13[3];
          local_a0 = *puVar13;
          if ((local_78 == 0) ||
             ((uint)(local_70 - local_78 >> 4) <= (uint)(local_74 - local_78 >> 4))) {
            FUN_00244240(local_74,&local_ac);
          }
          else {
            FUN_001dace0(local_74,1,&local_ac,local_9c);
            local_74 = iVar2 + 0x10;
          }
          puVar13 = puVar13 + 4;
        } while (puVar13 != (undefined4 *)piVar6[6]);
      }
      piVar7 = (int *)piVar6[10];
      local_84 = 0;
      for (; piVar7 != (int *)piVar6[0xb]; piVar7 = piVar7 + 1) {
        iVar2 = *piVar7;
        if (iVar2 == -0xf820e86) {
          uVar8 = 2;
        }
        else if (iVar2 == -0xe6e85c7) {
          uVar8 = 4;
        }
        else {
          uVar8 = (uint)(iVar2 == -0x33d6302);
        }
        local_84 = local_84 | uVar8;
      }
      puVar11 = (uint *)piVar6[0xe];
      local_88 = 0;
      for (; puVar11 != (uint *)piVar6[0xf]; puVar11 = puVar11 + 1) {
        uVar8 = *puVar11;
        if (uVar8 < 0xc9ece30) {
          if (uVar8 == 0xc9ece2f) {
            uVar8 = 4;
          }
          else if (uVar8 == 0x361b05d) {
            uVar8 = 2;
          }
          else {
            if (uVar8 != 0x787148e) goto LAB_00136dce;
            uVar8 = 8;
          }
        }
        else if (uVar8 == 0xf0fa205a) {
          uVar8 = 0x10;
        }
        else if (uVar8 == 0xfeff115a) {
          uVar8 = 1;
        }
        else {
LAB_00136dce:
          uVar8 = 0;
        }
        local_88 = local_88 | uVar8;
      }
      puVar13 = *(undefined4 **)(param_1 + 0x40);
      iVar2 = *piVar6;
      cVar1 = *(char *)((int)puVar13[1] + 0x21);
      local_58[0] = puVar13;
      puVar12 = (undefined4 *)puVar13[1];
      while (cVar1 == '\0') {
        if ((int)puVar12[3] < iVar2) {
          puVar9 = (undefined4 *)puVar12[2];
          puVar12 = local_58[0];
        }
        else {
          puVar9 = (undefined4 *)*puVar12;
        }
        local_58[0] = puVar12;
        puVar12 = puVar9;
        cVar1 = *(char *)((int)puVar9 + 0x21);
      }
      if ((local_58[0] == puVar13) || (iVar2 < (int)local_58[0][3])) {
        local_9c = puVar13;
        ppuVar10 = &local_9c;
      }
      else {
        ppuVar10 = local_58;
      }
      if (*ppuVar10 == puVar13) {
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_24 = iVar2;
        FUN_001383e0(local_20);
        FUN_00137c70(&local_24);
        FUN_00137dc0();
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        FUN_001377b0(local_44);
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
      }
      local_6c = iVar2;
      FUN_001383e0(&local_68);
      FUN_00137c70(&local_6c);
      iVar4 = local_60;
      iVar3 = local_64;
      iVar2 = local_64;
      if (local_64 != 0) {
        for (; iVar2 != iVar4; iVar2 = iVar2 + 0x2c) {
          FUN_0013ad50();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar3);
      }
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      FUN_00137930(&local_98);
      iVar3 = local_74;
      piVar6 = piVar6 + 0x11;
      local_98 = &PTR_FUN_0039db60;
      iVar2 = local_78;
      if (local_78 != 0) {
        for (; iVar2 != iVar3; iVar2 = iVar2 + 0x10) {
          FUN_000e35e0(0);
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_78);
      }
    } while (piVar6 != (int *)param_3[0x1a]);
  }
  *param_2 = *param_3;
  return;
}
