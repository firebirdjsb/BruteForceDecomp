/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46E1F8B6424535F27E79F0E20F41F87DA160D0929E481B6B87A8F2011A1F255D
 * Entry: 0x0017f2d0, Ghidra index: 5122, label: FUN_0017f2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017f2d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  
  iVar1 = FUN_0017ee90();
  if (iVar1 != 0) {
    uVar2 = FUN_0017f580(in_ECX,iVar1,param_2);
    return uVar2;
  }
  return 0;
}
