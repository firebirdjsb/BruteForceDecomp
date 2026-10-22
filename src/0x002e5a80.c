/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 649FBDC84E7F8CB4CFC5345A79D76BCB2692DE7F5A8C18B1B9EEB0181187044A
 * Entry: 0x002e5a80, Ghidra index: 10485, label: FUN_002e5a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e5a80(byte param_1)

{
  FUN_002e4fc0();
  FUN_002e8b80();
  if ((param_1 & 1) != 0) {
    FUN_002e8c30();
  }
  return;
}
