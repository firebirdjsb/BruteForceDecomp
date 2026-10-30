/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2E0547FA92721C2B759C8DD626471734157959FDFD1BD38189AFB6AC0C2BD02
 * Entry: 0x003142e5, Ghidra index: 12054, label: FUN_003142e5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003142e5(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_00313e3c();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
