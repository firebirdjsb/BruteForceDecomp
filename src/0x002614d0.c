/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9744DB70A698FCA7C75C5DFF025FDC10EB9A6812ECCD3BC42A28555E3BF531CC
 * Entry: 0x002614d0, Ghidra index: 8635, label: FUN_002614d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002614d0(int *param_1,int param_2,int param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = param_3 - param_2 >> 2;
  while (iVar2 = iVar4, 0 < iVar2) {
    iVar4 = iVar2 / 2;
    piVar1 = *(int **)(param_2 + iVar4 * 4);
    puVar3 = (uint *)(**(code **)(*piVar1 + 0xc))(piVar1);
    if (*puVar3 < *param_4) {
      param_2 = param_2 + 4 + iVar4 * 4;
      iVar4 = iVar2 + (-1 - iVar4);
    }
  }
  *param_1 = param_2;
  return;
}
