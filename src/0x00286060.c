/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 928FC52554C0205FDB1B4FA02C7E62358EEF77DDD401F02EB38A8767BED61C9E
 * Entry: 0x00286060, Ghidra index: 9077, label: FUN_00286060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00286060(undefined4 param_1)

{
  int in_ECX;
  int *piVar1;
  
  if (*(undefined4 **)(in_ECX + 0x14) == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)**(undefined4 **)(in_ECX + 0x14);
  }
  if (piVar1 != *(int **)(in_ECX + 0x14)) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x3c))((int *)piVar1[2],param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0x14));
  }
  return;
}
