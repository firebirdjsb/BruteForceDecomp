/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65A6DDAC1792E7FB8F75357A51B7B6A75A5F988284BE602F2945FB34E7FCB9BF
 * Entry: 0x000efa30, Ghidra index: 2981, label: FUN_000efa30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000efa30(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 0x11:
    return 0;
  case 0x12:
    return 1;
  case 0x13:
    return 2;
  case 0x14:
    return 3;
  default:
    return 4;
  }
}
