/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 493883B0A31ED8AE1B0CA3E2EB205424631B9CC379B8D80FF6F5469FF2C97B01
 * Entry: 0x00275180, Ghidra index: 8885, label: FUN_00275180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00275180(int *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_3c [10];
  
  piVar3 = param_1;
  piVar4 = aiStack_3c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_00273d50();
  *(undefined4 *)(in_ECX + 0x20) = 6;
  if (*param_1 == 6) {
    *(int *)(in_ECX + 0x48) = param_1[10];
    *(int *)(in_ECX + 0x4c) = param_1[0xb];
    *(int *)(in_ECX + 0x50) = param_1[0xc];
    iVar2 = param_1[0xf];
    iVar1 = param_1[0xe];
    *(int *)(in_ECX + 0x54) = param_1[0xd];
    *(int *)(in_ECX + 0x58) = iVar1;
    *(int *)(in_ECX + 0x5c) = iVar2;
    *(int *)(in_ECX + 0x60) = param_1[0x10];
    *(int *)(in_ECX + 100) = param_1[0x11];
  }
  else {
    *(undefined4 *)(in_ECX + 0x48) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x50) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x5c) = 0;
    *(undefined4 *)(in_ECX + 0x58) = 0;
    *(undefined4 *)(in_ECX + 0x54) = 0;
    *(undefined4 *)(in_ECX + 0x60) = 1;
    *(undefined4 *)(in_ECX + 100) = 5;
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0x20);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
