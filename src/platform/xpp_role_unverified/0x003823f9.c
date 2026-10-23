/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35336C487E9832B8079A723A108AC31A05B0F8C4A771617C84C8129D8C0B453A
 * Entry: 0x003823f9, Ghidra index: 13594, label: FUN_003823f9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003823f9(char *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == '\x04') {
    iVar1 = FUN_00380f83();
    while (iVar1 != 0) {
      iVar2 = FUN_00380f9a();
      if (*(int *)(iVar1 + 0x10) == 0) {
        FUN_00382383();
        iVar1 = iVar2;
      }
      else {
        (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))(iVar1);
        iVar1 = iVar2;
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00382383();
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(param_1);
  }
  return;
}
