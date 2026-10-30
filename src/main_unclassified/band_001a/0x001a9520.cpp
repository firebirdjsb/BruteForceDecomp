/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33EE581441D15F7DCEC90F6E4D8834B61EE312C9E846C953B935DB6AB899CA96
 * Entry: 0x001a9520, Ghidra index: 5465, label: FUN_001a9520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9520(void)

{
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x2c;
    if (iVar1 != 0) goto LAB_001a9555;
  }
  FUN_001b06f0();
LAB_001a9555:
  FUN_001b5430();
  return iVar1 * 0x2c + *(int *)(unaff_ESI + 4);
}
