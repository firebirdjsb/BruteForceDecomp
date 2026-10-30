/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C49563E80798E1E146110583313E044EB5BBDACE0722DE53CD2917016BA81DEF
 * Entry: 0x001728e0, Ghidra index: 4868, label: FUN_001728e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001728e0(byte param_1)

{
  FUN_00172900();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
