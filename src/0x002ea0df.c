/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A010DD6ACA1BD562FA0DB886C1CC12B828DB3B5D43491628CE64FD937DB005E3
 * Entry: 0x002ea0df, Ghidra index: 10577, label: FUN_002ea0df
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ea0df(byte param_1)

{
  FUN_002ea0ca();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
