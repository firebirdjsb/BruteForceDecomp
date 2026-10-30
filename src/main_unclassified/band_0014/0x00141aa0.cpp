/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC00DF4E114733462BB82EC5733C783F712F19F88EA894CC259D6B45AE4E5AA4
 * Entry: 0x00141aa0, Ghidra index: 4107, label: FUN_00141aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141aa0(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int *piVar4;
  undefined4 *unaff_EDI;
  bool bVar5;
  
  piVar1 = *(int **)(unaff_EBX + 4);
  bVar5 = true;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0x1d) == '\0') {
    piVar2 = (int *)piVar1[1];
    do {
      piVar4 = piVar2;
      bVar5 = *param_1 < (uint)piVar4[3];
      if (bVar5) {
        piVar2 = (int *)*piVar4;
      }
      else {
        piVar2 = (int *)piVar4[2];
      }
    } while (*(char *)((int)piVar2 + 0x1d) == '\0');
  }
  if (bVar5) {
    if (piVar4 == (int *)*piVar1) {
      puVar3 = (undefined4 *)FUN_00141f70(&param_1,1,param_1);
      *unaff_EDI = *puVar3;
      *(undefined1 *)(unaff_EDI + 1) = 1;
      return;
    }
    FUN_00142a80();
  }
  if ((uint)piVar4[3] < *param_1) {
    puVar3 = (undefined4 *)FUN_00141f70(&param_1,bVar5,param_1);
    *unaff_EDI = *puVar3;
    *(undefined1 *)(unaff_EDI + 1) = 1;
    return;
  }
  *unaff_EDI = piVar4;
  *(undefined1 *)(unaff_EDI + 1) = 0;
  return;
}
