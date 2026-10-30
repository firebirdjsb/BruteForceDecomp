/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFA0827AAD57EA16A600187655D19C5831DC498D3CD499982549D5F430A61D34
 * Entry: 0x00061910, Ghidra index: 1029, label: FUN_00061910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061910(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return;
  }
  do {
    *param_4 = *param_2;
    piVar1 = (int *)param_4[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_4[1] = 0;
    }
    piVar1 = (int *)param_2[1];
    param_4[1] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    param_2 = param_2 + 2;
    param_4 = param_4 + 2;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}
