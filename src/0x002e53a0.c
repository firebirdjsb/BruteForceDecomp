/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB63D4C84D3F7B4DF41638EA0533E74141B8FC5C4BF0C8029AB969B0567F2CE6
 * Entry: 0x002e53a0, Ghidra index: 10469, label: FUN_002e53a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e53a0(byte param_1)

{
  FUN_002e4fc0();
  FUN_002e8b80();
  if ((param_1 & 1) != 0) {
    FUN_002e8c30();
  }
  return;
}
