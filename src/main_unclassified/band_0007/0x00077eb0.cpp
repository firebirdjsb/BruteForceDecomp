/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BAE330E7B50ADB10BCF5AD34FC3509582B231AEFF270E5F7550654F10706160
 * Entry: 0x00077eb0, Ghidra index: 1417, label: FUN_00077eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00077eb0(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
    *(float *)(param_1 + 4) = param_2;
  }
  else {
    if (iVar1 == 2) {
      *(int *)(param_1 + 4) = (int)param_2;
      return;
    }
    if (iVar1 == 3) {
      if (ABS(param_2) < 1e-06) {
        *(undefined1 *)(param_1 + 4) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  return;
}
