/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 836816AE5DD9004B491525DF408545EA3DEC2AE64039C05C6F92369C23366B0A
 * Entry: 0x00345b2e, Ghidra index: 12820, label: FUN_00345b2e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00345b2e(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*param_2 == 0) {
      uVar1 = 0x80072733;
    }
    else {
      if (*param_2 != param_1 + 0x10) {
        piVar2 = (int *)ExAllocatePoolWithTag(0x1c,0x6354454e);
        if (piVar2 == (int *)0x0) {
          return 0x80072747;
        }
        piVar4 = param_2;
        piVar5 = piVar2;
        for (iVar3 = 7; param_2 = piVar2, iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
      }
      *(int **)(param_1 + 0x20) = param_2;
      piVar2 = param_2 + 1;
      *(undefined4 *)(*piVar2 + 8) = 0;
      *(undefined4 *)(*piVar2 + 4) = 0;
      *(int **)*piVar2 = param_2;
      uVar1 = 0x800703e5;
      *(undefined4 *)(*piVar2 + 0xc) = 0x800703e5;
    }
  }
  else {
    uVar1 = 0x80072733;
  }
  return uVar1;
}
