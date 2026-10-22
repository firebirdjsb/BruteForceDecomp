/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60F73D0D8849BAFE6BFA8236E76EDD54413A490C5CA9D8E84136AC7D857E5432
 * Entry: 0x002eb985, Ghidra index: 10631, label: FUN_002eb985
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b687c;
extern uint32_t DAT_003b6888;
extern uint32_t DAT_0040f4e4;
extern uint32_t *DAT_004a8fa4;
extern uint32_t DAT_004a8fa8;
extern uint32_t _DAT_0040f4e8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002eb985(undefined4 param_1,int param_2)

{
  int unaff_EBX;
  undefined4 *puVar1;
  bool bVar2;
  
  _DAT_0040f4e8 = 1;
  DAT_0040f4e4 = (undefined1)unaff_EBX;
  if (param_2 == 0) {
    if (DAT_004a8fa8 != (undefined4 *)0x0) {
      DAT_004a8fa4 = DAT_004a8fa4 + -1;
      bVar2 = DAT_004a8fa4 < DAT_004a8fa8;
      while (!bVar2) {
        if ((code *)*DAT_004a8fa4 != (code *)0x0) {
          (*(code *)*DAT_004a8fa4)();
        }
        DAT_004a8fa4 = DAT_004a8fa4 + -1;
        bVar2 = DAT_004a8fa4 < DAT_004a8fa8;
      }
    }
    puVar1 = &DAT_003b687c;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)0x3b6884);
  }
  puVar1 = &DAT_003b6888;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)0x3b6890);
  if (unaff_EBX == 0) {
    KeBugCheck();
  }
  return;
}
