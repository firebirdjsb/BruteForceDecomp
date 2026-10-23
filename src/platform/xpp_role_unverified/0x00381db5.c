/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4CEA9BE6B5AA2BC0720EBC1C794B475B373D49C10DF116E247E31D5BD43FE26
 * Entry: 0x00381db5, Ghidra index: 13579, label: FUN_00381db5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00381db5(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x5c) + 0x10);
  if (iVar1 == 0x70000) {
    if (param_1[0x58] == 0 && param_1[0x59] == 0) goto LAB_00381e02;
    puVar2 = param_1 + 0x50;
    puVar3 = *(undefined4 **)(param_2 + 0x30);
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_2 + 0x14) = 0x18;
LAB_00381e60:
    iVar1 = 0;
  }
  else {
    if (iVar1 == 0x70014) {
      FUN_00381806();
      return;
    }
    if (iVar1 != 0x74004) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      iVar1 = -0x3ffffff0;
      goto LAB_00381e69;
    }
    puVar2 = *(undefined4 **)(param_2 + 0x30);
    puVar3 = puVar2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if (param_1[0x58] != 0 || param_1[0x59] != 0) {
      puVar2[2] = param_1[0x58];
      puVar2[3] = param_1[0x59];
      *(undefined1 *)((int)puVar2 + 0x1a) = 1;
      *(undefined4 *)(param_2 + 0x14) = 0x20;
      goto LAB_00381e60;
    }
LAB_00381e02:
    iVar1 = FUN_00381cb6();
  }
  if (iVar1 == 0x103) {
    return;
  }
LAB_00381e69:
  *(int *)(param_2 + 0x10) = iVar1;
  IofCompleteRequest();
  IoStartNextPacket(*param_1);
  return;
}
