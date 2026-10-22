/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 278CCF7D4E1E33CF5A2FEB8E82416A27F07170F9138DC1DA44E042F0CC74F377
 * Entry: 0x002a3e30, Ghidra index: 9538, label: FUN_002a3e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002a3e30(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_EBX;
  
  piVar1 = (int *)param_2[1];
  iVar2 = *param_2;
  if (piVar1 == (int *)0x0) {
    *unaff_EBX = iVar2;
  }
  else {
    *piVar1 = iVar2;
  }
  if (iVar2 == 0) {
    unaff_EBX[1] = (int)piVar1;
  }
  else {
    *(int **)(iVar2 + 4) = piVar1;
  }
  param_2[1] = 0;
  *param_2 = 0;
  FUN_002a3d80();
  FUN_00238300();
  *param_1 = iVar2;
  return param_1;
}
