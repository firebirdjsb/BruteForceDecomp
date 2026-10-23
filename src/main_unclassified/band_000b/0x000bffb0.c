/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A484BDA7442B1C3C2B858B51DC05F7BFCEF92E3B1F92E3E4AAA0D2E3E7F7AD47
 * Entry: 0x000bffb0, Ghidra index: 2337, label: FUN_000bffb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000bffb0(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 9:
    return 5;
  default:
    return 1;
  case 0x25:
    return 2;
  case 0x27:
    return 3;
  case 0x28:
    return 0;
  case 0x3f:
    return 4;
  }
}
