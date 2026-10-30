/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0CD419451446101C729A01AC417483A458D15BB3B7B691E623E0A48CB8AB351
 * Entry: 0x001e36a0, Ghidra index: 6770, label: FUN_001e36a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e36a0(void)

{
  int iVar1;
  int unaff_EDI;
  undefined4 uStack_4;
  
  FUN_001e36f0(unaff_EDI);
  FUN_001e3850();
  iVar1 = FUN_0033005b(0,0,&uStack_4);
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_00330020(uStack_4);
    } while (iVar1 == 0);
    FUN_0033002b(uStack_4);
    *(bool *)(unaff_EDI + 0x1c) = iVar1 == 0x153101;
  }
  return;
}
