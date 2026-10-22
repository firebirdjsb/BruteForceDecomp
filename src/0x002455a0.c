/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4E09AE20D2999A349246C7743085E376115513BABDEA2B10A9B0418FA427F7F
 * Entry: 0x002455a0, Ghidra index: 8082, label: FUN_002455a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_002455a0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_0024ac30(param_4,*(undefined4 *)(param_1 + 8),param_3);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x24) {
      FUN_00242fd0();
    }
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return param_2;
  }
  *param_2 = param_3;
  return param_2;
}
