/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50EBA4B4609ECAB56CFF58E69A505DF4A76B36B3E8433C4AB40890F243982E3D
 * Entry: 0x00051520, Ghidra index: 740, label: FUN_00051520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00051520(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int unaff_EBX;
  
  if (in_ECX <= unaff_EBX) {
    *(int **)(param_1 + in_ECX * 4) = param_2;
    return;
  }
  do {
    iVar2 = (in_ECX + -1) / 2;
    piVar1 = *(int **)(param_1 + iVar2 * 4);
    if (*param_2 <= *piVar1) break;
    *(int **)(param_1 + in_ECX * 4) = piVar1;
    in_ECX = iVar2;
  } while (unaff_EBX < iVar2);
  *(int **)(param_1 + in_ECX * 4) = param_2;
  return;
}
