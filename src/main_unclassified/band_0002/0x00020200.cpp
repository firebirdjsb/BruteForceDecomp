/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3695E018C5020C93CD25AE64EF6B93289AC5EA093CA86C5D56EBA30FB1BBC828
 * Entry: 0x00020200, Ghidra index: 175, label: FUN_00020200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00020200(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = (**(code **)(*param_1 + 0x3c))();
  if (iVar2 == *(int *)(in_ECX + 8)) {
    cVar1 = (**(code **)**(undefined4 **)(in_ECX + 4))(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
