/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADB34C5798C6868C5C4DE2D84C8F9B3674D9BCEB0B81A45A8BCD50EB508143FD
 * Entry: 0x0028a2d0, Ghidra index: 9158, label: FUN_0028a2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t PTR_DAT_003b9760;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_00469884;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0028a2d0(void)

{
  FUN_002949b0();
  *(undefined4 *)(DAT_00469888 + 0x74) = 0x7ffffffd;
  FUN_002940b0();
  FUN_002940e0();
  FUN_0028ae10();
  FUN_00293d10();
  FUN_002954d0();
  FUN_00295530();
  FUN_002948b0();
  FUN_00294a10();
  PTR_DAT_003b9760 = (undefined *)0x404874;
  _DAT_00469884 = 0x40;
  (*(code *)PTR_FUN_003bc654)(*(undefined4 *)(DAT_00469888 + 4));
  return;
}
