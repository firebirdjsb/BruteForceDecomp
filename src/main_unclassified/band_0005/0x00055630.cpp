/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25C136738529ADCCCA45FF6F33D4D0151B1E25AE4C223BFC57A149E9377F3939
 * Entry: 0x00055630, Ghidra index: 812, label: FUN_00055630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00055630(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x28) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(byte *)(in_EAX + 0x34) = *(byte *)(in_EAX + 0x34) & 0xfe;
  return;
}
