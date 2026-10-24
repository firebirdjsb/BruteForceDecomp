/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2CDC2602A7E2B1B731CD70CE45EDCFBA0F386CC0393044305E628E49EFB8AC5
 * Entry: 0x001ec170, Ghidra index: 6906, label: FUN_001ec170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Verified matching-XBE immediate guest32 addresses below are NOT
 * safe host pointers/callbacks. ABI and native relocation remain TODO. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc78c;
extern uint32_t DAT_00401c58;
extern uint32_t DAT_0040e868;
extern uint32_t DAT_0040e86c;
extern uint32_t PTR_FUN_003bc784;
extern uint32_t _DAT_00401c58;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ec170(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  uint local_4;
  
  FUN_001ec070();
  iVar1 = FUN_002ea01d(0x640);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_002e1240();
  }
  *(undefined4 *)(in_EAX + 0x10) = uVar2;
  FUN_001eb640();
  local_4 = _DAT_00401c58 | 0x42420000;
  local_20 = 2;
  local_1c = 2;
  local_c = 4000;
  iVar1 = FUN_002e01e0(local_34);
  if (-1 < iVar1) {
    iVar1 = FUN_002ea01d(0x48);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_002e7e10();
    }
    *(undefined4 *)(in_EAX + 0x14) = uVar2;
    iVar1 = FUN_002e8470(*(undefined4 *)(in_EAX + 0x10),UINT32_C(0x002e8dd0),UINT32_C(0x001ebd20),0x100,4,0x2000);
    if (-1 < iVar1) {
      local_40 = 0;
      local_3c = 0;
      local_5c[0] = DAT_00401c58;
      local_58 = 500;
      local_54 = 4000;
      local_50 = 3000;
      local_4c = 4000;
      local_38 = 1;
      local_48 = UINT32_C(0x001ebde0);
      local_44 = UINT32_C(0x001ebe10);
      iVar1 = FUN_002ea01d(0x4960);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_002e5ab0();
      }
      *(undefined4 *)(in_EAX + 0x18) = uVar2;
      iVar1 = FUN_002e6a90(*(undefined4 *)(in_EAX + 0x10),*(undefined4 *)(in_EAX + 0x14),local_5c);
      if (-1 < iVar1) {
        FUN_002e5bd0(1);
        FUN_002e56e0(2,0x80000015);
        uVar3 = 0;
        do {
          if (*(int *)((int)&DAT_003bc78c + uVar3) == -1) {
            uVar2 = (**(code **)((int)&PTR_FUN_003bc784 + uVar3))();
            *(undefined4 *)((int)&DAT_003bc78c + uVar3) = uVar2;
          }
          FUN_002e7aa0(*(undefined4 *)((int)&DAT_003bc78c + uVar3));
          uVar3 = uVar3 + 0x10;
        } while (uVar3 < 0x1b0);
        *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(in_EAX + 0x14);
        *(int *)(in_EAX + 8) = in_EAX;
        *(undefined4 *)(in_EAX + 0xc) = 0x1b;
        DAT_0040e86c = FUN_002ea01d;
        DAT_0040e868 = thunk_FUN_00237ec0;
        return 1;
      }
    }
  }
  return 0;
}
