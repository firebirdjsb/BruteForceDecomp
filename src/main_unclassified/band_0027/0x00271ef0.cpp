/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A73AB0D63D552168957588099B407201F3F3477C94AC9D59D594AC28547D78F
 * Entry: 0x00271ef0, Ghidra index: 8825, label: FUN_00271ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271ef0(undefined4 param_1)

{
  int in_ECX;
  int *piVar1;
  
  FUN_00271430(in_ECX,(int *)(in_ECX + 0xa4),param_1);
  if (*(int *)(in_ECX + 0xa4) != 4) {
    if (*(undefined4 **)(in_ECX + 0x9c) == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)**(undefined4 **)(in_ECX + 0x9c);
    }
    if (piVar1 != *(int **)(in_ECX + 0x9c)) {
      do {
        (**(code **)(*(int *)piVar1[2] + 0x10))(param_1);
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x9c));
    }
  }
  return;
}
