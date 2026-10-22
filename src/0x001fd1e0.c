/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 285C472008D29AC330BF2B75AB81BD367CA468F52FF9C14C4045AC10303ACF1B
 * Entry: 0x001fd1e0, Ghidra index: 7187, label: FUN_001fd1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fd1e0(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x10) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x14) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x18) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x1c) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
  if (*(int *)(in_ECX + 4) != *(int *)(in_EAX + 4)) {
    FUN_0008f6a0(*(int *)(in_EAX + 4));
  }
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_EAX + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_EAX + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_EAX + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_EAX + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_EAX + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_EAX + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_EAX + 0x20);
  return;
}
