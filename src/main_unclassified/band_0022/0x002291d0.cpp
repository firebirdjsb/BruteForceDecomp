/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EB6DB04B2A73FD7F5358F4967BF6D855A250DA232E5D2B9D7E34E1C9788ABC9
 * Entry: 0x002291d0, Ghidra index: 7665, label: FUN_002291d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002291d0(undefined4 param_1)

{
  int iVar1;
  char in_AL;
  uint uVar2;
  undefined4 *in_ECX;
  int unaff_EBX;
  int iVar3;
  
  iVar1 = in_ECX[4];
  if ((iVar1 < (int)in_ECX[2]) && ((in_AL != '\0' || (iVar1 == 0)))) {
    iVar3 = in_ECX[9] + in_ECX[6] * 0xc;
    uVar2 = in_ECX[6] + 1;
    in_ECX[6] = uVar2 & ((int)in_ECX[2] <= (int)uVar2) - 1;
    in_ECX[4] = iVar1 + 1;
    (**(code **)(**(int **)(iVar3 + 4) + 0x9c))(*in_ECX,in_ECX[0xc]);
    *(undefined4 *)(iVar3 + 8) = in_ECX[0xb];
  }
  else {
    iVar3 = in_ECX[10] + in_ECX[8] * 0xc;
    uVar2 = in_ECX[8] + 1;
    in_ECX[8] = uVar2 & ((int)in_ECX[1] <= (int)uVar2) - 1;
    if ((int)in_ECX[3] < (int)in_ECX[1]) {
      in_ECX[3] = in_ECX[3] + 1;
      (**(code **)(**(int **)(iVar3 + 4) + 0x9c))(*in_ECX,in_ECX[0xc]);
    }
    *(float *)(iVar3 + 8) = (float)in_ECX[0xb] * 0.2;
  }
  if (*(int *)(*(int *)(iVar3 + 4) + 0x3c) != unaff_EBX) {
    FUN_0008f6a0();
  }
  (**(code **)(**(int **)(iVar3 + 4) + 0x50))(param_1);
  (**(code **)(**(int **)(iVar3 + 4) + 0x58))(param_1);
  return;
}
