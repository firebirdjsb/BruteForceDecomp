/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4D2AAABEFBFC093CA7551F993FD35CB3DE923BF0ED1090A3D39553787082D34
 * Entry: 0x00252df0, Ghidra index: 8387, label: FUN_00252df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00252df0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar3 = param_3 + -0x10;
    puVar2 = param_4 + -4;
    *puVar2 = *(undefined4 *)(param_3 + -0x10);
    param_4[-3] = *(undefined4 *)(param_3 + -0xc);
    param_4[-2] = *(undefined4 *)(param_3 + -8);
    piVar1 = (int *)param_4[-1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_4[-1] = 0;
    }
    piVar1 = *(int **)(param_3 + -4);
    param_4[-1] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    param_4 = puVar2;
    param_3 = iVar3;
  } while (iVar3 != param_2);
  *param_1 = puVar2;
  return;
}
