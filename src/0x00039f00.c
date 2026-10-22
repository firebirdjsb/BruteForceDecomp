/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D664B769A44EB32ED18553CD16635A147B9185B6DB2EF126DB031FB4322D6AD5
 * Entry: 0x00039f00, Ghidra index: 409, label: FUN_00039f00
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
void FUN_00039f00(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined **local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  undefined **local_94;
  undefined4 local_90;
  int local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte local_60;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_14;
  int local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = *(int *)(param_1 + 0x42c);
  do {
    if (iVar6 < 2) {
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
      local_60 = local_60 & 0xfe;
      local_b0 = &PTR_FUN_003a4f68;
      local_9c = 0;
      local_a4 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_88 = 0;
      local_74 = 0;
      local_94 = &PTR_FUN_003a4f64;
      local_90 = 0;
      local_7c = 0;
      local_80 = 0;
      local_84 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_70 = 0;
      local_58 = 0;
      local_14 = 0;
      FUN_000556e0();
      local_54 = 1;
      FUN_00055d30(&local_b0);
      if ((local_58 != 0) && ((local_58 & 1) == 0)) {
        iVar4 = local_58 * 0x19660d;
        local_58 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        piVar1 = (int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_5c) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      local_94 = &PTR_FUN_003a4f64;
      if ((local_74 != 0) && ((local_74 & 1) == 0)) {
        iVar4 = FUN_0008f690();
        local_74 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + iVar4 * 4);
        piVar1 = (int *)(&DAT_00414da0 + iVar4 * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_78) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      if ((local_88 != 0) && ((local_88 & 1) == 0)) {
        iVar4 = FUN_0008f690();
        local_88 = 0;
        iVar6 = *(int *)(&DAT_00414da0 + iVar4 * 4);
        piVar1 = (int *)(&DAT_00414da0 + iVar4 * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_8c) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
      local_b0 = &PTR_FUN_003a4f68;
      if ((local_9c != 0) && ((local_9c & 1) == 0)) {
        iVar4 = local_9c * 0x19660d;
        local_9c = 0;
        iVar6 = *(int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        piVar1 = (int *)(&DAT_00414da0 + (iVar4 + 0x3c6ef35fU >> 0x15) * 4);
        while (iVar6 != 0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 == &local_a0) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar2;
          iVar6 = *piVar2;
        }
      }
    }
    local_10 = *(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c);
    uVar5 = local_10 - 1;
    if (*(uint *)(param_1 + 0x424) <= uVar5) {
      uVar5 = uVar5 - *(uint *)(param_1 + 0x424);
    }
    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x420) + uVar5 * 4) + 0x5c);
    if (((iVar6 != 0) && (-1 < iVar6)) && (iVar6 < 0x87)) {
      iVar6 = iVar6 * 0x40 + *(int *)(param_1 + 0x4c);
      local_8 = *(undefined4 *)(iVar6 + 0x18);
      local_4 = *(undefined4 *)(iVar6 + 0x1c);
      (**(code **)(iVar6 + 0x10))();
    }
    if (*(int *)(param_1 + 0x42c) != 0) {
      uVar5 = *(int *)(param_1 + 0x428) + -1 + *(int *)(param_1 + 0x42c);
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
