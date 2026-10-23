/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21665F5C767A5F767F6F525A81380AEFF891340A07549D4359EA7DDDD8968A13
 * Entry: 0x000aad50, Ghidra index: 2036, label: FUN_000aad50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_000aad50(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  uVar6 = 0;
  iVar4 = (**(code **)(**(int **)(in_EAX + 0x28) + 8))();
  if (*(int *)(iVar4 + 0x28) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x28) + -0x2c;
  }
  iVar4 = *(int *)(iVar4 + 0xa8);
  uVar7 = 0;
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x2e8);
    cVar3 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x20))();
    uVar7 = uVar6;
    if ((((cVar3 != '\0') && (iVar1 = *(int *)(iVar1 + 0x164), iVar1 != 0)) &&
        (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) &&
       ((iVar1 != 0 && (*(int *)(iVar1 + 0x1f8) == 0)))) {
      iVar5 = FUN_0022da80();
      if (iVar5 == 0) {
        if (*(float *)(*(int *)(iVar1 + 0x228) + 0x14c) != 0.0) {
          return 0;
        }
      }
      else if (*(short *)(iVar5 + 0x1a) != 0) {
        return 0;
      }
      piVar2 = *(int **)(iVar4 + 0x2e8);
      uVar7 = 1;
      cVar3 = (**(code **)(*piVar2 + 0x20))();
      if ((cVar3 == '\0') || (piVar2[8] == 0)) {
        iVar4 = *(int *)(iVar4 + 0x2e8);
        cVar3 = (**(code **)(*(int *)(iVar4 + 0x44) + 0x20))();
        if ((cVar3 == '\0') || (*(int *)(iVar4 + 100) == 0)) {
          uVar7 = 0;
        }
      }
    }
  }
  return uVar7;
}
