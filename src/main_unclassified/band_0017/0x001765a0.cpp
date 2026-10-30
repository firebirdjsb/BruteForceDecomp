/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3ADE4DBA201A696AE74D24C4CC3D3E28B74759CF8F7FCEE0EACC9C3B086B5DBB
 * Entry: 0x001765a0, Ghidra index: 4936, label: FUN_001765a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001765a0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x38))(*(int **)(in_EAX + 0x74));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x3c))(*(int **)(in_EAX + 0x74),iVar4);
      if (((iVar2 != 0) &&
          (piVar3 = (int *)(**(code **)(**(int **)(in_EAX + 0x74) + 0x3c))
                                     (*(int **)(in_EAX + 0x74),iVar4), *piVar3 == 6)) &&
         (iVar2 = FUN_000de9f0(*(undefined4 *)(in_EAX + 0x70),piVar3[8]), iVar2 != 0)) {
        *(bool *)(iVar2 + 0x8c) = piVar3[3] != 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}
