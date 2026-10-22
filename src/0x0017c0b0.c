/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2982A96E1FE8176322DCCBA0A5CD2F6DF7575CD0FF90BEE93711EB13957840F
 * Entry: 0x0017c0b0, Ghidra index: 5039, label: FUN_0017c0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017c0b0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (*(char *)(in_EAX + 0x34) == '\0') {
    *(undefined1 *)(in_EAX + 0x34) = 1;
    *(undefined4 *)(in_EAX + 0x30) = *(undefined4 *)(in_ECX + 8);
  }
  if (*(char *)(in_EAX + 0x3c) == '\0') {
    *(undefined1 *)(in_EAX + 0x3c) = 1;
    *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(in_ECX + 0xc);
  }
  if (*(char *)(in_EAX + 0x4c) == '\0') {
    *(undefined1 *)(in_EAX + 0x4c) = 1;
    *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(in_ECX + 0x10);
  }
  if (*(char *)(in_EAX + 0x54) == '\0') {
    *(undefined1 *)(in_EAX + 0x54) = 1;
    *(undefined4 *)(in_EAX + 0x50) = *(undefined4 *)(in_ECX + 0x14);
  }
  if (*(char *)(in_EAX + 0x5c) == '\0') {
    *(undefined1 *)(in_EAX + 0x5c) = 1;
    *(undefined4 *)(in_EAX + 0x58) = *(undefined4 *)(in_ECX + 0x18);
  }
  return;
}
