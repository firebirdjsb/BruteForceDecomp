/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA10C4CB3DD57A290206330F3DDE2E14B9E73A0F652F5B72EED3D3AFC540EC97
 * Entry: 0x003110d0, Ghidra index: 11821, label: FUN_003110d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Preserved 32-bit free operand; original caller ABI is unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400474;
extern uint32_t DAT_00400488;
extern uint32_t _DAT_00400484;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003110d0(void)

{
  if (0xf < DAT_00400488) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400474);
  }
  DAT_00400488 = 0xf;
  _DAT_00400484 = 0;
  DAT_00400474 = DAT_00400474 & 0xffffff00;
  return;
}
