/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75CFC4260E77FC8FB3B0156DE0D13B9A0C99E1A9D33E239ED9F22E6300D3B96C
 * Entry: 0x002c5c60, Ghidra index: 10070, label: FUN_002c5c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c5c60(void)

{
  undefined2 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[4] = 1;
  *(undefined4 *)(in_EAX + 2) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x12) = 0xc08f4000;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0xe) = 1;
  return;
}
