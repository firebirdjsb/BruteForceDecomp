/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25D9DB70866DFE2BD83DB8ADF0C119F0DC871A9EAA6297FA25939E3080D0DE35
 * Entry: 0x000c6280, Ghidra index: 2435, label: FUN_000c6280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c6280(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  float local_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0xa8);
  local_4 = 0.9;
  if (iVar1 != 0) {
    fVar4 = (float10)(**(code **)(**(int **)(iVar1 + 0x5a4) + 0xfc))(0x3f666666);
    local_4 = (float)fVar4;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x68) + 0x94) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x8c) == -1) {
      *(undefined4 *)(param_1 + 0x8c) = 10;
    }
    if (*(int *)(param_1 + 0x8c) != 0) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
      uVar2 = *(uint *)(param_1 + 0x8c) & 0x80000001;
      bVar3 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar3) {
        local_4 = 0.2;
      }
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 0xa8);
  if ((((iVar1 != 0) &&
       (iVar1 = (**(code **)(**(int **)(*(int *)(iVar1 + 8) + 0xbec) + 0xc))(iVar1), iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x30) != 0)) && (*(int *)(*(int *)(iVar1 + 0x30) + 0x34) != 0)) {
    fVar4 = (float10)FUN_000c17c0();
    local_4 = (float)(fVar4 * (float10)local_4);
  }
  *(char *)(*(int *)(param_1 + 0x80) + 0x10) = (char)(int)(local_4 * 255.0);
  return;
}
