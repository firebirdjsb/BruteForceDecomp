/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63E1AC58F914F8A9BACFE0BEF3B67CC4EDCBB939B9946EEB386983576D9BF3AE
 * Entry: 0x00060ee0, Ghidra index: 1015, label: FUN_00060ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00060ee0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < (int)param_2) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if ((iVar1 != 0) && (param_2 < (uint)(*(int *)(param_1 + 0xa4) - iVar1 >> 2))) {
      piVar2 = *(int **)(iVar1 + param_2 * 4);
      *param_3 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
  }
  return 0x80004005;
}
