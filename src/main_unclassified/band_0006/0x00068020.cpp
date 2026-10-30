/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 589C0FE1694997F490D05EE5AE5166845F45A7F0398D39E48A1C955045EFF046
 * Entry: 0x00068020, Ghidra index: 1146, label: FUN_00068020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffb84;
/* Original 0x00068033/51/73/94 and 0x000680b5/d6/f7/0x00068118/39
 * use these 4-byte words directly as IMUL operands, not host pointers.
 * Their wider storage layout and linked symbol binding remain unverified. */
extern uint32_t DAT_003ffb88;
extern uint32_t DAT_003ffb94;
extern uint32_t DAT_003ffba4;
extern uint32_t DAT_003ffbb4;
extern uint32_t DAT_003ffbb8;
extern uint32_t DAT_003ffbc4;
extern uint32_t DAT_003ffbc8;
extern uint32_t DAT_003ffbd4;
extern uint32_t DAT_003ffbd8;
extern uint32_t DAT_003ffbe4;
extern uint32_t DAT_003ffbe8;
extern uint32_t DAT_003ffbf4;
extern uint32_t DAT_003ffbf8;
extern uint32_t DAT_003ffc04;
extern uint32_t DAT_003ffc08;
extern uint32_t PTR_FUN_003ffba8;
extern uint32_t PTR_LAB_003ffb98;
int FUN_00068020(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_20 [12];
  int local_14;
  
  XAPILIB__GlobalMemoryStatus(local_20);
  uVar10 = DAT_003ffb84 * DAT_003ffb88;
  if ((uVar10 & 0xfff) != 0) {
    uVar10 = uVar10 + (0x1000 - (uVar10 & 0xfff));
  }
  uVar1 = (int)PTR_LAB_003ffb98 * DAT_003ffb94;
  if ((uVar1 & 0xfff) != 0) {
    uVar1 = uVar1 + (0x1000 - (uVar1 & 0xfff));
  }
  uVar2 = (int)PTR_FUN_003ffba8 * DAT_003ffba4;
  if ((uVar2 & 0xfff) != 0) {
    uVar2 = uVar2 + (0x1000 - (uVar2 & 0xfff));
  }
  uVar3 = DAT_003ffbb8 * DAT_003ffbb4;
  if ((uVar3 & 0xfff) != 0) {
    uVar3 = uVar3 + (0x1000 - (uVar3 & 0xfff));
  }
  uVar4 = DAT_003ffbc8 * DAT_003ffbc4;
  if ((uVar4 & 0xfff) != 0) {
    uVar4 = uVar4 + (0x1000 - (uVar4 & 0xfff));
  }
  uVar5 = DAT_003ffbd8 * DAT_003ffbd4;
  if ((uVar5 & 0xfff) != 0) {
    uVar5 = uVar5 + (0x1000 - (uVar5 & 0xfff));
  }
  uVar6 = DAT_003ffbe8 * DAT_003ffbe4;
  if ((uVar6 & 0xfff) != 0) {
    uVar6 = uVar6 + (0x1000 - (uVar6 & 0xfff));
  }
  uVar7 = DAT_003ffbf8 * DAT_003ffbf4;
  if ((uVar7 & 0xfff) != 0) {
    uVar7 = uVar7 + (0x1000 - (uVar7 & 0xfff));
  }
  uVar8 = DAT_003ffc08 * DAT_003ffc04;
  if ((uVar8 & 0xfff) != 0) {
    uVar8 = uVar8 + (0x1000 - (uVar8 & 0xfff));
  }
  iVar9 = (local_14 - (uVar10 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8)) +
          -0x170000;
  return (int)(iVar9 + (iVar9 >> 0x1f & 0xfU)) >> 4;
}
