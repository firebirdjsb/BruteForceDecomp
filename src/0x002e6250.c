/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A72C503412C245977395CFF4121D17510ED2A1EB8A6DB6BC41873BE19637210
 * Entry: 0x002e6250, Ghidra index: 10495, label: FUN_002e6250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003867b0;
int FUN_002e6250(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24 [9];
  
  if (*(int *)(param_1 + 0x18) < 0) {
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(in_ECX + 0x4898) = 0;
    return 1;
  }
  iVar4 = FUN_002e7dd0(param_1 + 0x1c,in_ECX + 0x4878,&local_54);
  if (-1 < iVar4) {
    *(int *)(param_1 + 0x2b0) = local_54;
    *(int *)(in_ECX + 0x4870) = *(int *)(in_ECX + 0x4870) + 1;
    uVar5 = FUN_002e76c0();
    *(uint *)(in_ECX + 0x4874) = *(int *)(in_ECX + 0x4874) + (uVar5 & 0xff);
    FUN_002e7610(*(undefined4 *)(param_1 + 0x2a8));
    FUN_002e75c0(1);
    if (*(char *)(in_ECX + 0x34) != '\0') {
      cVar1 = FUN_002e76c0();
      cVar2 = *(char *)(param_1 + 0x2ac);
      cVar3 = (cVar2 != '\0') * '\x04' + '\x02';
      local_50 = (uint)(cVar2 != '\0') * 4 + 3;
      local_4c = -(uint)(cVar2 != '\0') & 4;
      local_48 = (uint)(cVar2 != '\0') * 4 + 1;
      cVar2 = FUN_002e4840(cVar3);
      FUN_002e4850(cVar3,cVar2 + '\x01');
      iVar4 = local_50;
      if ((*(int *)(in_ECX + 0x489c) == 1) || (*(int *)(in_ECX + 0x489c) == 2)) {
        cVar3 = FUN_002e4840(local_50);
        FUN_002e4850(iVar4,cVar3 + -1);
      }
      uVar5 = local_4c;
      cVar3 = FUN_002e4840(local_4c);
      FUN_002e4850(uVar5,cVar3 + cVar1);
      uVar5 = local_48;
      if ((*(int *)(in_ECX + 0x489c) == 0) || (*(int *)(in_ECX + 0x489c) == 2)) {
        cVar3 = FUN_002e4840(local_48);
        FUN_002e4850(uVar5,cVar3 - cVar1);
      }
      cVar3 = FUN_002e7770();
      if (cVar3 != '\0') {
        FUN_002e5bf0(local_54);
        uVar5 = FUN_002e7790();
        uVar6 = FUN_002e7790();
        if (uVar6 <= uVar5) {
          FUN_002e5bf0(local_54);
        }
        uVar7 = FUN_002e7790();
        FUN_002e5bf0(local_54);
        local_48 = FUN_002e77a0();
        uVar5 = FUN_002e77a0();
        if (uVar5 <= local_48) {
          FUN_002e5bf0(local_54);
        }
        uVar8 = FUN_002e77a0();
        FUN_002e77b0(uVar7);
        FUN_002e77c0(uVar8);
      }
    }
    if (local_54 == 0) {
      local_44 = *(undefined4 *)(in_ECX + 0x68);
      *(undefined4 *)(in_ECX + 0x4950) = *(undefined4 *)(param_1 + 0xc);
      puVar9 = (undefined4 *)(in_ECX + 0x40);
      puVar10 = local_24;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_48 = *(undefined4 *)(in_ECX + 100);
      local_40 = *(undefined ***)(in_ECX + 0x6c);
      local_3c = *(undefined4 *)(in_ECX + 0x70);
      local_38 = *(undefined4 *)(in_ECX + 0x74);
      local_34 = *(undefined4 *)(in_ECX + 0x78);
      FUN_002e4c00(param_1 + 0x40);
      puVar9 = local_24;
      puVar10 = (undefined4 *)(in_ECX + 0x40);
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined ***)(in_ECX + 0x6c) = local_40;
      *(uint *)(in_ECX + 100) = local_48;
      *(undefined4 *)(in_ECX + 0x68) = local_44;
      *(undefined4 *)(in_ECX + 0x70) = local_3c;
      *(undefined4 *)(in_ECX + 0x74) = local_38;
      *(undefined4 *)(in_ECX + 0x4898) = 7;
      *(undefined4 *)(in_ECX + 0x78) = local_34;
      return 1;
    }
    *(int *)(in_ECX + 0x4950) = local_54;
    FUN_002e8c40();
    local_40 = &PTR_FUN_003867b0;
    local_28 = **(undefined4 **)(in_ECX + 0x1c);
    iVar4 = FUN_002e7f50(local_54,&local_40,1,1);
    FUN_002e8b80();
    if (-1 < iVar4) {
      iVar4 = 1;
    }
  }
  return iVar4;
}
