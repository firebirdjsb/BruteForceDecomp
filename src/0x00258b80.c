/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAF559337D73544AED7D062926CFB0E98B8CBA01F72BF87E872042254A80EA39
 * Entry: 0x00258b80, Ghidra index: 8483, label: FUN_00258b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258b80(int param_1,uint param_2)

{
  int iVar1;
  int *in_EDX;
  int *unaff_EBX;
  int *piVar2;
  int *piVar3;
  
  piVar2 = in_EDX;
  piVar3 = unaff_EBX;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*unaff_EBX != 0) {
    *(int **)(*unaff_EBX + 4) = unaff_EBX;
  }
  if ((undefined4 *)unaff_EBX[1] != (undefined4 *)0x0) {
    *(undefined4 *)unaff_EBX[1] = unaff_EBX;
  }
  if (*(int **)(param_1 + 8) == in_EDX) {
    *(int **)(param_1 + 8) = unaff_EBX;
  }
  unaff_EBX[4] = unaff_EBX[4] ^ (unaff_EBX[4] ^ param_2) & 0x3ffffff;
  FUN_00258b20(param_1,in_EDX);
  FUN_00258ad0();
  return;
}
