/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7B6EACC59C7CE487DB5AE2B5461D4AA970354505460EA4A2A889B35BFB3E3F4
 * Entry: 0x003540f2, Ghidra index: 13105, label: FUN_003540f2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003540f2(int param_1,int param_2,byte param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined2 *)(param_2 + 0x30) = 0;
  *(int *)(param_2 + 0x1c) = param_1;
  *(undefined4 *)(param_2 + 0x24) = 1;
  *(byte *)(param_2 + 0x32) = param_3;
  *(byte *)(param_2 + 0x33) = (-((param_3 & 2) != 0) & 4U) + 0x14;
  iVar3 = *(int *)(param_1 + 0xa4);
  *(int *)(param_2 + 0x28) = iVar3;
  if ((param_3 & 3) == 0) {
    *(int *)(param_2 + 0x20) = param_4;
    iVar3 = *(int *)(param_2 + 0x28) + param_4;
  }
  else {
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_2 + 0x2c) = iVar3;
  *(int *)(param_1 + 0xa4) = iVar3;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_2 + 0x20);
  puVar2 = *(undefined4 **)(param_1 + 0x38);
  piVar1 = (int *)(param_2 + 0x14);
  *piVar1 = param_1 + 0x34;
  *(undefined4 **)(param_2 + 0x18) = puVar2;
  *puVar2 = piVar1;
  *(int **)(param_1 + 0x38) = piVar1;
  if (*(int *)(param_1 + 0x84) == 0) {
    *(int *)(param_1 + 0x84) = param_2;
    FUN_00353f2c(param_1);
  }
  return;
}
