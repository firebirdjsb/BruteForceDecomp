/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9926C472EBAC3715088C5067DE800F7C08A386EC214D29C741F34670AA44AEE0
 * Entry: 0x00272ff0, Ghidra index: 8851, label: FUN_00272ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00272ff0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  int unaff_EDI;
  
  pcVar2 = (char *)*param_1;
  if (pcVar2 == (char *)0x0) {
    *(undefined4 *)(unaff_EDI + 0xdc) = 0;
  }
  else {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
    if (*(uint *)(unaff_EDI + 0x100) < 0x10) {
      *(int *)(unaff_EDI + 0xdc) = unaff_EDI + 0xec;
    }
    else {
      *(undefined4 *)(unaff_EDI + 0xdc) = *(undefined4 *)(unaff_EDI + 0xec);
    }
  }
  piVar3 = *(int **)(unaff_EDI + 0xe0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)param_1[1];
  *(int **)(unaff_EDI + 0xe0) = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  FUN_00272f40();
  return;
}
