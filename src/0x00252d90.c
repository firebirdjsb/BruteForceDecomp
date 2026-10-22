/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB0A4A1B89AD93299CBA6F544503AB5293201183914186807D8C99929E7FEE0B
 * Entry: 0x00252d90, Ghidra index: 8386, label: FUN_00252d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00252d90(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    piVar1 = (int *)in_EAX[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      in_EAX[3] = 0;
    }
    piVar1 = (int *)param_1[3];
    in_EAX[3] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    in_EAX = in_EAX + 4;
  }
  return in_EAX;
}
