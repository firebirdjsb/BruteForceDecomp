/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3041BA7CEDC3EBEAC0B9DCA1A75375F05BC8570EDE071337BF0090D8B602692D
 * Entry: 0x00312e7f, Ghidra index: 11986, label: FUN_00312e7f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00312e7f(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_00316bf2(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar4 = FUN_00316bf2(param_3);
  *(int *)(param_1 + 0x10) = iVar4;
  if ((*(byte *)(iVar4 + 8) & 0x10) != 0) {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *(int *)(param_1 + 8) + 0x10;
    piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x14);
    *(int **)(param_1 + 0x18) = piVar2;
    *piVar2 = (int)piVar1;
    *(int **)(*piVar1 + 4) = piVar1;
  }
  return;
}
