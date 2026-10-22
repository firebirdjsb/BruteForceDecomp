/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AB98F26BB7D18D3D3FF0718A8D639020C2F9CCE9135C5FC82436461EA5791F8
 * Entry: 0x002a4cb0, Ghidra index: 9552, label: FUN_002a4cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4cb0(int *param_1,int *param_2)

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
  piVar1 = (int *)param_2[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  piVar1 = (int *)param_2[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_2[0xc] = 0;
  }
  FUN_00238300();
  *param_1 = iVar2;
  return;
}
