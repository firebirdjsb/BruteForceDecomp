/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0F42FF24D5DC38ECB0B0E15951A0111A93E923A0C790626AADC2E435F8AC9D7
 * Entry: 0x0007b3c0, Ghidra index: 1465, label: FUN_0007b3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007b3c0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0xf;
  *(undefined1 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0x38) = 0xf;
  *(undefined4 *)(in_EAX + 0x34) = 0;
  *(undefined1 *)(in_EAX + 0x24) = 0;
  *(undefined4 *)(in_EAX + 0x54) = 7;
  *(undefined4 *)(in_EAX + 0x50) = 0;
  *(undefined2 *)(in_EAX + 0x40) = 0;
  *(undefined4 *)(in_EAX + 0x58) = 0;
  puVar1 = (undefined4 *)(in_EAX + 0x5c);
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EAX + 0x80) = 0;
  *(undefined4 *)(in_EAX + 0x84) = 0;
  *(undefined4 *)(in_EAX + 0x88) = 0;
  *(undefined4 *)(in_EAX + 0x90) = 0;
  *(undefined4 *)(in_EAX + 0x94) = 0;
  *(undefined4 *)(in_EAX + 0x98) = 0;
  return;
}
