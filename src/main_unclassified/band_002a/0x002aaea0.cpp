/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB5EAA36E2D68243BB8112C0FBB4FFB65127E5B03B20BCB6ACB5454A8AF6C15C
 * Entry: 0x002aaea0, Ghidra index: 9658, label: FUN_002aaea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002aaea0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 != *(int **)(param_1 + 0x20)) {
    do {
      if ((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) {
        return 0x80004005;
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != *(int **)(param_1 + 0x20));
  }
  local_8 = *param_2;
  local_4 = param_2[1];
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 0x20) - iVar1 >> 3) < (uint)(*(int *)(param_1 + 0x24) - iVar1 >> 3))
     ) {
    iVar1 = *(int *)(param_1 + 0x20);
    FUN_00144b10(iVar1,1,param_1 + 0x18,param_1);
    *(int *)(param_1 + 0x20) = iVar1 + 8;
    return 0;
  }
  FUN_001e10c0(*(undefined4 *)(param_1 + 0x20),&local_8);
  return 0;
}
