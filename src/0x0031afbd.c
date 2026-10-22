/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BED8F3F333D782C6100F77A7C7B35E5B4020B2DCCCF651688E1CFB9540891C1A
 * Entry: 0x0031afbd, Ghidra index: 12285, label: FUN_0031afbd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031afbd(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_0031acd6();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
