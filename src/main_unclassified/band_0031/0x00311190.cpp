/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35C4B41B3D5950462D75AC53F109FC2375069E79F7965634D0FDFFA67EE7CC1F
 * Entry: 0x00311190, Ghidra index: 11825, label: FUN_00311190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Preserved 32-bit free operand; original caller ABI is unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004004e4;
extern uint32_t DAT_004004f8;
extern uint32_t _DAT_004004f4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00311190(void)

{
  if (0xf < DAT_004004f8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004004e4);
  }
  DAT_004004f8 = 0xf;
  _DAT_004004f4 = 0;
  DAT_004004e4 = DAT_004004e4 & 0xffffff00;
  return;
}
