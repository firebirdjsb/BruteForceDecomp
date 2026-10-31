/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35AD4FF5C71189A7CE2EAB8B8D9B0F2B992573B446660DB4C64F8ADC34D27F84
 * Entry: 0x00146c40, Ghidra index: 4230, label: FUN_00146c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern int FUN_0006ef00(void);
undefined4 FUN_00146c40(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (in_EAX != 0) {
    uVar1 = FUN_0006ef00();
    return uVar1;
  }
  return 0;
}
