/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5674E633B59AE21CDD568F3EE1FBEB58D41DFA250097A7185A4E3046970792FE
 * Entry: 0x00276f40, Ghidra index: 8904, label: FUN_00276f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00276f40(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_38 [7];
  undefined4 uStack_1c;
  char *pcStack_18;
  int iStack_14;
  
  piVar4 = param_1;
  piVar5 = aiStack_38;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  FUN_00273d50();
  *(undefined4 *)(in_ECX + 0x20) = 9;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  if (*param_1 == 9) {
    pcStack_18 = (char *)param_1[10];
    if (pcStack_18 != (char *)0x0) {
      pcVar2 = pcStack_18;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iStack_14 = (int)pcVar2 - (int)(pcStack_18 + 1);
      uStack_1c = 0x276fa5;
      FUN_0001fed0();
      if (*(uint *)(in_ECX + 0x68) < 0x10) {
        iVar3 = in_ECX + 0x54;
      }
      else {
        iVar3 = *(int *)(in_ECX + 0x54);
      }
      *(int *)(in_ECX + 0x48) = iVar3;
    }
    pcStack_18 = (char *)param_1[0xb];
    if (pcStack_18 != (char *)0x0) {
      pcVar2 = pcStack_18;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iStack_14 = (int)pcVar2 - (int)(pcStack_18 + 1);
      uStack_1c = 0x276fd7;
      FUN_0001fed0();
      if (*(uint *)(in_ECX + 0x84) < 0x10) {
        iVar3 = in_ECX + 0x70;
      }
      else {
        iVar3 = *(int *)(in_ECX + 0x70);
      }
      *(int *)(in_ECX + 0x4c) = iVar3;
    }
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
