/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B50147CF1889B1B109B176DF087189EFAA70DD3843227F1D7480A78253403001
 * Entry: 0x00352ebc, Ghidra index: 13073, label: FUN_00352ebc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00352ebc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  do {
    uVar1 = *in_ECX;
    uVar2 = *in_ECX;
    if (uVar1 == uVar2) {
      *in_ECX = uVar1 | param_1;
      uVar2 = uVar1;
    }
  } while (uVar2 != uVar1);
  return;
}
