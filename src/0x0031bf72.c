/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C451A0F3C1481B0E458C4101882425A151D835C58980ABBBF5B7736AE90DCBDA
 * Entry: 0x0031bf72, Ghidra index: 12315, label: FUN_0031bf72
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031bf72(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_0031bba1();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
