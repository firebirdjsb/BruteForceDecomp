/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 133E9C1F0BBB27575486349BF4EBD4BC3EA40185E9299A45FDC32E44E7CFC8FF
 * Entry: 0x000bbf40, Ghidra index: 2285, label: FUN_000bbf40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000bbef0(float param_1);
extern void FUN_000ba730(void);
extern void FUN_000c9890(int param_1);

void FUN_000bbf40(float param_1)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x58) != *(float *)(in_ECX + 0x5c)) {
    fVar1 = param_1 * *(float *)(in_ECX + 0x54);
    fVar2 = fVar1 + *(float *)(in_ECX + 0x58);
    if (*(float *)(in_ECX + 0x5c) <= fVar2) {
      fVar1 = *(float *)(in_ECX + 0x58) - fVar1;
      if (fVar1 <= *(float *)(in_ECX + 0x5c)) {
        *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(in_ECX + 0x5c);
      }
      else {
        *(float *)(in_ECX + 0x58) = fVar1;
      }
    }
    else {
      *(float *)(in_ECX + 0x58) = fVar2;
    }
  }
  if ((((*(float *)(in_ECX + 0x5c) != 0.0) &&
       (*(float *)(in_ECX + 0x58) == *(float *)(in_ECX + 0x5c))) &&
      (0.0 < *(float *)(in_ECX + 0x60))) &&
     (*(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x60) - param_1,
     *(float *)(in_ECX + 0x60) < 0.0 != (*(float *)(in_ECX + 0x60) == 0.0))) {
    FUN_000bbef0(0xbf800000);
  }
  *(char *)(in_ECX + 0x10) = (char)(int)(*(float *)(in_ECX + 0x58) * 255.0);
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
  return;
}
