/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 362BCEBD035F6A5A4C2956FFACE0A4400806A734A0ED823A27EAF231ED83816D
 * Entry: 0x001dcce0, Ghidra index: 6589, label: FUN_001dcce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcce0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
  }
  return;
}
