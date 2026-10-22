/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F049AD1BFFAA768BBDF9BE272E3BF4A027196C131E99C1DCE473F293DA7BF13
 * Entry: 0x00355b72, Ghidra index: 13129, label: FUN_00355b72
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355b72(void)

{
  int in_ECX;
  
  FUN_00355af1();
  if ((*(byte *)(in_ECX + 1) & 0x80) != 0) {
    if (*(int *)(in_ECX + 0x270) != 0) {
      FUN_0034c9ec(in_ECX);
    }
    FUN_00355a89(1);
  }
  FUN_00352ebc(0x80000);
  FUN_0034d582();
  return;
}
