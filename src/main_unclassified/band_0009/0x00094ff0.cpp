/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 307950CFEBE43A840E2DD8D171535E648412340B0BB55014C151C442F99B65E2
 * Entry: 0x00094ff0, Ghidra index: 1818, label: FUN_00094ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00094ff0(byte param_1)

{
  FUN_00094290();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
