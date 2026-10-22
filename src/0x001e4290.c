/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D5B0259B230CF51BC3BF715536D3CA20B065B53C71C00BFA71783EF22D41904
 * Entry: 0x001e4290, Ghidra index: 6774, label: FUN_001e4290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e4290(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(param_1 + 0x14);
  }
  if (piVar3 != *(int **)(param_1 + 0x14)) {
    do {
      iVar1 = *(int *)(param_2 + 4);
      iVar2 = FUN_001e45c0(param_2,iVar1,*(undefined4 *)(iVar1 + 4),piVar3 + 2);
      FUN_001e4640();
      *(int *)(iVar1 + 4) = iVar2;
      **(int **)(iVar2 + 4) = iVar2;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x14));
  }
  return;
}
