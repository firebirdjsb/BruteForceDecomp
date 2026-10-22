/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39450AA04EFA36F8B0FD420D0CE5E316E24C2DD4CFBF3A955B481CFBE7249AE6
 * Entry: 0x00276110, Ghidra index: 8896, label: FUN_00276110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00276110(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_40 [7];
  undefined4 uStack_24;
  char *pcStack_20;
  int *piStack_1c;
  
  piVar6 = param_1;
  piVar7 = aiStack_40;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  FUN_00273d50();
  *(undefined4 *)(in_ECX + 0x20) = 7;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  if (*param_1 == 7) {
    piStack_1c = param_1 + 0xb;
    pcStack_20 = (char *)(in_ECX + 0x4c);
    *(int *)(in_ECX + 0x48) = param_1[10];
    uStack_24 = 0x276176;
    FUN_0003d730();
    if ((*(byte *)(in_ECX + 0x28) & 0x10) == 0) {
      piStack_1c = (int *)(in_ECX + 0x7c);
      pcStack_20 = (char *)0x2761c0;
      FUN_002339d0();
    }
    else {
      iVar5 = param_1[0x1a];
      iVar2 = param_1[0x19];
      iVar3 = param_1[0x18];
      *(int *)(in_ECX + 0x7c) = param_1[0x17];
      *(int *)(in_ECX + 0x80) = iVar3;
      *(int *)(in_ECX + 0x84) = iVar2;
      *(int *)(in_ECX + 0x88) = iVar5;
    }
    pcStack_20 = (char *)param_1[0x1b];
    if (pcStack_20 != (char *)0x0) {
      pcVar4 = pcStack_20;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      piStack_1c = (int *)((int)pcVar4 - (int)(pcStack_20 + 1));
      uStack_24 = 0x2761e8;
      FUN_0001fed0();
      if (*(uint *)(in_ECX + 0xac) < 0x10) {
        iVar5 = in_ECX + 0x98;
      }
      else {
        iVar5 = *(int *)(in_ECX + 0x98);
      }
      *(int *)(in_ECX + 0x8c) = iVar5;
    }
    *(int *)(in_ECX + 0x90) = param_1[0x1c];
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
