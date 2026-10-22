/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B012A2E4300ADD639413D490001A57627EB035E1628EFFC2085A93FC8CC3B58D
 * Entry: 0x00348090, Ghidra index: 12889, label: FUN_00348090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00348090(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (param_1 == *(uint *)(in_ECX + 0xa80)) {
    if (*(int *)(in_ECX + 0xa84) != 0) {
      piVar3 = (int *)(*(int *)(in_ECX + 0xa84) + 8);
      *piVar3 = *piVar3 + 1;
    }
    puVar2 = *(undefined4 **)(in_ECX + 0xa84);
  }
  else {
    for (puVar1 = *(undefined4 **)(in_ECX + 0xa78); puVar2 = (undefined4 *)0x0,
        puVar1 != (undefined4 *)(in_ECX + 0xa78); puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[5] & param_1) == puVar1[4]) {
        puVar1[2] = puVar1[2] + 1;
        puVar2 = puVar1;
        break;
      }
    }
    *(uint *)(in_ECX + 0xa80) = param_1;
    *(undefined4 **)(in_ECX + 0xa84) = puVar2;
  }
  return puVar2;
}
