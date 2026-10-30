/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A0B7E7AD6C8FF7B0BCA27D7142B302D35F88AC1FE48B391AE08D1616200CF0F
 * Entry: 0x000a7810, Ghidra index: 1990, label: FUN_000a7810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000a7950(undefined4 *param_1,char param_2,undefined4 param_3);
extern void FUN_000a7d20(void);

void FUN_000a7810(uint *param_1)

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
  if (*(char *)(piVar1[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)piVar2 + 0x19) == '\0');
  }
  if (bVar5) {
    if (piVar4 == (int *)*piVar1) {
      puVar3 = (undefined4 *)FUN_000a7950(&param_1,1,param_1);
      *unaff_EDI = *puVar3;
      *(undefined1 *)(unaff_EDI + 1) = 1;
      return;
    }
    FUN_000a7d20();
  }
  if ((uint)piVar4[3] < *param_1) {
    puVar3 = (undefined4 *)FUN_000a7950(&param_1,bVar5,param_1);
    *unaff_EDI = *puVar3;
    *(undefined1 *)(unaff_EDI + 1) = 1;
    return;
  }
  *unaff_EDI = piVar4;
  *(undefined1 *)(unaff_EDI + 1) = 0;
  return;
}
