/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A747A14C193A3236462AF8E6EA92FD9A3F6D4F3CF5BA5A79450835639F4D3076
 * Entry: 0x00310ce0, Ghidra index: 11800, label: FUN_00310ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; x86 caller ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400228;
extern uint32_t DAT_0040023c;
extern uint32_t _DAT_00400238;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310ce0(void)

{
  if (0xf < DAT_0040023c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_00400228);
  }
  DAT_0040023c = 0xf;
  _DAT_00400238 = 0;
  DAT_00400228 = DAT_00400228 & 0xffffff00;
  return;
}
