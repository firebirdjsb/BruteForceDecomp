/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C19DCD4B5416DF4B5DF932225ABD23E0569AF3AAA5E65F2B1292A26B5904B8BC
 * Entry: 0x0004d7f0, Ghidra index: 654, label: FUN_0004d7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004d7f0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *unaff_EDI;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  if (puVar4 != puVar1) {
    do {
      iVar2 = puVar4[3];
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 4) != 0)) {
        if (unaff_EDI != (undefined4 *)0x0) {
          cVar3 = (**(code **)*unaff_EDI)(iVar2);
          if (cVar3 == '\0') goto LAB_0004d834;
        }
        FUN_001611d0();
      }
LAB_0004d834:
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != *(undefined4 **)(param_2 + 4));
  }
  return;
}
