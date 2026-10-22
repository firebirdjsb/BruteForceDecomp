/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 105A749E47BE4E3570C84A23F119B857734540EB810FEA7AA5FEFE76C0A6469D
 * Entry: 0x002a7fe0, Ghidra index: 9607, label: FUN_002a7fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a7fe0(void)

{
  byte bVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  byte bStack_32;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(*unaff_ESI + 0x30))();
  uStack_1c = 0x2a7ff4;
  (**(code **)(*unaff_ESI + 0x38))();
  uStack_1c = 0;
  uStack_20 = 1;
  uStack_24 = &stack0xffffffef;
  (**(code **)(*unaff_EDI + 0x14))();
  (**(code **)(*unaff_EDI + 0x14))();
  bStack_32 = (byte)((uint)((int)&uStack_24 + 2) >> 0x10);
  bVar1 = 0;
  if (bStack_32 != 0) {
    do {
      (**(code **)(*unaff_ESI + 0x20))();
      (**(code **)(*unaff_ESI + 0x24))();
      (**(code **)(*unaff_EDI + 0x14))();
      (**(code **)(*unaff_EDI + 0x14))();
      bVar1 = bVar1 + 1;
    } while (bVar1 < bStack_32);
  }
  return;
}
