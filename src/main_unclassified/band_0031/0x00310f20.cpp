/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C13ECE300EFB026CD74D087C3D0B82E4046FF17F71F1906A1F39F008212E8B09
 * Entry: 0x00310f20, Ghidra index: 11812, label: FUN_00310f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; Xbox callsite ABI not fully verified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400378;
extern uint32_t DAT_0040038c;
extern uint32_t _DAT_00400388;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310f20(void)

{
  if (0xf < DAT_0040038c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400378);
  }
  DAT_0040038c = 0xf;
  _DAT_00400388 = 0;
  DAT_00400378 = DAT_00400378 & 0xffffff00;
  return;
}
