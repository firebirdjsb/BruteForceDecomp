/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06B8EA4D37EDA8D80281BD37510AC475C244FAF3F82DC164F80A316DF8E88A70
 * Entry: 0x002ab210, Ghidra index: 9663, label: FUN_002ab210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002ab210(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *local_1c;
  int *piStack_4;
  
  local_1c = (int *)0x0;
  for (piVar2 = param_1; piVar2 != (int *)0x0;
      piVar2 = (int *)(**(code **)(*piVar2 + 0x38))(piVar2,piVar5,piVar6)) {
    local_1c = (int *)&param_1;
    piVar6 = piVar2;
    (**(code **)(*piVar2 + 0x6c))(piVar2);
    piVar4 = piStack_4;
    if ((float)piStack_4 <= (float)local_1c) {
      piVar4 = local_1c;
    }
    piVar5 = piVar2;
    iVar1 = (**(code **)(*piVar2 + 0x30))(piVar2);
    if (iVar1 != 0) {
      fVar3 = (float10)FUN_002ab210(iVar1);
      piVar6 = piVar4;
      if ((float)piVar4 <= (float)fVar3) {
        piVar6 = (int *)(float)fVar3;
      }
    }
  }
  return (float10)(float)local_1c;
}
