/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08161AAD7FB38201E3402C49163E4F35FC02442721C7D2D36AB68344BA6132D2
 * Entry: 0x001e2250, Ghidra index: 6746, label: FUN_001e2250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00407498;
undefined4 FUN_001e2250(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *local_3c;
  byte *local_38;
  int local_34;
  byte *local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  local_30 = *(byte **)(in_ECX + 8);
  iVar6 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (*(byte **)(in_ECX + 4) != local_30) {
    local_38 = *(byte **)(in_ECX + 4) + 4;
    do {
      pbVar8 = local_38;
      if (0xf < *(uint *)(local_38 + 0x14)) {
        pbVar8 = *(byte **)local_38;
      }
      pbVar5 = &DAT_00407498;
      pbVar7 = pbVar8;
      do {
        uVar2 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
        if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
          uVar2 = uVar2 + 0x20;
        }
        uVar4 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
        if ((0x40 < uVar4) && (uVar4 < 0x5b)) {
          uVar4 = uVar4 + 0x20;
        }
      } while ((uVar2 != 0) && (uVar2 == uVar4));
      local_3c = pbVar8;
      if (uVar2 != uVar4) {
        iVar6 = param_2 * 0x10 + param_1;
        FUN_001e25b0(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),&local_3c);
        if (local_34 != *(int *)(iVar6 + 8)) {
          FUN_001e23d0(&local_3c,local_34);
        }
        local_4 = 0xf;
        local_8 = 0;
        local_18 = local_18 & 0xffffff00;
        pbVar7 = pbVar8;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        FUN_0001fed0(pbVar8,(int)pbVar7 - (int)(pbVar8 + 1));
        FUN_000764c0(local_1c);
        if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(local_18);
        }
        local_8 = 0;
        local_18 = local_18 & 0xffffff00;
        local_4 = 0xf;
        iVar6 = local_28;
      }
      pbVar7 = local_38 + 0x1c;
      pbVar8 = local_38 + 0x18;
      local_38 = pbVar7;
    } while (pbVar8 != local_30);
  }
  uVar3 = FUN_001e2170();
  if (iVar6 == 0) {
    return uVar3;
  }
  FUN_000762d0(local_2c,param_2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar6);
}
