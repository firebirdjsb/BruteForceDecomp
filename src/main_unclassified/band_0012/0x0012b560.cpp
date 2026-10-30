/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B1B4302B3BD284937ADEF15AE4FB68D2555FFA287ACF83B84824ACC2A397216
 * Entry: 0x0012b560, Ghidra index: 3789, label: FUN_0012b560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012b560(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 500) != 0) {
    *(undefined4 *)(in_EAX + 0x704) = 0;
    *(undefined4 *)(in_EAX + 0x708) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x70c) = 0;
    *(byte *)(in_EAX + 0x262) = *(byte *)(in_EAX + 0x262) & 0xfb;
    *(undefined4 *)(in_EAX + 0x478) = 0;
    *(undefined4 *)(in_EAX + 0x474) = 0;
    *(undefined4 *)(in_EAX + 0x470) = 0;
    *(undefined4 *)(in_EAX + 0x6e4) = 0;
    *(undefined4 *)(in_EAX + 0x6e8) = 0;
    *(undefined4 *)(in_EAX + 0x1f0) = 0;
    *(undefined4 *)(in_EAX + 0x58c) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x6f4) = 0;
    *(undefined4 *)(in_EAX + 0x6f0) = 0;
    *(undefined4 *)(in_EAX + 0x6ec) = 0;
    *(byte *)(in_EAX + 0x261) = *(byte *)(in_EAX + 0x261) & 0xbf;
    *(undefined4 *)(in_EAX + 0x700) = 0;
    *(undefined4 *)(in_EAX + 0x6fc) = 0;
    *(undefined4 *)(in_EAX + 0x6f8) = 0;
    *(byte *)(in_EAX + 0x261) = *(byte *)(in_EAX + 0x261) & 0x7f;
    *(undefined4 *)(in_EAX + 0x71c) = 0x3f800000;
    *(byte *)(in_EAX + 0x262) = *(byte *)(in_EAX + 0x262) | 1;
    *(undefined4 *)(in_EAX + 0x720) = 0x3f800000;
  }
  return;
}
