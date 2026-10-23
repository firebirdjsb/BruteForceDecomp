/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 514B4A85F8FD6DE52972454F4ADB8AC36218538942DD0D8C873FA059B9AF2E77
 * Entry: 0x00178090, Ghidra index: 4959, label: FUN_00178090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00178090(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 2:
    return 8;
  case 3:
    return 7;
  case 4:
    return 5;
  case 5:
    return 4;
  case 6:
    return 6;
  default:
    return 3;
  }
}
