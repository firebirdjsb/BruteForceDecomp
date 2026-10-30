/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C09CAA900312B4E8780786933FCC7952007749E922E929E0711DCCCBB195B78
 * Entry: 0x0004ddb0, Ghidra index: 660, label: FUN_0004ddb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004ddb0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_EAX;
  int iVar3;
  
  iVar3 = FUN_000120f0();
  if (iVar3 != 0) {
    FUN_0004dcf0(in_EAX,0);
    iVar1 = *(int *)(iVar3 + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x20))();
    if ((((cVar2 != '\0') && (iVar1 = *(int *)(iVar1 + 0x164), iVar1 != 0)) &&
        (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) && (iVar1 != 0)) {
      (**(code **)(*param_1 + 0x40))();
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x2e8) + 0x144) + 0x20))();
      FUN_0022dc60();
      iVar3 = *(int *)(iVar3 + 0x2e8);
      cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
      if (((cVar2 == '\0') || (iVar3 = *(int *)(iVar3 + 0x164), iVar3 == 0)) ||
         (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 0x14)) {
        iVar3 = 0;
      }
      *(byte *)(iVar3 + 0x224) = *(byte *)(iVar3 + 0x224) | 4;
    }
  }
  return;
}
