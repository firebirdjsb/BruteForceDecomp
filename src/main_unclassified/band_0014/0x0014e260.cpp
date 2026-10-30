/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D6DE727E8DEEF620AD774EAF182C59FBC3CFD612D9538EEA3171BBE40149BBA
 * Entry: 0x0014e260, Ghidra index: 4386, label: FUN_0014e260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014e260(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int in_ECX;
  
  *(byte *)(in_ECX + 0xc) =
       *(byte *)(in_ECX + 0xc) ^ (*(char *)(param_1 + 0xd) << 1 ^ *(byte *)(in_ECX + 0xc)) & 2;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 1) {
    *(undefined4 *)(in_ECX + 0x2c) = 1;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(in_ECX + 0x2c) = 2;
  }
  else if (iVar2 == 3) {
    *(undefined4 *)(in_ECX + 0x2c) = 3;
  }
  *(float *)(in_ECX + 0x30) = (float)*(byte *)(param_1 + 0x2d) * 0.003921569;
  *(float *)(in_ECX + 0x34) = (float)*(byte *)(param_1 + 0x2e) * 0.003921569;
  bVar5 = *(byte *)(param_1 + 0x2f);
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(float *)(in_ECX + 0x38) = (float)bVar5 * 0.003921569;
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x38);
  fVar1 = *(float *)(param_1 + 0x44);
  *(float *)(in_ECX + 0x48) = fVar1;
  if (fVar1 <= 0.0) {
    *(undefined4 *)(in_ECX + 0x4c) = 0;
  }
  else {
    *(float *)(in_ECX + 0x4c) = 1.0 / fVar1;
  }
  *(byte *)(in_ECX + 0x50) =
       *(byte *)(in_ECX + 0x50) ^ (*(byte *)(param_1 + 0x14) ^ *(byte *)(in_ECX + 0x50)) & 1;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  piVar4 = (int *)FUN_000a7770(param_1 + 0x28);
  piVar3 = *(int **)(in_ECX + 0x28);
  if (piVar3 != piVar4) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(in_ECX + 0x28) = 0;
    }
    *(int **)(in_ECX + 0x28) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
  bVar5 = *(byte *)(in_ECX + 0x50) ^ (*(char *)(param_1 + 0x2c) << 1 ^ *(byte *)(in_ECX + 0x50)) & 2
  ;
  *(byte *)(in_ECX + 0x50) = bVar5;
  *(byte *)(in_ECX + 0x50) = (*(char *)(param_1 + 0x50) << 4 ^ bVar5) & 0x10 ^ bVar5;
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x60) = 0x3f800000;
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x58);
  bVar5 = *(byte *)(in_ECX + 0x50) ^ (*(char *)(param_1 + 0x6d) << 3 ^ *(byte *)(in_ECX + 0x50)) & 8
  ;
  *(byte *)(in_ECX + 0x50) = bVar5;
  *(byte *)(in_ECX + 0x50) = (*(char *)(param_1 + 0x6c) << 2 ^ bVar5) & 4 ^ bVar5;
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x78);
  return;
}
