/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0069F7352ECA54FA79F729AC3FB1F7AFEC1489181A02E48E37A478B873CE6838
 * Entry: 0x000e5240, Ghidra index: 2856, label: FUN_000e5240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e5240(undefined4 param_1,int param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int unaff_EDI;
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      piVar1 = *(int **)(param_2 + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 0x20))();
        if (*(int *)(piVar1[3] + 4) == 3) {
          *(undefined4 *)(piVar1[0x153] + 0x10) = 0x1a;
          uVar2 = *(undefined4 *)(unaff_EDI + 0x2c);
          *(undefined4 *)(unaff_EDI + 0x2c) = 0x3f800000;
          (**(code **)(*piVar1 + 100))();
          *(undefined4 *)(unaff_EDI + 0x2c) = uVar2;
          *(undefined4 *)(piVar1[0x153] + 0x10) = 0xffffffff;
        }
        else if ((iVar3 != 0) && (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 3)) {
          (**(code **)(*piVar1 + 100))();
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}
