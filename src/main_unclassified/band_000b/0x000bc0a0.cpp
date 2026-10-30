/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41D7492679BB95083F7ED4B48AB27FD9111A08496FE0E5CFA8B56A15814C3ADB
 * Entry: 0x000bc0a0, Ghidra index: 2287, label: FUN_000bc0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bc0a0(float param_1)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  int in_ECX;
  
  FUN_000ba730(param_1);
  fVar1 = *(float *)(in_ECX + 0x18);
  iVar4 = *(int *)(in_ECX + 0x2c);
  fVar2 = *(float *)(iVar4 + 0x40);
  *(float *)(iVar4 + 0x40) = fVar1;
  if (fVar1 != fVar2) {
    FUN_000c9890(iVar4);
  }
  if ((*(byte *)(in_ECX + 0x48) & 4) != 0) {
    uVar3 = *(undefined2 *)(*(int *)(in_ECX + 0x2c) + 0x32);
    *(undefined2 *)(in_ECX + 0xe) = *(undefined2 *)(*(int *)(in_ECX + 0x2c) + 0x30);
    *(undefined2 *)(in_ECX + 0xc) = uVar3;
  }
  if (*(float *)(in_ECX + 0x54) != *(float *)(in_ECX + 0x60)) {
    fVar1 = param_1 * *(float *)(in_ECX + 0x58);
    fVar2 = fVar1 + *(float *)(in_ECX + 0x54);
    if (*(float *)(in_ECX + 0x60) <= fVar2) {
      fVar1 = *(float *)(in_ECX + 0x54) - fVar1;
      if (fVar1 <= *(float *)(in_ECX + 0x60)) {
        *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 0x60);
      }
      else {
        *(float *)(in_ECX + 0x54) = fVar1;
      }
    }
    else {
      *(float *)(in_ECX + 0x54) = fVar2;
    }
  }
  if (((*(float *)(in_ECX + 0x60) != 0.0) &&
      (*(float *)(in_ECX + 0x54) == *(float *)(in_ECX + 0x60))) &&
     (*(float *)(in_ECX + 0x5c) != 0.0)) {
    param_1 = *(float *)(in_ECX + 0x5c) - param_1;
    *(float *)(in_ECX + 0x5c) = param_1;
    if (param_1 < 0.0 != (param_1 == 0.0)) {
      *(undefined4 *)(in_ECX + 0x60) = 0;
      if (*(float *)(in_ECX + 0x50) != 0.0) {
        *(undefined4 *)(in_ECX + 0x5c) = 0;
        *(float *)(in_ECX + 0x58) = 1.0 / *(float *)(in_ECX + 0x50);
        return;
      }
      *(undefined4 *)(in_ECX + 0x54) = 0;
      *(undefined4 *)(in_ECX + 0x5c) = 0;
    }
  }
  return;
}
