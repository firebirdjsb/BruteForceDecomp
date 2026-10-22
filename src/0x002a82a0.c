/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDEAC49161229901EB8D9B8C8E8B4F07B42DC317D54D49C6AA87C70621FF22BC
 * Entry: 0x002a82a0, Ghidra index: 9611, label: FUN_002a82a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a82a0(void)

{
  byte bVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  byte bStack_36;
  undefined4 uStack_28;
  
  (**(code **)(*unaff_EDI + 0xc))();
  uStack_28 = 0x2a82b9;
  (**(code **)(*unaff_ESI + 0x10))();
  uStack_28 = (uint)&stack0xfffffff3 >> 0x18;
  (**(code **)(*unaff_EDI + 0x34))();
  (**(code **)(*unaff_ESI + 0x10))();
  bStack_36 = (byte)((uint)((int)&uStack_28 + 2) >> 0x10);
  bVar1 = 0;
  if (bStack_36 != 0) {
    do {
      (**(code **)(*unaff_ESI + 0x10))();
      (**(code **)(*unaff_ESI + 0x10))();
      (**(code **)(*unaff_EDI + 0x14))();
      bVar1 = bVar1 + 1;
    } while (bVar1 < bStack_36);
  }
  return;
}
