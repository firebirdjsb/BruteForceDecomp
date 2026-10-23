/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF6112C8824A6A687A1CEC719894FA2681F6709B4ABAE95B733B97146AA769E1
 * Entry: 0x000a8b80, Ghidra index: 2015, label: FUN_000a8b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a8b80(byte param_1)

{
  FUN_000a8550();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
