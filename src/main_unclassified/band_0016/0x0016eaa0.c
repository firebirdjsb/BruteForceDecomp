/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16F88F0AB42F0EAC68CDE91AC6FF4902CA1F2DC4C90199D48E6F2308CEF3EB51
 * Entry: 0x0016eaa0, Ghidra index: 4826, label: FUN_0016eaa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016eaa0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (*(int *)(*param_2 + 0xc) < *(int *)(*param_1 + 0xc)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  if (*(int *)(*param_3 + 0xc) < *(int *)(*param_2 + 0xc)) {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  if (*(int *)(*param_2 + 0xc) < *(int *)(*param_1 + 0xc)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}
