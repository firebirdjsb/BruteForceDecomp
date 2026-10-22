/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84A81E00241722F820A644BCC1BDD965DC3D5A594D1B5CDFC94B89C26EC8FEC8
 * Entry: 0x00169d50, Ghidra index: 4761, label: FUN_00169d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00169d50(void)

{
  int *in_ECX;
  
  if ((*in_ECX != 1) && (*in_ECX != 10)) {
    return 0;
  }
  return in_ECX[1];
}
