/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 143ADA3E7DD6A0D0655D03A9C1D8D614466FD08FC3DFB79292074E065C0B617F
 * Entry: 0x00310e60, Ghidra index: 11808, label: FUN_00310e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; Xbox callsite ABI not fully verified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400308;
extern uint32_t DAT_0040031c;
extern uint32_t _DAT_00400318;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310e60(void)

{
  if (0xf < DAT_0040031c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400308);
  }
  DAT_0040031c = 0xf;
  _DAT_00400318 = 0;
  DAT_00400308 = DAT_00400308 & 0xffffff00;
  return;
}
