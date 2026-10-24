/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D587E08CCC66CC941870D5C8F7EC434E0E66F2A474EF439E07264D92E9868CF
 * Entry: 0x00218790, Ghidra index: 7479, label: FUN_00218790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t UNK_00218adc;
void FUN_00218790(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined1 local_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 *local_50;
  undefined1 *local_4c;
  undefined4 *local_48;
  undefined1 *local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined1 *local_14;
  undefined4 uStack_10;
  /* Original x86 pushes a guest 32-bit SEH handler address; this is
   * not a native host pointer or a completed Windows SEH adaptation. */
  uint32_t puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308c00);
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_10;
  local_14 = &stack0xffffff90;
  local_28 = *param_4;
  local_24 = param_4[1];
  local_74 = param_4 + 2;
  local_78 = &local_20;
  FUN_00218b00();
  iVar4 = param_1[1];
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (param_1[3] - iVar4) / 0x14;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (param_1[2] - iVar4) / 0x14;
    }
    if (0xcccccccU - iVar3 < param_3) {
      local_74 = param_1;
      local_78 = (undefined4 *)0x21882c;
      FUN_00038940();
    }
    else {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (param_1[2] - iVar4) / 0x14;
      }
      if (uVar5 < iVar3 + param_3) {
        if (0xccccccc - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (param_1[2] - iVar4) / 0x14;
        }
        if (uVar5 < iVar4 + param_3) {
          local_74 = (undefined4 *)0x218899;
          iVar4 = FUN_0017c210();
          uVar5 = iVar4 + param_3;
        }
        local_74 = (undefined4 *)(uVar5 * 0x14);
        local_78 = (undefined4 *)0x2188ac;
        local_2c = local_74;
        local_34 = FUN_002ea01d();
        local_8 = 0;
        local_38 = (undefined1 *)&local_74;
        local_74 = param_2;
        local_3c = (undefined1 *)&local_78;
        local_78 = (undefined4 *)param_1[1];
        local_40 = local_78;
        local_30 = local_34;
        local_34 = FUN_00218ca0();
        local_74 = (undefined4 *)0x2188ed;
        local_34 = FUN_00218640();
        local_44 = (undefined1 *)&local_74;
        local_74 = (undefined4 *)param_1[2];
        local_4c = (undefined1 *)&local_78;
        local_78 = param_2;
        local_48 = local_74;
        FUN_00218ca0();
        local_8 = 0xffffffff;
        iVar4 = param_1[1];
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (param_1[2] - iVar4) / 0x14;
        }
        if (iVar4 != 0) {
          local_74 = local_50;
          local_78 = param_1;
          FUN_00218e40(param_1[2]);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(param_1[1]);
        }
        param_1[3] = (int)local_2c + local_30;
        param_1[2] = local_30 + (param_3 + iVar3) * 0x14;
        param_1[1] = local_30;
      }
      else {
        puVar1 = (undefined4 *)param_1[2];
        local_74 = puVar1;
        if ((uint)(((int)puVar1 - (int)param_2) / 0x14) < param_3) {
          local_54 = param_3 * 0x14;
          local_78 = param_2;
          FUN_00218ca0();
          local_8 = 2;
          local_5c = param_1[2];
          local_74 = (undefined4 *)0x218a0d;
          local_58 = local_5c;
          FUN_00218640();
          local_8 = 0xffffffff;
          iVar4 = param_1[2];
          param_1[2] = iVar4 + local_54;
          local_78 = (undefined4 *)((iVar4 + local_54) - local_54);
        }
        else {
          local_54 = param_3 * 0x14;
          local_78 = puVar1 + param_3 * -5;
          uVar2 = FUN_00218ca0();
          param_1[2] = uVar2;
          local_78 = puVar1 + param_3 * -5;
          local_74 = puVar1;
          FUN_00218d60(param_2);
          local_78 = (undefined4 *)(local_54 + (int)param_2);
        }
        local_74 = &local_28;
        FUN_00218cd0(param_2);
      }
    }
  }
  if (local_1c == (undefined4 *)0x0) {
    local_78 = (undefined4 *)0x0;
  }
  else {
    local_78 = (undefined4 *)*local_1c;
  }
  local_74 = local_1c;
  FUN_001298b0(local_64);
  local_74 = local_1c;
                    /* WARNING: Subroutine does not return */
  local_78 = (undefined4 *)&UNK_00218adc;
  thunk_FUN_00237ec0();
}
