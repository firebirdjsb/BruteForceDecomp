/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADDA8F602F646D6EE87CD77DFCB7B345F8F51AE4E9F0FDAD5A2B6C8EF535B494
 * Entry: 0x001b2050, Ghidra index: 5616, label: FUN_001b2050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b2050(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_EDI + 8) - iVar1) / 0x18;
  }
  if (uVar4 < in_EAX) {
    FUN_001b83b0(*(undefined4 *)(unaff_EDI + 8));
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x18)))
     && (iVar1 + in_EAX * 0x18 != iVar2)) {
    uVar3 = FUN_001d6ab0(iVar2);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
