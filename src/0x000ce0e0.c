/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 244D3AA405F276FB55F25A80C3ABF9927F60730F3F026B43D6FA1BF7CF0E90E4
 * Entry: 0x000ce0e0, Ghidra index: 2549, label: FUN_000ce0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ce0e0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0;
  in_EAX[5] = 0;
  in_EAX[4] = 0;
  in_EAX[8] = 0;
  *in_EAX = 0x1a4e765d;
  in_EAX[2] = 0x3f800000;
  in_EAX[6] = 0x3f800000;
  in_EAX[7] = 0xf9d40e62;
  *(byte *)(in_EAX + 9) = *(byte *)(in_EAX + 9) & 0xfc | 4;
  in_EAX[3] = 0x3f800000;
  return;
}
