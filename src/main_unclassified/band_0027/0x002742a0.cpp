/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAA49E90E9270023FE7939574AAFD85FDEE3C6995B1EAA351DBCDEEB3C80FA0F
 * Entry: 0x002742a0, Ghidra index: 8876, label: FUN_002742a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002742a0(int *param_1)

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
  *(undefined4 *)(in_ECX + 0x20) = 0xb;
  *(int *)(in_ECX + 0x48) = in_ECX;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  if (*param_1 == 0xb) {
    *(int *)(in_ECX + 0x4c) = param_1[0xb];
    *(int *)(in_ECX + 0x50) = param_1[0xc];
    *(int *)(in_ECX + 0x54) = param_1[0xd];
    *(int *)(in_ECX + 0x58) = param_1[0xe];
    *(char *)(in_ECX + 0x5c) = (char)param_1[0xf];
    *(undefined1 *)(in_ECX + 0x5d) = *(undefined1 *)((int)param_1 + 0x3d);
    *(int *)(in_ECX + 0x60) = param_1[0x10];
    pcStack_18 = (char *)param_1[0x11];
    if (pcStack_18 != (char *)0x0) {
      pcVar2 = pcStack_18;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iStack_14 = (int)pcVar2 - (int)(pcStack_18 + 1);
      uStack_1c = 0x274338;
      FUN_0001fed0();
      if (*(uint *)(in_ECX + 0xb8) < 0x10) {
        iVar3 = in_ECX + 0xa4;
      }
      else {
        iVar3 = *(int *)(in_ECX + 0xa4);
      }
      *(int *)(in_ECX + 100) = iVar3;
    }
    pcStack_18 = (char *)param_1[0x12];
    if (pcStack_18 != (char *)0x0) {
      pcVar2 = pcStack_18;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iStack_14 = (int)pcVar2 - (int)(pcStack_18 + 1);
      uStack_1c = 0x27436f;
      FUN_0001fed0();
      if (0xf < *(uint *)(in_ECX + 0xd4)) {
        *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(in_ECX + 0xc0);
        *(int *)(in_ECX + 0x6c) = param_1[0x13];
        goto LAB_002743b8;
      }
      *(int *)(in_ECX + 0x68) = in_ECX + 0xc0;
    }
    *(int *)(in_ECX + 0x6c) = param_1[0x13];
  }
  else {
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    *(undefined4 *)(in_ECX + 0x50) = 1;
    *(undefined4 *)(in_ECX + 0x54) = 5;
    *(undefined4 *)(in_ECX + 0x58) = 0x3f800000;
    *(undefined1 *)(in_ECX + 0x5c) = 0;
    *(undefined1 *)(in_ECX + 0x5d) = 0;
    *(undefined4 *)(in_ECX + 0x60) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x6c) = 0;
  }
LAB_002743b8:
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
