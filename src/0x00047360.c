/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96A5DE9C9007D44159CA5047976CF80237AC24F37C12D967B834DDAB37B23DA9
 * Entry: 0x00047360, Ghidra index: 556, label: FUN_00047360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00047360(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_000120f0();
  iVar2 = FUN_000120f0();
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x59c) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0005bca0();
  }
  if (iVar2 == iVar1) {
    return 0;
  }
  if (iVar2 != 0) {
    iVar3 = (**(code **)(*in_ECX + 0xa0))(param_1);
    if ((iVar3 != 1) && (iVar3 == 0)) {
      iVar1 = (**(code **)(*in_ECX + 0x4b8))();
      return iVar1;
    }
  }
  return iVar3;
}
