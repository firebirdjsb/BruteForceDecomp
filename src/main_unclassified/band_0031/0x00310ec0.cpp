/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7693900C3759420709A1525044435916F88DECA3C4A7784D4BE9EA3774B6E223
 * Entry: 0x00310ec0, Ghidra index: 11810, label: FUN_00310ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; Xbox callsite ABI not fully verified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400340;
extern uint32_t DAT_00400354;
extern uint32_t _DAT_00400350;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310ec0(void)

{
  if (0xf < DAT_00400354) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400340);
  }
  DAT_00400354 = 0xf;
  _DAT_00400350 = 0;
  DAT_00400340 = DAT_00400340 & 0xffffff00;
  return;
}
