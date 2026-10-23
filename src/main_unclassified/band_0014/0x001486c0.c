/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75417D3DD17F413EB8ED4F91A0DFCA97E6A6AE472D96C7864024914F69F2A686
 * Entry: 0x001486c0, Ghidra index: 4257, label: FUN_001486c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001486c0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 != '\0') {
    iVar1 = param_1[8];
    uVar3 = (**(code **)(*(int *)(*(int *)(param_2 + 0x1d4) + 0x1b4) + 0x9c))();
    *(undefined4 *)(iVar1 + 0x1c0) = uVar3;
    *(byte *)(iVar1 + 0x1bc) = *(byte *)(iVar1 + 0x1bc) | 2;
    *(undefined1 *)(iVar1 + 0x79) = 0;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0xc) + 0x15c) + 0x10))(iVar1);
  }
  return;
}
