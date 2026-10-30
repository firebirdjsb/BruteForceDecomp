/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E7DBAF4571B3CB1BE8C24BC3C80C6EB1658A8F7F6A41F1D8F2C74F2346DBDC7
 * Entry: 0x001057f0, Ghidra index: 3344, label: FUN_001057f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469a00;
extern uint32_t _DAT_003c0654;
extern uint32_t _DAT_004699f8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001057f0(undefined4 param_1,float param_2)

{
  _DAT_004699f8 = _DAT_004699f8 + param_2;
  if (_DAT_003c0654 < _DAT_004699f8) {
    DAT_00469a00 = DAT_00469a00 + 1;
    _DAT_004699f8 = 0.0;
    if (7 < DAT_00469a00) {
      DAT_00469a00 = 0;
    }
    FUN_001051e0();
    return;
  }
  return;
}
