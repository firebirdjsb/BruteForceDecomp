/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8578C64D2EDD6828A1491A24ACAC504421C7A545E73B2822049479DD9120B5BC
 * Entry: 0x002b32b0, Ghidra index: 9758, label: FUN_002b32b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b32b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  while (iVar1 = *(int *)(param_1 + 0x24), iVar1 != 0) {
    iVar5 = (int)*(short *)(iVar1 + 0xc);
    piVar2 = *(int **)(iVar5 + 0x70 + iVar1);
    pbVar3 = *(byte **)(*(int *)(iVar5 + 0x24 + iVar1) + 0x94);
    pbVar4 = *(byte **)(*(int *)(iVar5 + 0x10 + iVar1) + 0x94);
    if (param_2 == 0) {
      if ((*pbVar4 & 0xc) == 0) {
        if (pbVar4[100] == 8) {
          FUN_002be1c0(*(undefined4 *)(pbVar4 + 0xc));
        }
        else {
          FUN_002be240();
        }
      }
      if ((*pbVar3 & 0xc) == 0) {
        if (pbVar3[100] == 8) {
          FUN_002be1c0(*(undefined4 *)(pbVar3 + 0xc));
        }
        else {
          FUN_002be240();
        }
      }
    }
    FUN_002c4720(piVar2);
    if (*(short *)((int)piVar2 + 0x4a) == 0) {
      (**(code **)(*piVar2 + 0x18))(1);
    }
  }
  return;
}
