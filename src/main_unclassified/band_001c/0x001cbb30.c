/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 356C8939AB41CECB8FEEB4A732E7155773825CCBD25111C1A16747ADBEADC61C
 * Entry: 0x001cbb30, Ghidra index: 5892, label: FUN_001cbb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001cbb30(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_001da250();
  return unaff_ESI * 0x68 + unaff_EDI;
}
