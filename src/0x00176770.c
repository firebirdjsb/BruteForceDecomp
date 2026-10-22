/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FE448272AE2D8B55C3EE2075CB99917511E1BB85D3CCE4DBEE035C14BB79073
 * Entry: 0x00176770, Ghidra index: 4939, label: FUN_00176770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00176770(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)in_EAX;
  if (in_EAX < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  return fVar1 * (float10)0.001;
}
