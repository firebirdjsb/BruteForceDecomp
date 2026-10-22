/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A736AEC708591B0C77038831DF29381C625370084AFD456D8509A5EEE92A238
 * Entry: 0x0008d040, Ghidra index: 1710, label: FUN_0008d040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008d040(int param_1)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  piVar4 = (int *)(unaff_EBX + 100);
  do {
    iVar1 = FUN_0008c1b0(unaff_EBX);
    if ((iVar1 != 9) || (*piVar4 != 0)) {
      if (iVar1 == param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar3 < 4);
  return -1;
}
