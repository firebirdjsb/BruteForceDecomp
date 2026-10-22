/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82BA5FF2193B6B576612604FE52A9793187B6D5F00A9CA3C16DBDDE4A5FC759F
 * Entry: 0x00380a8e, Ghidra index: 13537, label: FUN_00380a8e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412680;
undefined4 FUN_00380a8e(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_2c [2];
  undefined1 local_2a;
  undefined4 local_28;
  undefined4 **local_24;
  undefined4 **local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  local_10 = 0;
  *param_1 = 0;
  local_14 = in_ECX;
  local_5 = KeRaiseIrqlToDpcLevel();
  local_18 = FUN_003800bb();
  if (local_18 == 0) {
LAB_00380ac6:
    local_c = 0x48f;
  }
  else {
    if (*(int *)(local_18 + 0x12) != 0) {
      local_c = 0x20;
      goto LAB_00380cbb;
    }
    if (*(char *)(in_ECX + 1) == '\0') {
      local_c = 0xe;
      goto LAB_00380cbb;
    }
    *(char *)(in_ECX + 1) = *(char *)(in_ECX + 1) + -1;
    piVar2 = DAT_00412680;
    piVar6 = DAT_00412680;
    DAT_00412680 = *(int **)((int)DAT_00412680 + 0xa7);
    for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    *(undefined2 *)piVar6 = 0;
    *(undefined1 *)((int)piVar6 + 2) = 0;
    *piVar2 = local_18;
    *(int *)((int)piVar2 + 0xa3) = in_ECX;
    *(byte *)((int)piVar2 + 0xa2) =
         *(byte *)((int)piVar2 + 0xa2) ^ (*param_2 << 3 ^ *(byte *)((int)piVar2 + 0xa2)) & 8;
    *(int **)(local_18 + 0x12) = piVar2;
    local_1c = piVar2;
    local_10 = 1;
    iVar4 = FUN_00380125();
    if (-1 < iVar4) {
      if (*(code **)(in_ECX + 0x18) != (code *)0x0) {
        iVar4 = (**(code **)(in_ECX + 0x18))();
        iVar4 = (-(uint)(iVar4 != 0) & 0x7fffff00) + 0x80000100;
      }
      iVar3 = local_18;
      if (-1 < iVar4) {
        bVar1 = **(byte **)(in_ECX + 8);
        piVar6 = *(int **)(*(byte **)(in_ECX + 8) + 1);
        piVar7 = piVar2 + 0xd;
        for (uVar5 = (uint)(bVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        for (uVar5 = bVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)piVar7 = (char)*piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
          piVar7 = (int *)((int)piVar7 + 1);
        }
        piVar6 = piVar2 + 0xd;
        piVar7 = piVar2 + 5;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        *(short *)piVar7 = (short)*piVar6;
        if ((*(byte *)(local_14 + 0x28) & 0x40) == 0) {
          local_28 = 0;
          local_20 = &local_24;
          local_24 = &local_24;
          bVar1 = *(byte *)(local_18 + 0xc);
          *(undefined4 *)((int)piVar2 + 0x62) = 0;
          *(undefined1 *)(piVar2 + 0x1c) = 0;
          *(undefined1 **)((int)piVar2 + 0x5e) = local_2c;
          *(undefined1 *)((int)piVar2 + 0x52) = 0x30;
          *(undefined1 *)((int)piVar2 + 0x53) = 0x40;
          *(undefined1 **)((int)piVar2 + 0x5a) = &LAB_003804c9;
          *(undefined2 **)((int)piVar2 + 0x6a) = (undefined2 *)((int)piVar2 + 0x32);
          *(uint *)((int)piVar2 + 0x66) = (uint)bVar1;
          *(undefined1 *)((int)piVar2 + 0x6e) = 2;
          *(undefined1 *)((int)piVar2 + 0x6f) = 1;
          *(undefined1 *)((int)piVar2 + 0x7a) = 0xa1;
          *(undefined1 *)((int)piVar2 + 0x7b) = 1;
          *(undefined2 *)(piVar2 + 0x1f) = 0x100;
          *(ushort *)((int)piVar2 + 0x7e) = (ushort)*(byte *)(local_18 + 5);
          *(ushort *)(piVar2 + 0x20) = (ushort)bVar1;
          local_2c[0] = 1;
          local_2a = 4;
          FUN_00381379((undefined2 *)((int)piVar2 + 0x52));
          KfLowerIrql();
          FUN_003804da(local_2c);
          local_5 = KeRaiseIrqlToDpcLevel();
          if ((*piVar2 == 0) || ((*(byte *)(iVar3 + 4) & 2) != 0)) goto LAB_00380ac6;
          if (-1 < *(int *)((int)piVar2 + 0x56)) {
            (**(code **)(local_14 + 0x24))();
          }
        }
        *(int *)((int)piVar2 + 0x62) = piVar2[3];
        *(undefined1 *)((int)piVar2 + 0x52) = 0x28;
        *(undefined1 *)((int)piVar2 + 0x53) = 0x41;
        *(code **)((int)piVar2 + 0x5a) = FUN_00380281;
        *(int **)((int)piVar2 + 0x5e) = piVar2;
        *(undefined2 **)((int)piVar2 + 0x6a) = (undefined2 *)((int)piVar2 + 0x32);
        bVar1 = *(byte *)(iVar3 + 0xc);
        *(undefined1 *)(piVar2 + 0x1c) = 0;
        *(uint *)((int)piVar2 + 0x66) = (uint)bVar1;
        *(undefined1 *)((int)piVar2 + 0x6e) = 2;
        *(undefined1 *)((int)piVar2 + 0x6f) = 1;
        *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xf;
        if ((*(byte *)((int)piVar2 + 0xa2) & 8) != 0) {
          FUN_00381379((undefined2 *)((int)piVar2 + 0x52));
        }
        local_10 = 0;
        *param_1 = piVar2;
        goto LAB_00380cbb;
      }
    }
    local_c = FUN_00380fe3(iVar4);
  }
LAB_00380cbb:
  KfLowerIrql();
  if (local_10 != 0) {
    XAPILIB__XID_fCloseDevice();
  }
  return local_c;
}
