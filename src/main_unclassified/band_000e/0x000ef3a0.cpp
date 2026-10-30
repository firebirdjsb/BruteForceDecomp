/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 393662CCA64B43F9B962A545A7513BEFB1A2713923A998BA185C07A3DCD96578
 * Entry: 0x000ef3a0, Ghidra index: 2974, label: FUN_000ef3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_000ef3a0(undefined4 *param_1)

{
  byte bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) != 0) && ((*(byte *)(in_ECX + 0x28) & 8) != 0)) {
    FUN_000ef3a0(param_1);
    return param_1;
  }
  bVar1 = *(byte *)(in_ECX + 0x28);
  if ((bVar1 & 2) == 0) {
    *param_1 = *(undefined4 *)(in_ECX + 0x31);
    return param_1;
  }
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 0x10) != 0) {
      FUN_000b2110(in_ECX + 0x38,param_1);
      return param_1;
    }
    *param_1 = *(undefined4 *)(in_ECX + 0x29);
    return param_1;
  }
  *param_1 = *(undefined4 *)(in_ECX + 0x2d);
  return param_1;
}
