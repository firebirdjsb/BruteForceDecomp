/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63C93FE7DAA321574F5ACB2DD22F115AD06DF2A80CDBA8860A06CE5187EB3406
 * Entry: 0x00154a00, Ghidra index: 4451, label: FUN_00154a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00154a00(byte param_1)

{
  FUN_00154e50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
