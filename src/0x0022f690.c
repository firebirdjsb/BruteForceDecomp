/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87C6683B5E129FEB6B9C2382929571EC4C0CF5D5C5D2424D15DB6662BEF15094
 * Entry: 0x0022f690, Ghidra index: 7740, label: FUN_0022f690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022f690(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) == 0) {
      if (*(int *)(iVar2 + 0x10) == 0) {
        return;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0xb0);
      if (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 3) {
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 0x1d4);
    }
    if ((((iVar2 != 0) &&
         (iVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 0xbec) + 0xc))(iVar2), iVar1 != 0))
        && (FUN_0008df50(0x3f800000), *(int *)(iVar2 + 0x7a8) != 0)) &&
       (*(int *)(iVar2 + 0x5e4) != 0)) {
      fVar3 = (float10)FUN_0006c6f0();
      fVar4 = (float)((float10)4.0 / fVar3);
      if (1.0 <= (float)((float10)4.0 / fVar3)) {
        fVar4 = 1.0;
      }
      FUN_0006bdd0(fVar4,0,0);
    }
  }
  return;
}
