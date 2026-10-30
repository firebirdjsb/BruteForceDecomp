/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84EA97D05B59C70D2B8ABBC99D5D9E102CBEF9A8481837DB3FCBBFC871100D4C
 * Entry: 0x00161740, Ghidra index: 4613, label: FUN_00161740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161740(void)

{
  int in_EAX;
  int unaff_ESI;
  
  for (; in_EAX != unaff_ESI; in_EAX = in_EAX + 0x344) {
    FUN_00160320();
  }
  return;
}
