/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D10A19DB8BC171717E5088662761549B208924D7FF822DD05B288C719057E33
 * Entry: 0x002e9970, Ghidra index: 10556, label: FUN_002e9970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e9970(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x28) == '\0') {
    if (-1 < *(int *)(in_ECX + 0xc)) {
      iVar1 = (**(code **)*param_1)();
      *(int *)(in_ECX + 0xc) = iVar1;
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 4))();
        *(int *)(in_ECX + 0xc) = iVar1;
        if (-1 < iVar1) {
          uVar2 = (**(code **)(*param_1 + 8))();
          *(undefined4 *)(in_ECX + 0xc) = uVar2;
          return uVar2;
        }
      }
    }
  }
  else if (-1 < *(int *)(in_ECX + 0xc)) {
    iVar1 = *(int *)(in_ECX + 0x30);
    if (iVar1 == *(int *)(in_ECX + 8)) {
      uVar2 = (**(code **)*param_1)();
      *(undefined4 *)(in_ECX + 0xc) = uVar2;
    }
    if (-1 < *(int *)(in_ECX + 0xc)) {
      iVar3 = (**(code **)(*param_1 + 4))();
      *(int *)(in_ECX + 0xc) = iVar3;
      if ((-1 < iVar3) && (iVar1 != *(int *)(in_ECX + 0x30))) {
        uVar2 = (**(code **)(*param_1 + 8))();
        *(undefined4 *)(in_ECX + 0xc) = uVar2;
      }
    }
  }
  return *(undefined4 *)(in_ECX + 0xc);
}
