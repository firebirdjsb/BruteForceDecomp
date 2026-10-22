/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E513F4767771BA16B44E25128DA46A4968BCD1848F94DF185C1F6155790563E5
 * Entry: 0x001e19f0, Ghidra index: 6737, label: FUN_001e19f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001e19f0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_EDI;
  
  iVar1 = *(int *)(in_EAX + 8);
  for (iVar5 = *(int *)(in_EAX + 4); iVar5 != iVar1; iVar5 = iVar5 + 0x1c) {
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar2 = iVar5 + 4;
    }
    else {
      iVar2 = *(int *)(iVar5 + 4);
    }
    piVar3 = (int *)(**(code **)(*unaff_EDI + 0x10))(iVar2);
    if (piVar3 != (int *)0x0) {
      iVar2 = *unaff_EDI;
      uVar4 = (**(code **)(*piVar3 + 4))(0);
      (**(code **)(iVar2 + 4))(uVar4);
    }
  }
  return 1;
}
