/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1FDCA049C376AB1CB89FF87156336E12263392125DD0382D231E7DBEC102BD8
 * Entry: 0x0017ec80, Ghidra index: 5113, label: FUN_0017ec80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017ec80(int param_1)

{
  int iVar1;
  byte bVar2;
  int *in_EAX;
  undefined4 uVar3;
  undefined4 in_ECX;
  float10 fVar4;
  
  uVar3 = 0;
  if (in_EAX != (int *)0x0) {
    if ((*(char *)(param_1 + 0x5c) != '\0') && (in_EAX[0xb] != *(int *)(param_1 + 0x58))) {
      in_EAX[0xb] = *(int *)(param_1 + 0x58);
      (**(code **)(*in_EAX + 0x44))();
    }
    if ((*(char *)(param_1 + 0xc) == '\0') || (*(float *)(param_1 + 0x30) <= 0.0)) {
      if (((*(byte *)(in_EAX + 7) & 2) != 0) && (in_EAX[9] != 2)) {
        in_EAX[9] = 2;
        (**(code **)(*in_EAX + 0x40))();
      }
    }
    else {
      if (((*(byte *)(in_EAX + 7) & 2) != 0) && (in_EAX[9] != 0)) {
        in_EAX[9] = 0;
        (**(code **)(*in_EAX + 0x40))();
      }
      FUN_0017eb90(in_ECX,in_EAX);
    }
    FUN_0017f390();
    if ((*(char *)(param_1 + 0x54) != '\0') && ((*(byte *)(in_EAX + 7) & 2) != 0)) {
      (**(code **)(*in_EAX + 0x28))(*(undefined4 *)(param_1 + 0x50));
    }
    if (*(char *)(param_1 + 0x44) != '\0') {
      FUN_0017f580(in_ECX,in_EAX,*(undefined4 *)(param_1 + 0x40));
    }
    bVar2 = *(byte *)(in_EAX + 7);
    if (*(char *)(param_1 + 0x6b) == '\0') {
      bVar2 = bVar2 & 0xdf;
    }
    else {
      bVar2 = bVar2 ^ (*(char *)(param_1 + 0x6a) << 5 ^ bVar2) & 0x20;
    }
    *(byte *)(in_EAX + 7) = bVar2;
    if (*(char *)(param_1 + 0x4c) == '\0') {
      fVar4 = (float10)FUN_00182990();
      iVar1 = in_EAX[0xc];
    }
    else {
      fVar4 = (float10)FUN_00182990();
      iVar1 = *(int *)(param_1 + 0x48);
    }
    FUN_00181630(iVar1,(float)fVar4);
    bVar2 = *(byte *)(in_EAX + 7);
    if (*(char *)(param_1 + 0x69) != '\0') {
      *(byte *)(in_EAX + 7) = bVar2 ^ (*(char *)(param_1 + 0x68) << 4 ^ bVar2) & 0x10;
      return 1;
    }
    *(byte *)(in_EAX + 7) = bVar2 | 0x10;
    uVar3 = 1;
  }
  return uVar3;
}
