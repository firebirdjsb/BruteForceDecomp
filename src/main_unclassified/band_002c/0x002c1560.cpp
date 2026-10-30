/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7789F4A8F1B1DF85B6CDE4DB24E7DA87E28B7A3F9E4F3326FCC108ABE47EAEE0
 * Entry: 0x002c1560, Ghidra index: 10030, label: FUN_002c1560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002c1560(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  
  if (*(int *)(in_EAX + 0x3c) == 0) {
    uVar2 = FUN_002bbeb0();
    *(undefined4 *)(in_EAX + 0x3c) = uVar2;
  }
  piVar1 = (int *)(*(int *)(in_EAX + 0x3c) + 100);
  *piVar1 = *piVar1 + 1;
  if ((*(char *)(in_EAX + 0x70) < '\b') &&
     (*(int *)(*(int *)(in_EAX + 0x3c) + 0x60) < *(int *)(*(int *)(in_EAX + 0x14) + 0x120))) {
    FUN_002bbf70();
  }
  return *(undefined4 *)(in_EAX + 0x3c);
}
