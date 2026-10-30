/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74B038032C6353185048FF2F32F515F78E40EF1176E07F0FD6D6317557A3F054
 * Entry: 0x0013de50, Ghidra index: 4023, label: FUN_0013de50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013de50(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined1 *in_ECX;
  undefined4 *puVar2;
  
  *(undefined1 *)(in_EAX + 0x34) = *in_ECX;
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_ECX + 0x18);
  *(byte *)(in_EAX + 0x35) =
       *(byte *)(in_EAX + 0x35) ^ (*(byte *)(in_EAX + 0x35) ^ in_ECX[0x1c]) & 1;
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_ECX + 0x24);
  *(float *)(in_EAX + 0x30) = (float)(byte)in_ECX[0x1c];
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  for (puVar2 = *(undefined4 **)(in_ECX + 8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    if (*(char *)(in_EAX + 0x36) == '\0') {
      *(undefined4 *)(in_EAX + 0x38) = *puVar2;
      *(char *)(in_EAX + 0x36) = *(char *)(in_EAX + 0x36) + '\x01';
    }
  }
  return;
}
