/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BCDA89E8DE656DCC0D37025B44AE678CC27BBAB0C3023DF710E4F725C6908B4
 * Entry: 0x00040eb0, Ghidra index: 487, label: FUN_00040eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00040eb0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  
  if (in_ECX[0x1d4] == 0) {
    iVar2 = (**(code **)(*in_ECX + 0x5c0))(param_1);
    if (iVar2 == 2) {
      (**(code **)(*in_ECX + 0x5bc))();
      (**(code **)(*in_ECX + 0x448))();
      in_ECX[0x1d4] = 1;
    }
  }
  else if (in_ECX[0x1d4] == 1) {
    uVar1 = (**(code **)(*in_ECX + 0x450))(param_1);
    return uVar1;
  }
  return 1;
}
