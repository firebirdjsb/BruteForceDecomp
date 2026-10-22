/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39B413BD0B281DCF3CB2A77D8D2326BCC7C29CFB94B567302E9D25A211B503B5
 * Entry: 0x002e9110, Ghidra index: 10550, label: FUN_002e9110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e9110(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0xc)) {
    iVar1 = (**(code **)*param_1)();
    *(int *)(in_ECX + 0xc) = iVar1;
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 4))();
      *(int *)(in_ECX + 0xc) = iVar1;
      if (-1 < iVar1) {
        uVar2 = (**(code **)(*param_1 + 8))();
        *(undefined4 *)(in_ECX + 0xc) = uVar2;
      }
    }
  }
  return *(undefined4 *)(in_ECX + 0xc);
}
