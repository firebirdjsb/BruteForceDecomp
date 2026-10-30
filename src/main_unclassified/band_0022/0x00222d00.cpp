/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C42C3B567A6277BB8470F6296ADE549D4B53B57975FD4F0E68E8F890E096E06
 * Entry: 0x00222d00, Ghidra index: 7592, label: FUN_00222d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394880;
void FUN_00222d00(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00394880;
  if (in_ECX[2] != 0) {
    FUN_0008f6e0();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
