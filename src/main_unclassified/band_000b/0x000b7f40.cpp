/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E513506879019B68E1255622F78B60FF93660F0F74AADE1AD9CE81ED1469B600
 * Entry: 0x000b7f40, Ghidra index: 2214, label: FUN_000b7f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000b7f60(void);

void FUN_000b7f40(byte param_1)

{
  FUN_000b7f60();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
