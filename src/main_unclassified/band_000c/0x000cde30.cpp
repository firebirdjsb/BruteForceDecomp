/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5FC088548F534A8B81D5256E3E5725055BA180797111F1504F0F00E05CB82CF
 * Entry: 0x000cde30, Ghidra index: 2545, label: FUN_000cde30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cde30(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  in_EAX[3] = in_ECX[3];
  in_EAX[4] = in_ECX[4];
  in_EAX[5] = in_ECX[5];
  in_EAX[6] = in_ECX[6];
  return;
}
