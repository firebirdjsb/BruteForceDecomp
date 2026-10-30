/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BEA49DE83A98182168EFC1D4A281351D3F1A10D8D4360C2EC97C0D669256E49
 * Entry: 0x00310fe0, Ghidra index: 11816, label: FUN_00310fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Preserved 32-bit free operand; original caller ABI is unverified. */
#include "bf_002ea018_heap_free_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004003e8;
extern uint32_t DAT_004003fc;
extern uint32_t _DAT_004003f8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00310fe0(void)

{
  if (0xf < DAT_004003fc) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(DAT_004003e8);
  }
  DAT_004003fc = 0xf;
  _DAT_004003f8 = 0;
  DAT_004003e8 = DAT_004003e8 & 0xffffff00;
  return;
}
