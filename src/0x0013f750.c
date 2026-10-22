/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D3B530C1B683AD2429B21768C2E98BF44999A2D6684F1FC5CCA8B857F617E0E
 * Entry: 0x0013f750, Ghidra index: 4060, label: FUN_0013f750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f750(int param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  
  fVar3 = 0.0;
  piVar2 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    piVar2 = (int *)**(undefined4 **)(param_1 + 0xc);
  }
  if (piVar2 != *(int **)(param_1 + 0xc)) {
    do {
      fVar1 = *(float *)(piVar2[2] + 8) + *(float *)(piVar2[2] + 4);
      if (fVar3 <= fVar1) {
        fVar3 = fVar1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0xc));
  }
  return;
}
