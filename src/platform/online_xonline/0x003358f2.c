/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6EBCED55E20B92CA827B9C8E16F61A9ED8B2B5D4A782B5841C38AF11264485A
 * Entry: 0x003358f2, Ghidra index: 12438, label: FUN_003358f2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003358f2(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x12d8);
  do {
    if (*piVar2 == param_1) {
      return uVar1 * 0xb8 + 0x12d0 + in_ECX;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x2e;
  } while (uVar1 < 4);
  return 0;
}
