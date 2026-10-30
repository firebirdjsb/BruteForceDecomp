/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11769402EF23355C9928DCFC78B45A1E7C02D327F606B0F6B646391147DEBB92
 * Entry: 0x00294b90, Ghidra index: 9303, label: FUN_00294b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003b9760;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_00469884;
extern char s_not_enough_memory_00404860[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00294b90(undefined4 param_1,int param_2)

{
  int iVar1;
  
  PTR_DAT_003b9760 = (undefined *)0x404874;
  if (param_2 == 0) {
    _DAT_00469884 = 0x40;
    iVar1 = (*(code *)PTR_FUN_003bc654)(param_1);
    return iVar1;
  }
  _DAT_00469884 = 0x47;
  iVar1 = FUN_00067c30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_0028ab50(s_not_enough_memory_00404860);
  }
  return iVar1;
}
