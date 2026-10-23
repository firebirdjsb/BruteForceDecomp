/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 251E0C4C7A0EA84090AE8DA6A23BA80E19FD460D4A7EB4C023D1010F326C969A
 * Entry: 0x00203350, Ghidra index: 7281, label: FUN_00203350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined1 FUN_00203350(char param_1,int *param_2,int *param_3,int param_4,char *param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_ESI;
  undefined1 local_1d;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1d = 0;
  uVar4 = 0;
  if ((*param_5 == '\0') && (*param_2 == *param_3)) {
    uVar6 = 0;
    iVar7 = 0;
    if (param_1 == '\0') {
      for (_param_1 = 0;
          (iVar5 = *(int *)(param_4 + 4), iVar5 != 0 &&
          (_param_1 < (uint)((*(int *)(param_4 + 8) - iVar5) / 0x1c))); _param_1 = _param_1 + 1) {
        *(undefined4 *)(*(int *)(unaff_ESI + 0x50) + iVar7) = *(undefined4 *)(uVar6 + 4 + iVar5);
        FUN_000d6ac0(*(undefined4 *)(unaff_ESI + 0x10),*(int *)(unaff_ESI + 0x50) + 4 + iVar7,1);
        FUN_000d6ac0(*(undefined4 *)(unaff_ESI + 0x10),*(int *)(unaff_ESI + 0x50) + 0xc + iVar7,2);
        *(undefined4 *)(*(int *)(unaff_ESI + 0x50) + 0x30 + iVar7) =
             *(undefined4 *)(uVar6 + 8 + iVar5);
        *(undefined4 *)(*(int *)(unaff_ESI + 0x50) + 0x34 + iVar7) =
             *(undefined4 *)(uVar6 + 0x14 + iVar5);
        *(undefined4 *)(*(int *)(unaff_ESI + 0x50) + 0x38 + iVar7) =
             *(undefined4 *)(uVar6 + 0x10 + iVar5);
        pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x50) + 0x3c + iVar7);
        bVar2 = *pbVar1;
        *pbVar1 = bVar2 ^ (*(byte *)(uVar6 + 1 + iVar5) ^ bVar2) & 1;
        bVar2 = *(byte *)(*(int *)(unaff_ESI + 0x50) + 0x3c + iVar7);
        *(byte *)(*(int *)(unaff_ESI + 0x50) + 0x3c + iVar7) =
             bVar2 ^ (*(char *)(uVar6 + iVar5) << 1 ^ bVar2) & 2;
        pbVar1 = (byte *)(*(int *)(unaff_ESI + 0x50) + 0x3c + iVar7);
        bVar2 = *pbVar1;
        *pbVar1 = bVar2 ^ (*(char *)(uVar6 + 2 + iVar5) << 2 ^ bVar2) & 4;
        uVar6 = uVar6 + 0x1c;
        iVar7 = iVar7 + 0x40;
      }
      local_1d = 1;
    }
    else {
      for (; (iVar5 = *(int *)(unaff_ESI + 0x50), iVar5 != 0 &&
             (uVar6 < (uint)(*(int *)(unaff_ESI + 0x54) - iVar5 >> 6))); uVar6 = uVar6 + 1) {
        local_18 = *(undefined4 *)(iVar5 + iVar7);
        local_10 = DAT_0046d064;
        local_4 = DAT_0046d064;
        iVar5 = FUN_001fb020();
        if (iVar5 != 0) {
          local_4 = *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 0x50) + 8 + iVar7) + 4);
        }
        iVar3 = *(int *)(*(int *)(unaff_ESI + 0x50) + 0x10 + iVar7);
        iVar5 = *(int *)(unaff_ESI + 0x50) + iVar7;
        if (iVar3 != 0) {
          local_10 = *(undefined4 *)(iVar3 + 4);
        }
        local_8 = *(undefined4 *)(iVar5 + 0x34);
        local_c = *(undefined4 *)(iVar5 + 0x38);
        local_14 = *(undefined4 *)(iVar5 + 0x30);
        bVar2 = *(byte *)(iVar5 + 0x3c);
        local_1a = bVar2 >> 2 & 1;
        local_1b = bVar2 & 1;
        local_1c = bVar2 >> 1 & 1;
        FUN_0020c080(&local_1c);
        iVar7 = iVar7 + 0x40;
      }
    }
    *param_5 = '\x01';
    uVar4 = local_1d;
  }
  return uVar4;
}
