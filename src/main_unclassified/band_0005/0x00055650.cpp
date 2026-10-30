/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEEFC4E7EC46B688C4E29A1B3278549B8A91009040AEB8AE84EEEED38558CA58
 * Entry: 0x00055650, Ghidra index: 813, label: FUN_00055650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00055650(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(in_EAX + 4);
  if (*(int *)(unaff_EDI + 0xc) != *(int *)(in_EAX + 0xc)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0xc));
  }
  uVar1 = *(undefined4 *)(in_EAX + 0x18);
  uVar2 = *(undefined4 *)(in_EAX + 0x14);
  *(undefined4 *)(unaff_EDI + 0x10) = *(undefined4 *)(in_EAX + 0x10);
  *(undefined4 *)(unaff_EDI + 0x14) = uVar2;
  *(undefined4 *)(unaff_EDI + 0x18) = uVar1;
  *(undefined4 *)(unaff_EDI + 0x28) = *(undefined4 *)(in_EAX + 0x28);
  *(undefined4 *)(unaff_EDI + 0x2c) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined4 *)(unaff_EDI + 0x30) = *(undefined4 *)(in_EAX + 0x30);
  *(undefined4 *)(unaff_EDI + 0x24) = *(undefined4 *)(in_EAX + 0x24);
  if (*(int *)(unaff_EDI + 0x20) != *(int *)(in_EAX + 0x20)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0x20));
  }
  *(byte *)(unaff_EDI + 0x34) =
       *(byte *)(unaff_EDI + 0x34) ^ (*(byte *)(in_EAX + 0x34) ^ *(byte *)(unaff_EDI + 0x34)) & 1;
  return;
}
