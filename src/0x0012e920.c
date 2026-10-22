/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CBD724E1A54F68F283E789374A9E469B0026054CE24989F9E5A3B40A177D75F
 * Entry: 0x0012e920, Ghidra index: 3814, label: FUN_0012e920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012e920(void)

{
  int iVar1;
  undefined4 uVar2;
  char in_CL;
  int unaff_EDI;
  
  if (in_CL == '\0') {
    iVar1 = *(int *)(unaff_EDI + 0x210);
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 0x20c);
  }
  if (iVar1 == 0) {
    if (in_CL != '\0') {
      FUN_002383f0();
      uVar2 = FUN_00160da0(0xffffffff,1);
      *(undefined4 *)(unaff_EDI + 0x20c) = uVar2;
      return;
    }
    FUN_002383f0();
    uVar2 = FUN_00160da0(0xffffffff,1);
    *(undefined4 *)(unaff_EDI + 0x210) = uVar2;
  }
  return;
}
