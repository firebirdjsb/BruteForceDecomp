/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7F4085614D131192D21D55789E0A0F6DE85C98187EEF0342F98E3F1C6B429F1
 * Entry: 0x0031b31f, Ghidra index: 12294, label: FUN_0031b31f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff10;
extern uint32_t _DAT_0032ff14;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031b31f(uint param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    param_2 = _DAT_0032ff14;
    param_1 = DAT_0032ff10;
  }
  DAT_0032ff10 = param_1 >> 1 | param_2 << 0x1f;
  _DAT_0032ff14 =
       (((param_1 << 2 ^ param_1) << 1 ^ param_1) << 0x1c ^ param_2) & 0x80000000 | param_2 >> 1;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = &DAT_0032ff10;
    for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_3 = *puVar2;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
    }
    for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
  }
  return;
}
