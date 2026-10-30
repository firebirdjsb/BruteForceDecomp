/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3550E0398EED2F096847754C2C01DD9A591137A4EF7D15683CB9E0EDDEFD3EAD
 * Entry: 0x002f0ed9, Ghidra index: 10765, label: FUN_002f0ed9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4dc;
extern uint32_t DAT_004a8e98;
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002f0ed9(uint param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < DAT_004a8e98) &&
     (piVar1 = (int *)((&DAT_004a8ea0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8), *piVar1 == -1)) {
    *piVar1 = param_2;
    return 0;
  }
  DAT_0040f4dc = 0;
  _DAT_0040f4d8 = 9;
  return 0xffffffff;
}
