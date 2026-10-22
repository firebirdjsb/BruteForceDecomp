/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BDEA9F454A5951B91408DBD60246D4E00A94A39E16A08BB89C28D92C07F6A3E
 * Entry: 0x00346cd5, Ghidra index: 12838, label: FUN_00346cd5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00346cd5(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(param_1 + 3) & 2) != 0) {
    iVar2 = FUN_00354c6c(param_1,param_2);
    if (iVar2 == 0) {
      FUN_00345541(0xffffffff,0x1000018);
      param_1[2] = 0x2d636f73;
      goto LAB_00346d43;
    }
  }
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  FUN_00345f58(param_1);
  if ((*(byte *)((int)param_1 + 0xe) & 0x40) == 0) {
    FUN_00345579(param_1);
  }
  else {
    FUN_00345541(0xffffffff,0x800000);
  }
LAB_00346d43:
  KfLowerIrql();
  return 0;
}
