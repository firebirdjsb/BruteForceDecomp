/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BD0BEEC0695FB1A620892F9149AFE5E5BBBFF1AFC4B3874FED86D278A8B45E9
 * Entry: 0x0014d610, Ghidra index: 4366, label: FUN_0014d610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014d610(int param_1)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  
  *(int *)(param_1 + 8) = unaff_ESI;
  cVar1 = (**(code **)(*(int *)(unaff_ESI + 0x144) + 0x20))();
  if ((((cVar1 != '\0') && (iVar2 = *(int *)(unaff_ESI + 0x164), iVar2 != 0)) &&
      (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 0x14)) && (iVar2 != 0)) {
    cVar1 = (**(code **)(*(int *)(unaff_ESI + 0x144) + 0x20))();
    if (((cVar1 == '\0') || (iVar2 = *(int *)(unaff_ESI + 0x164), iVar2 == 0)) ||
       (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 0x14)) {
      iVar2 = 0;
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(iVar2 + 0x228) + 0xec);
  }
  return;
}
