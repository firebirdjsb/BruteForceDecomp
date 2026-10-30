/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ABDABE3EA8906ECB67EC1DC735B9CDD88EBB4C3E1AC3CFFF5FAAC3AD4FD023E
 * Entry: 0x000bb9d0, Ghidra index: 2278, label: FUN_000bb9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bb9d0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  
  if (((*(byte *)(param_1 + 0x12) & 8) == 0) || (param_1[0xf] != in_ECX)) {
    if (in_ECX == 0) {
      in_ECX = 0xc07b477;
    }
    param_1[0xf] = in_ECX;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef | 8;
    FUN_001e97c0();
    FUN_000c9920();
    fVar1 = (float)param_1[6];
    iVar3 = param_1[0xb];
    fVar2 = *(float *)(iVar3 + 0x40);
    *(float *)(iVar3 + 0x40) = fVar1;
    if (fVar1 != fVar2) {
      FUN_000c9890(iVar3);
    }
    iVar3 = param_1[0xb];
    if (*(char *)(iVar3 + 0x3c) != '\0') {
      (**(code **)(*param_1 + 0x30))(*(undefined4 *)(iVar3 + 0x20));
      return;
    }
    if (7 < *(uint *)(iVar3 + 0x1c)) {
      (**(code **)(*param_1 + 0x30))(*(undefined4 *)(iVar3 + 8));
      return;
    }
    (**(code **)(*param_1 + 0x30))(iVar3 + 8);
  }
  return;
}
