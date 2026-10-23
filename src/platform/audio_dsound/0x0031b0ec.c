/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47078F6BA5426F68326B4377E80052031F0EE5DC30053A32D57AD5E4AEC0CFD9
 * Entry: 0x0031b0ec, Ghidra index: 12289, label: FUN_0031b0ec
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031b0ec(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x14) != 0) && (*(int *)(in_ECX + 0x1c) != 0)) {
    MmLockUnlockBufferPages(*(int *)(in_ECX + 0x14),*(int *)(in_ECX + 0x1c),1);
    if (*(int *)(in_ECX + 0x14) != 0) {
      FUN_00314850(*(int *)(in_ECX + 0x14));
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
  }
  return;
}
