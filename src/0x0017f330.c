/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3609975D07D0802BCEF5D25929DAC4A57F0B806E08EB9053B32C4A70582E27CE
 * Entry: 0x0017f330, Ghidra index: 5124, label: FUN_0017f330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0017f330(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)FUN_0017ee90();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x2c))(param_2,param_3);
  }
  return uVar2 & 0xffffff00;
}
