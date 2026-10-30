/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDF4226B2598D0CD8DEB277DC8C66D836EDDAECC00D4518E2BC9BAB8999A815D
 * Entry: 0x00345579, Ghidra index: 12810, label: FUN_00345579
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00345579(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(param_1 + 8) = 0x2d636f73;
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    ExFreePool(param_1);
  }
  else {
    FUN_0034c6bc(param_1);
  }
  *(short *)(in_ECX + 0xbd4) = *(short *)(in_ECX + 0xbd4) + -1;
  return;
}
