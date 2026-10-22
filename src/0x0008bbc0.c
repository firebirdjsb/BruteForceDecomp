/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7335C5BBAF2E8D9638591C57C1E065AD59B8B89030495442644ADFC321975B6A
 * Entry: 0x0008bbc0, Ghidra index: 1689, label: FUN_0008bbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0008bbc0(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 0:
    return 0x11;
  case 1:
    return 0x12;
  case 2:
    return 0x13;
  case 3:
    return 0x14;
  default:
    return 0x19;
  }
}
