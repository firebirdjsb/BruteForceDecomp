/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 814ACC14D47D971324B7CEFFA7DD9FF130BB8D89C6B4CEEC9DC0FF83C0C664AB
 * Entry: 0x0004df70, Ghidra index: 662, label: FUN_0004df70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004df70(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000120f0();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ca0();
    if (iVar1 == 0) {
      FUN_0004de90();
      return;
    }
    uVar2 = FUN_00049ca0();
    FUN_0004ddb0(uVar2);
  }
  return;
}
