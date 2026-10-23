/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7C8C866240E3FFDC185AE4E8B3362CD779EB1FC400D144B327D0862D7BA2367
 * Entry: 0x0017b800, Ghidra index: 5032, label: FUN_0017b800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0290;
extern uint32_t UNK_0017b9ed;
undefined4 FUN_0017b800(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_EAX;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_34;
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(in_EAX + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
    return 0;
  }
  local_4c = (undefined4 *)0x18;
  local_50 = (undefined4 *)0x17b81d;
  local_34 = (undefined4 *)FUN_002ea01d();
  if (local_34 == (undefined4 *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    *local_34 = 0;
    local_34[3] = 0;
    local_34[4] = 0;
    local_34[5] = 0;
  }
  puVar2 = *(undefined4 **)(in_EAX + 0x20);
  *local_34 = *puVar2;
  local_34[1] = puVar2[1];
  local_10 = 0;
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  local_4c = (undefined4 *)0x17b865;
  uVar6 = FUN_002383b0();
  local_4 = 0xffffffff;
  local_18 = uVar6;
  FUN_001cc3b0(&local_5c);
  local_4c = (undefined4 *)0xffffffff;
  FUN_0017c3b0(uVar6);
  iVar7 = 0;
  local_30 = 0;
  do {
    if ((puVar2[3] == 0) || ((uint)((int)(puVar2[4] - puVar2[3]) / 0x14) <= local_30)) {
      *(undefined4 **)(param_2 + 0x1c) = local_34;
      return 1;
    }
    iVar3 = puVar2[3];
    local_18 = *(int *)(iVar7 + iVar3);
    local_10 = 0;
    local_c = (undefined4 *)0x0;
    local_8 = 0;
    local_4 = 0;
    do {
      if (local_18 == (&DAT_003c0290)[local_4]) goto LAB_0017b902;
      local_4 = local_4 + 1;
    } while (local_4 < 0x16);
    local_4 = -1;
LAB_0017b902:
    if (local_4 != -1) {
      uVar8 = 0;
      iVar9 = 0;
      while ((puVar5 = local_c, iVar4 = *(int *)(iVar7 + 8 + iVar3), iVar4 != 0 &&
             (uVar8 < (uint)(*(int *)(iVar7 + 0xc + iVar3) - iVar4 >> 3)))) {
        local_28 = *(undefined4 *)(iVar4 + uVar8 * 8);
        local_20 = 0;
        local_1c = 0x3f800000;
        local_24 = *(undefined4 *)(iVar4 + 4 + uVar8 * 8);
        if ((iVar9 == 0) || ((uint)(local_8 - iVar9 >> 4) <= (uint)((int)local_c - iVar9 >> 4))) {
          local_4c = &local_28;
          uStack_54 = 0x17b9a6;
          local_50 = local_c;
          FUN_0016af10();
          uVar8 = uVar8 + 1;
          iVar9 = local_10;
        }
        else {
          local_4c = (undefined4 *)param_2;
          local_50 = &local_28;
          uStack_54 = 1;
          local_5c = 0x17b981;
          puStack_58 = local_c;
          FUN_001dace0();
          local_c = puVar5 + 4;
          uVar8 = uVar8 + 1;
        }
      }
      local_4c = (undefined4 *)0x17b9bd;
      FUN_0017a990();
      iVar3 = local_4;
      piVar1 = (int *)(local_34[3] + local_4 * 0x18);
      *piVar1 = local_18;
      local_4c = (undefined4 *)0x17b9e0;
      FUN_0017c270();
      piVar1[5] = iVar3;
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        local_50 = (undefined4 *)&UNK_0017b9ed;
        local_4c = (undefined4 *)iVar9;
        thunk_FUN_00237ec0();
      }
    }
    local_30 = local_30 + 1;
    iVar7 = iVar7 + 0x14;
  } while( true );
}
