/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49D6389AAEE66C80DFDAA8343539FEBDA0773C868FD0ACEE79B75BE400553C3E
 * Entry: 0x000a3b80, Ghidra index: 1949, label: FUN_000a3b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a3b80(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[6] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0x12] = 0;
  *in_EAX = 0xef250533;
  in_EAX[1] = 0x1ea5611;
  in_EAX[6] = 0xfa3c2612;
  in_EAX[9] = 0xff;
  in_EAX[10] = 0xff;
  in_EAX[0xb] = 0xff;
  in_EAX[7] = 0xbf800000;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[0xc] = in_EAX[6];
  in_EAX[0xf] = 0xff;
  in_EAX[0x10] = 0xff;
  in_EAX[0x11] = 0xff;
  in_EAX[0xd] = 0xbf800000;
  *(undefined1 *)(in_EAX + 0xe) = 0;
  in_EAX[0x12] = 0xfa3c2612;
  *(undefined1 *)(in_EAX + 0x15) = 0xff;
  in_EAX[0x16] = 0x1a;
  in_EAX[0x18] = 0x1a;
  in_EAX[0x13] = 0;
  in_EAX[0x14] = 0xc0000000;
  in_EAX[0x17] = 0x4c;
  in_EAX[0x19] = 0x3ca3d70a;
  in_EAX[2] = 0x165b2a01;
  in_EAX[3] = 0x3c088723;
  in_EAX[4] = 0x3c088723;
  in_EAX[5] = 0x3f2aaa3b;
  *(undefined1 *)((int)in_EAX + 0x69) = 0;
  *(undefined1 *)((int)in_EAX + 0x6a) = 0;
  *(undefined1 *)((int)in_EAX + 0x6b) = 0;
  in_EAX[0x1c] = 0x3d4ccccd;
  *(undefined1 *)(in_EAX + 0x1a) = 1;
  in_EAX[0x1b] = 0;
  in_EAX[0x1d] = 0x41200000;
  in_EAX[0x1e] = 0x42700000;
  in_EAX[0x1f] = 0;
  return;
}
