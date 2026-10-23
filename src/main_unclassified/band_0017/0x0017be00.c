/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3B01CE6CDFFF2E962CC13F696B358EFE5C3FC39DFB13DB66857DED5C03067E3
 * Entry: 0x0017be00, Ghidra index: 5034, label: FUN_0017be00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0017be00(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  
  iVar1 = (**(code **)(*unaff_EDI + 8))();
  iVar4 = 0;
  if (iVar1 < 1) {
    return (int *)0x0;
  }
  do {
    piVar2 = (int *)(**(code **)(*unaff_EDI + 0x14))(iVar4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      iVar3 = FUN_002383b0();
      if (iVar3 == *param_1) {
        return piVar2;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar1);
  return (int *)0x0;
}
