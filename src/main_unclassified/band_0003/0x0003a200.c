/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E1CA5A6B392EB2DA57704C11540A688382F748EE020BC6EBDC4844AA71043F4
 * Entry: 0x0003a200, Ghidra index: 410, label: FUN_0003a200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c06ec;
extern uint32_t PTR_FUN_003a479c;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_003a4f50;
undefined4 FUN_0003a200(int param_1,undefined ***param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int local_80;
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined ***local_44;
  undefined **local_40;
  undefined **local_3c;
  int local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  byte local_8;
  byte local_4;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  uVar9 = 0;
  while( true ) {
    iVar2 = *(int *)(param_3 + 100);
    if ((iVar2 == 0) || ((uint)(*(int *)(param_3 + 0x68) - iVar2 >> 3) <= uVar9)) break;
    piVar1 = (int *)(iVar2 + uVar9 * 8);
    iVar2 = piVar1[1];
    if (iVar2 == 0x6d) {
      FUN_000395d0(*piVar1);
      uVar9 = uVar9 + 1;
    }
    else {
      if (((param_4 == 0) || (iVar2 == 0)) || (param_4 == iVar2)) {
        iVar2 = *piVar1;
        local_8 = local_8 & 0xfe;
        local_4 = local_4 & 0xfe;
        local_40 = &PTR_FUN_003a479c;
        local_30 = 0;
        local_1c = 0;
        local_3c = &PTR_FUN_003a4f64;
        local_38 = 0;
        local_24 = 0;
        local_28 = 0;
        local_2c = 0;
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        local_18 = 0;
        if (&local_3c != param_2) {
          FUN_00055650();
        }
        local_38 = iVar2;
        if ((((&DAT_003c06ec)[*piVar1 * 0xc] & 0x10) != 0) && (local_30 != 0)) {
          if (local_18 == 2) {
            local_18 = 0;
          }
          FUN_0008f6a0(0);
        }
        if (*(int *)(param_1 + 8) == 0) {
          puVar8 = (undefined1 *)(param_1 + 0xc);
        }
        else {
          bVar4 = true;
          local_74 = 0;
          puVar8 = local_78;
        }
        local_80 = *(int *)(puVar8 + 4);
        if ((bVar4) && (bVar4 = false, local_74 != 0)) {
          FUN_0008f6e0();
        }
        if (local_80 == 0) {
          local_80 = 0;
        }
        else {
          local_80 = *(int *)(*(int *)(local_80 + 0x4c) + 4) + 0x50 + local_80;
        }
        if (*(int *)(param_1 + 8) == 0) {
          puVar8 = (undefined1 *)(param_1 + 0xc);
        }
        else {
          bVar5 = true;
          local_6c = 0;
          puVar8 = local_70;
        }
        iVar2 = *(int *)(puVar8 + 4);
        if ((bVar5) && (bVar5 = false, local_6c != 0)) {
          FUN_0008f6e0();
        }
        iVar7 = local_38;
        if (*(int *)(param_1 + 8) == 0) {
          puVar8 = (undefined1 *)(param_1 + 0xc);
        }
        else {
          bVar6 = true;
          local_64 = 0;
          puVar8 = local_68;
        }
        iVar3 = *(int *)(puVar8 + 4);
        if ((bVar6) && (bVar6 = false, local_64 != 0)) {
          FUN_0008f6e0();
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0xbf4);
        local_60 = *(int *)(*(int *)(iVar2 + 0x4c) + 4) + 0x4c + iVar2;
        local_58 = *(undefined4 *)(iVar3 + 0x50);
        local_5c = local_80;
        local_50 = 0;
        local_48 = 0;
        local_44 = &local_40;
        local_4c = iVar7;
        local_54 = local_58;
        FUN_000e4190(iVar3,&local_60);
        local_3c = &PTR_FUN_003a4f64;
        if (local_1c != 0) {
          FUN_0008f6e0();
        }
        if (local_30 != 0) {
          FUN_0008f6e0();
        }
        local_40 = &PTR_LAB_003a4f50;
      }
      uVar9 = uVar9 + 1;
    }
  }
  return 1;
}
