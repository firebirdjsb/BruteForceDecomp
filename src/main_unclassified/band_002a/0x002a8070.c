/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8064A3DFD9EF1BFE36118311119A804D6ACB2980E9F3008E5FC3D3330A6C54DF
 * Entry: 0x002a8070, Ghidra index: 9608, label: FUN_002a8070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a8070(void)

{
  byte bVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  byte bStack_3a;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  (**(code **)(*unaff_ESI + 0x34))();
  uStack_24 = 0x2a8084;
  (**(code **)(*unaff_ESI + 0x3c))();
  uStack_24 = 0;
  uStack_28 = 1;
  uStack_2c = &stack0xffffffe7;
  (**(code **)(*unaff_EDI + 0x14))();
  (**(code **)(*unaff_EDI + 0x14))();
  bStack_3a = (byte)((uint)((int)&uStack_2c + 2) >> 0x10);
  bVar1 = 0;
  if (bStack_3a != 0) {
    do {
      (**(code **)(*unaff_ESI + 0x24))();
      (**(code **)(*unaff_ESI + 0x28))();
      (**(code **)(*unaff_EDI + 0x14))();
      (**(code **)(*unaff_EDI + 0x14))();
      bVar1 = bVar1 + 1;
    } while (bVar1 < bStack_3a);
  }
  return;
}
