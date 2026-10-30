/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36316546F394FF53DCDE6DC1AEB5BEF03720113ABEA7191A6F781C48210870E7
 * Entry: 0x00310a40, Ghidra index: 11786, label: FUN_00310a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* One-word guest32 free-thunk interface; per-caller Xbox ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004000a0;
extern uint32_t DAT_004000b4;
extern uint32_t _DAT_004000b0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310a40(void)

{
  if (0xf < DAT_004000b4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004000a0);
  }
  DAT_004000b4 = 0xf;
  _DAT_004000b0 = 0;
  DAT_004000a0 = DAT_004000a0 & 0xffffff00;
  return;
}
