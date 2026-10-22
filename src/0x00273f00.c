/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92E2EE4C9B9DC6F5D73EF199130508375FAA77B70FBC2510ABFCD0D0B8071C51
 * Entry: 0x00273f00, Ghidra index: 8872, label: FUN_00273f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00273f00(int *param_1)

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
  *(undefined4 *)(in_ECX + 0x20) = 10;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  if (*param_1 == 10) {
    *(int *)(in_ECX + 0x60) = param_1[0x10];
    *(char *)(in_ECX + 0x5c) = (char)param_1[0xf];
    *(int *)(in_ECX + 0x48) = param_1[10];
    *(int *)(in_ECX + 0x50) = param_1[0xc];
    *(int *)(in_ECX + 0x6c) = param_1[0x13];
    *(int *)(in_ECX + 0x4c) = param_1[0xb];
    *(int *)(in_ECX + 0x68) = param_1[0x12];
    *(int *)(in_ECX + 0x54) = param_1[0xd];
    pcStack_18 = (char *)param_1[0xe];
    if (pcStack_18 != (char *)0x0) {
      pcVar2 = pcStack_18;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iStack_14 = (int)pcVar2 - (int)(pcStack_18 + 1);
      uStack_1c = 0x273f98;
      FUN_0001fed0();
      if (*(uint *)(in_ECX + 0x88) < 0x10) {
        iVar3 = in_ECX + 0x74;
      }
      else {
        iVar3 = *(int *)(in_ECX + 0x74);
      }
      *(int *)(in_ECX + 0x58) = iVar3;
    }
    pcStack_18 = (char *)param_1[0x11];
    if (pcStack_18 != (char *)0x0) {
      pcVar2 = pcStack_18;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iStack_14 = (int)pcVar2 - (int)(pcStack_18 + 1);
      uStack_1c = 0x273fcf;
      FUN_0001fed0();
      if (*(uint *)(in_ECX + 0xa4) < 0x10) {
        *(int *)(in_ECX + 100) = in_ECX + 0x90;
      }
      else {
        *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(in_ECX + 0x90);
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x60) = 0xbf800000;
    *(undefined1 *)(in_ECX + 0x5c) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 0;
    *(undefined4 *)(in_ECX + 0x50) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x6c) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    *(undefined4 *)(in_ECX + 0x68) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x54) = 0x3f800000;
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
