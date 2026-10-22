/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90F51CCCDC9B1F1626EA912B886606F3FF5E0307DA8971CA93CB3A9862D7CBC9
 * Entry: 0x00116c70, Ghidra index: 3588, label: FUN_00116c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00116c70(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int unaff_EBX;
  int iVar3;
  
  if (*(int *)(unaff_EBX + 0x2e8) != 0) {
    iVar3 = 1;
    do {
      piVar2 = (int *)FUN_0014d230();
      if (((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x58))(), cVar1 != '\0')) &&
         ((int *)piVar2[8] != (int *)0x0)) {
        (**(code **)(*(int *)piVar2[8] + 0x11c))(param_1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
  }
  return 1;
}
