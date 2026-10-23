/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBE273BE551D509F3BFA7897AE779E8178C2A978237E7A275FF5AF5A4B66D43B
 * Entry: 0x00282310, Ghidra index: 9058, label: FUN_00282310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00282310(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  (**(code **)(*param_2 + 0x10))();
  piVar1 = param_2;
  (**(code **)(*param_2 + 0x20))(param_2,&stack0x00000000);
  if (&stack0x00000000 == (undefined1 *)0xf435e227) {
    param_2[0xb] = 0;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 0;
}
