/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9B6FBD5BCF583C4E6E589140A32074C35C45EE5624720F3A2CE83ED0E628BDB
 * Entry: 0x0017c970, Ghidra index: 5053, label: FUN_0017c970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0017c970(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int *piVar4;
  bool bVar5;
  
  piVar1 = *(int **)(unaff_EBX + 4);
  bVar5 = true;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0x81) == '\0') {
    piVar2 = (int *)piVar1[1];
    do {
      piVar4 = piVar2;
      bVar5 = *param_2 < (uint)piVar4[3];
      if (bVar5) {
        piVar2 = (int *)*piVar4;
      }
      else {
        piVar2 = (int *)piVar4[2];
      }
    } while (*(char *)((int)piVar2 + 0x81) == '\0');
  }
  if (bVar5) {
    if (piVar4 == (int *)*piVar1) {
      puVar3 = (undefined4 *)FUN_0017cc20(&param_2,1,param_2);
      *param_1 = *puVar3;
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
    FUN_0017d380();
  }
  if ((uint)piVar4[3] < *param_2) {
    puVar3 = (undefined4 *)FUN_0017cc20(&param_2,bVar5,param_2);
    *param_1 = *puVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    return param_1;
  }
  *param_1 = piVar4;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}
