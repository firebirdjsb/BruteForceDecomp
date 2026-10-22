/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 717EF38F52722B75C4C112C2476E683BC4B1B2AEEB37FCE396522427F36A647E
 * Entry: 0x003132ab, Ghidra index: 12000, label: FUN_003132ab
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003132ab(byte param_1)

{
  int in_ECX;
  
  FUN_00312310();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX + -4);
  }
  return in_ECX + -4;
}
