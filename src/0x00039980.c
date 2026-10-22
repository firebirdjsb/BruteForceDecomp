/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47F64CCBA24BC090A669C421555BB9026C696D354795D82097F8EDDF4E80DFD6
 * Entry: 0x00039980, Ghidra index: 408, label: FUN_00039980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
void FUN_00039980(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined **local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  uint local_12c;
  undefined **local_124;
  undefined4 local_120;
  int local_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  byte local_f0;
  int local_ec;
  uint local_e8;
  undefined4 local_e4;
  undefined4 local_a4;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  uint local_8c;
  undefined **local_84;
  undefined4 local_80;
  int local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_4;
  
  iVar6 = *(int *)(param_1 + 0x42c);
  do {
    if (iVar6 < 2) {
LAB_00039ea5:
      if (*(int *)(param_1 + 0x42c) == 0) {
        FUN_00055a60(param_1 + 0x41c);
      }
      uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
      if (*(uint *)(param_1 + 0x424) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
      }
      *(undefined4 *)(param_1 + 0x44) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4) + 0x5c);
      return;
    }
    if (*(int *)(param_1 + 0x42c) == 0) {
      local_f0 = local_f0 & 0xfe;
      local_140 = &PTR_FUN_003a4f68;
      local_12c = 0;
      local_134 = 0;
      local_138 = 0;
      local_13c = 0;
      local_118 = 0;
      local_104 = 0;
      local_124 = &PTR_FUN_003a4f64;
      local_120 = 0;
      local_10c = 0;
      local_110 = 0;
      local_114 = 0;
      local_fc = 0;
      local_f8 = 0;
      local_f4 = 0;
      local_100 = 0;
      local_e8 = 0;
      local_a4 = 0;
      FUN_000556e0();
      local_e4 = 1;
      FUN_00055d30(&local_140);
      if ((local_e8 != 0) && ((local_e8 & 1) == 0)) {
        iVar4 = local_e8 * 0x19660d;
        local_e8 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        piVar1 = (int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_ec) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      local_124 = &PTR_FUN_003a4f64;
      if ((local_104 != 0) && ((local_104 & 1) == 0)) {
        iVar4 = FUN_0008f690();
        local_104 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + iVar4 * 4);
        piVar1 = (int *)(&DAT_00414da0 + iVar4 * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_108) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      if ((local_118 != 0) && ((local_118 & 1) == 0)) {
        iVar4 = FUN_0008f690();
        local_118 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + iVar4 * 4);
        piVar1 = (int *)(&DAT_00414da0 + iVar4 * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_11c) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      local_140 = &PTR_FUN_003a4f68;
      if ((local_12c != 0) && ((local_12c & 1) == 0)) {
        iVar4 = local_12c * 0x19660d;
        local_12c = 0;
        iVar6 = *(int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        piVar1 = (int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_130) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
    }
    uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar5) {
      uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
    }
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4) + 0x88) & 0x100) != 0) {
      iVar6 = FUN_00055aa0();
      *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) & 0xfffffeff;
      goto LAB_00039ea5;
    }
    if (*(int *)(param_1 + 0x42c) == 0) {
      local_50 = local_50 & 0xfe;
      local_a0 = &PTR_FUN_003a4f68;
      local_8c = 0;
      local_94 = 0;
      local_98 = 0;
      local_9c = 0;
      local_78 = 0;
      local_64 = 0;
      local_84 = &PTR_FUN_003a4f64;
      local_80 = 0;
      local_6c = 0;
      local_70 = 0;
      local_74 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0;
      local_48 = 0;
      local_4 = 0;
      FUN_000556e0();
      local_44 = 1;
      FUN_00055d30(&local_a0);
      if ((local_48 != 0) && ((local_48 & 1) == 0)) {
        iVar4 = local_48 * 0x19660d;
        local_48 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        piVar1 = (int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_4c) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      local_84 = &PTR_FUN_003a4f64;
      if ((local_64 != 0) && ((local_64 & 1) == 0)) {
        iVar4 = FUN_0008f690();
        local_64 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + iVar4 * 4);
        piVar1 = (int *)(&DAT_00414da0 + iVar4 * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_68) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      if ((local_78 != 0) && ((local_78 & 1) == 0)) {
        iVar4 = FUN_0008f690();
        local_78 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + iVar4 * 4);
        piVar1 = (int *)(&DAT_00414da0 + iVar4 * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_7c) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      local_a0 = &PTR_FUN_003a4f68;
      if ((local_8c != 0) && ((local_8c & 1) == 0)) {
        iVar4 = local_8c * 0x19660d;
        local_8c = 0;
        iVar6 = *(int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        piVar1 = (int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_90) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
    }
    uVar5 = (*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c)) - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar5) {
      uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
    }
    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4) + 0x5c);
    if (((iVar6 != 0) && (-1 < iVar6)) && (iVar6 < 0x87)) {
      (**(code **)(iVar6 * 0x40 + *(int *)(param_1 + 0x4c) + 0x10))();
    }
    if (*(int *)(param_1 + 0x42c) != 0) {
      uVar5 = *(int *)(param_1 + 0x42c) + -1 + *(int *)(param_1 + 0x428);
      if (*(uint *)(param_1 + 0x424) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
      }
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x420) + uVar5 * 4);
      if (puVar3[0x16] != 0) {
        FUN_0008f6e0();
      }
      puVar3[7] = &PTR_FUN_003a4f64;
      FUN_00012080();
      FUN_00012080();
      *puVar3 = &PTR_FUN_003a4f68;
      FUN_0001fe80();
      piVar1 = (int *)(param_1 + 0x42c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0x428) = 0;
      }
    }
    iVar6 = *(int *)(param_1 + 0x42c);
  } while( true );
}
