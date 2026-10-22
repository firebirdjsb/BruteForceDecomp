/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E23B52DF732078BA67C621FD3C6EF7F7D7EEB1A29F362C56AAAD2C43268BEC7
 * Entry: 0x002ffa10, Ghidra index: 11072, label: FUN_002ffa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ffa10(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int in_EDX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_EDX + 0x98) = in_EAX[0x21];
  *(undefined4 *)(in_EDX + 0x94) = in_EAX[0x20];
  puVar2 = in_EAX;
  puVar3 = (undefined4 *)(in_EDX + 0x14);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_EDX + 0x44) = in_EAX[0xc];
  *(undefined4 *)(in_EDX + 0x48) = in_EAX[0xd];
  *(undefined4 *)(in_EDX + 0x4c) = in_EAX[0xe];
  puVar2 = in_EAX + 0x10;
  puVar3 = (undefined4 *)(in_EDX + 0x54);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_EDX + 0x84) = in_EAX[0x1c];
  *(undefined4 *)(in_EDX + 0x88) = in_EAX[0x1d];
  *(undefined4 *)(in_EDX + 0x8c) = in_EAX[0x1e];
  *(undefined4 *)(in_EDX + 0x9c) = in_EAX[0x22];
  *(undefined4 *)(in_EDX + 0xa0) = in_EAX[0x23];
  *(undefined4 *)(in_EDX + 0xa4) = in_EAX[0x24];
  *(undefined4 *)(in_EDX + 0xa8) = in_EAX[0x25];
  *(undefined4 *)(in_EDX + 0xac) = in_EAX[0x26];
  *(undefined4 *)(in_EDX + 0xb0) = in_EAX[0x27];
  return;
}
