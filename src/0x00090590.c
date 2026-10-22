/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A30F29787586670BD3E17E55ECBAD2A3EDAF3880AF39DE483A7ED21B645784AF
 * Entry: 0x00090590, Ghidra index: 1768, label: FUN_00090590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00090590(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x88))(&local_4);
  if (0 < iVar1) {
    iVar2 = 0;
    piVar3 = unaff_EBX;
    do {
      if (*param_1 == *piVar3) {
        return unaff_EBX + iVar2 * 5;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar2 < iVar1);
  }
  return (int *)0x0;
}
