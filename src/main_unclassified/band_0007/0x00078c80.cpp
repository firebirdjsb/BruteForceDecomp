/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65E4B342C08EE3CD6E8316B8C1ECD77A5C21183DF5CFAC3ADCEEF1043C993FA6
 * Entry: 0x00078c80, Ghidra index: 1434, label: FUN_00078c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00078c80(void)

{
  undefined1 *in_EAX;
  
  *in_EAX = 0;
  *(undefined4 *)(in_EAX + 8) = 0xffffffff;
  *(undefined4 *)(in_EAX + 0xc) = 0xa6de845;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x9c) = 0;
  *(undefined4 *)(in_EAX + 4) = 4;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x98) = 4;
  *(undefined2 *)(in_EAX + 0x18) = 0;
  in_EAX[1] = 1;
  return;
}
