/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61CE9F8F7F46CC37B116B0C99FC2FEC9A8A785CD0AB8174DEFBC3E71993AAF51
 * Entry: 0x002a8320, Ghidra index: 9612, label: FUN_002a8320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a8320(void)

{
  byte bVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  byte bStack_3e;
  undefined4 uStack_30;
  
  (**(code **)(*unaff_EDI + 0xc))();
  uStack_30 = 0x2a8339;
  (**(code **)(*unaff_ESI + 0x10))();
  uStack_30 = (uint)&stack0xffffffeb >> 0x18;
  (**(code **)(*unaff_EDI + 0x38))();
  (**(code **)(*unaff_ESI + 0x10))();
  bStack_3e = (byte)((uint)((int)&uStack_30 + 2) >> 0x10);
  bVar1 = 0;
  if (bStack_3e != 0) {
    do {
      (**(code **)(*unaff_ESI + 0x10))();
      (**(code **)(*unaff_ESI + 0x10))();
      (**(code **)(*unaff_EDI + 0x14))();
      bVar1 = bVar1 + 1;
    } while (bVar1 < bStack_3e);
  }
  return;
}
