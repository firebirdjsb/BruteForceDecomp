/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F6D1FC436D2E52C3A33DAC67C7756FE5AC707C7E8819DE2835FC7DB63FCBEEF
 * Entry: 0x001001a0, Ghidra index: 3212, label: FUN_001001a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001001a0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = FUN_000ffb00(unaff_ESI);
  if (iVar3 != -1) {
    piVar1 = *(int **)(*(int *)(unaff_ESI + 0x74) + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(param_1);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}
