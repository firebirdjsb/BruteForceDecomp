/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9A3CD82895DFE4DAAAB078FA3A99C94C148E7E7CC3D3E3183E2115922CE5816
 * Entry: 0x00310c50, Ghidra index: 11797, label: FUN_00310c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single guest DWORD to free thunk; x86 caller ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004001d4;
extern uint32_t DAT_004001e8;
extern uint32_t _DAT_004001e4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310c50(void)

{
  if (0xf < DAT_004001e8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004001d4);
  }
  DAT_004001e8 = 0xf;
  _DAT_004001e4 = 0;
  DAT_004001d4 = DAT_004001d4 & 0xffffff00;
  return;
}
