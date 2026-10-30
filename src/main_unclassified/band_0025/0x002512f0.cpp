/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C504C05835029D3DD839D0E43833422B89A1110F723B7A8AF6CEA9E63A04959C
 * Entry: 0x002512f0, Ghidra index: 8363, label: FUN_002512f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002512f0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (((*param_2 != 0) && (iVar1 = *param_1, iVar1 != 0)) &&
     (*(int *)(*param_2 + 0x10) < *(int *)(iVar1 + 0x10))) {
    iVar2 = *param_2;
    *param_2 = iVar1;
    *param_1 = iVar2;
  }
  if (*param_3 != 0) {
    if (*param_2 == 0) {
      return;
    }
    if (*(int *)(*param_3 + 0x10) < *(int *)(*param_2 + 0x10)) {
      iVar1 = *param_3;
      *param_3 = *param_2;
      *param_2 = iVar1;
    }
  }
  if (((*param_2 != 0) && (*param_1 != 0)) &&
     (*(int *)(*param_2 + 0x10) < *(int *)(*param_1 + 0x10))) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}
