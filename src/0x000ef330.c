/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A884D79C500FB4593267AA0A7550E9B4A45B84348FE822F7797D55AA9AC38F9
 * Entry: 0x000ef330, Ghidra index: 2973, label: FUN_000ef330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef330(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)in_EAX[0x16];
  for (puVar5 = (undefined4 *)in_EAX[0x15]; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    piVar4 = (int *)*puVar5;
    cVar2 = (**(code **)(*piVar4 + 8))();
    if (cVar2 == '\0') {
      (**(code **)(*piVar4 + 4))(param_1);
      iVar3 = (**(code **)*piVar4)();
      if (iVar3 == 1) {
        piVar4 = (int *)FUN_0010d190();
        iVar3 = *piVar4;
        in_EAX[4] = piVar4[1];
        in_EAX[3] = iVar3;
        (**(code **)(*in_EAX + 0x1c))();
      }
      FUN_000ef250();
    }
  }
  return;
}
