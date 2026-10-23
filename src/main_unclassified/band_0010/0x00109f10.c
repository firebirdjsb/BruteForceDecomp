/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0570C2F4EAB6B186C977BC2A2C6AEEE44B64C3409765E1D55A8BB3FBE568770F
 * Entry: 0x00109f10, Ghidra index: 3418, label: FUN_00109f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00109f10(float param_1)

{
  int *piVar1;
  int in_EDX;
  
  if (param_1 != *(float *)(in_EDX + 0x60)) {
    *(float *)(in_EDX + 0x60) = param_1;
    if (0.0 <= param_1) {
      if (1.0 < param_1) {
        *(undefined4 *)(in_EDX + 0x60) = 0x3f800000;
      }
    }
    else {
      *(undefined4 *)(in_EDX + 0x60) = 0;
    }
    if ((*(int *)(in_EDX + 4) != 0) &&
       (piVar1 = *(int **)(*(int *)(in_EDX + 4) + 0x94), piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00109f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x28))();
      return;
    }
  }
  return;
}
