/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C6EF91E7B998B2A67599ED2D36CE1857B49B665C067568EB6F4A90FB0D040FE
 * Entry: 0x00310b90, Ghidra index: 11793, label: FUN_00310b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* One-word guest32 free-thunk interface; per-caller Xbox ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400164;
extern uint32_t DAT_00400178;
extern uint32_t _DAT_00400174;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310b90(void)

{
  if (0xf < DAT_00400178) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400164);
  }
  DAT_00400178 = 0xf;
  _DAT_00400174 = 0;
  DAT_00400164 = DAT_00400164 & 0xffffff00;
  return;
}
