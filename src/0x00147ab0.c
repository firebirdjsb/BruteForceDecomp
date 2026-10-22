/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40465A77BB0D053E9948ED6D262D2823E737B6C08575E19AF3BE3EB3FE5EF84A
 * Entry: 0x00147ab0, Ghidra index: 4239, label: FUN_00147ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00147ab0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x1d4);
  if (piVar1[0x1ea] == 0) {
    piVar1 = (int *)(**(code **)(*(int *)(param_2 + 0x144) + 0x20))();
    if (((((char)piVar1 == '\0') || (piVar1 = *(int **)(param_2 + 0x164), piVar1 == (int *)0x0)) ||
        (*(int *)(piVar1[3] + 4) != 0x14)) ||
       (((piVar1 == (int *)0x0 || (piVar1 = (int *)piVar1[0x8a], *piVar1 != 1)) ||
        (piVar1[0x5b] == 0)))) {
      return (uint)piVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}
