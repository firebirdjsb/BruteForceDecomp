/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1A223DD39A6684C6E9D8B5FF87D2F87645EE4C026AC850635012179CD5119BE
 * Entry: 0x00344fa6, Ghidra index: 12762, label: FUN_00344fa6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344fa6(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034f472();
  return uVar1;
}
