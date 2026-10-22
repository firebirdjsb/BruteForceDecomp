/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 221728F134C8306C5D6C45CC2AC7CA139A2B4A46D2E0DC245730E34FE59068CF
 * Entry: 0x00344f70, Ghidra index: 12759, label: FUN_00344f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344f70(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 1;
  }
  uVar1 = FUN_0034877b();
  return uVar1;
}
