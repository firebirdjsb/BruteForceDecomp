/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A6AF7819927B71F0EAE2DA072E91B6F68A9FD3E6426A05C9228527A0BFAC35F
 * Entry: 0x002767e0, Ghidra index: 8900, label: FUN_002767e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002767e0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_3c [7];
  undefined4 uStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  piVar5 = param_1;
  piVar6 = aiStack_3c;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  FUN_00273d50();
  *(undefined4 *)(in_ECX + 0x20) = 8;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  if (*param_1 == 8) {
    iVar4 = param_1[0xc];
    iVar2 = param_1[0xb];
    *(int *)(in_ECX + 0x48) = param_1[10];
    *(int *)(in_ECX + 0x4c) = iVar2;
    *(int *)(in_ECX + 0x50) = iVar4;
    *(int *)(in_ECX + 0x54) = param_1[0xd];
    *(int *)(in_ECX + 0x58) = param_1[0xe];
    *(int *)(in_ECX + 0x5c) = param_1[0xf];
    pcStack_1c = (char *)param_1[0x10];
    if (pcStack_1c != (char *)0x0) {
      pcVar3 = pcStack_1c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iStack_18 = (int)pcVar3 - (int)(pcStack_1c + 1);
      uStack_20 = 0x276875;
      FUN_0001fed0();
      if (*(uint *)(in_ECX + 0x7c) < 0x10) {
        *(int *)(in_ECX + 0x60) = in_ECX + 0x68;
      }
      else {
        *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_ECX + 0x68);
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x50) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 0;
    *(undefined4 *)(in_ECX + 0x54) = 0;
    *(undefined4 *)(in_ECX + 0x58) = 1;
    *(undefined4 *)(in_ECX + 0x5c) = 5;
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
