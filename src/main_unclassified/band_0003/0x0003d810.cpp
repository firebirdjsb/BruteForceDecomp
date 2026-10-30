/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74E4625A5494944143F6452B1DCEF7492AE64078F5F9E7559F7A98EA81C9E112
 * Entry: 0x0003d810, Ghidra index: 454, label: FUN_0003d810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_0003d810(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0xc) != *(int *)(in_EAX + 0xc)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0xc));
  }
  *(undefined4 *)(unaff_EBX + 4) = *(undefined4 *)(in_EAX + 4);
  uVar1 = *(undefined4 *)(in_EAX + 0x18);
  uVar2 = *(undefined4 *)(in_EAX + 0x14);
  *(undefined4 *)(unaff_EBX + 0x10) = *(undefined4 *)(in_EAX + 0x10);
  *(undefined4 *)(unaff_EBX + 0x14) = uVar2;
  *(undefined4 *)(unaff_EBX + 0x18) = uVar1;
  *(undefined4 *)(unaff_EBX + 0x28) = *(undefined4 *)(in_EAX + 0x28);
  *(undefined4 *)(unaff_EBX + 0x2c) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined4 *)(unaff_EBX + 0x30) = *(undefined4 *)(in_EAX + 0x30);
  *(undefined4 *)(unaff_EBX + 0x24) = *(undefined4 *)(in_EAX + 0x24);
  if (*(int *)(unaff_EBX + 0x20) != *(int *)(in_EAX + 0x20)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0x20));
  }
  return;
}
