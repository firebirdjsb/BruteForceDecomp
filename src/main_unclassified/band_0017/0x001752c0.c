/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25877FAD5477E6B957ECF93BB356BC2C2CAD9A03B82FCDD43877C5952FE4DF29
 * Entry: 0x001752c0, Ghidra index: 4929, label: FUN_001752c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001752c0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x74) + 0x18))(*(int **)(unaff_EDI + 0x74));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x74) + 0x20))
                                (*(int **)(unaff_EDI + 0x74),iVar3);
      if (*piVar2 == 9) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}
