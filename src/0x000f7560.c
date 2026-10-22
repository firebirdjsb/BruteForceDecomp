/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61C64C437A2A0DF5374BBAA3B995668F60D6DA6E03766287E0A398026CE82333
 * Entry: 0x000f7560, Ghidra index: 3100, label: FUN_000f7560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f7560(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e8))();
  iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1b4))(iVar2);
  if (iVar3 != 0) {
    uVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xd4))(iVar3 + 0x4c);
    iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x74))(iVar3 + 0x4c,uVar4);
    if (iVar3 != -1) {
      iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(iVar2 + 8);
      if (iVar2 != 0) {
        bVar5 = 1;
      }
    }
  }
  if ((param_1 != (int *)0x0) && (bVar1 = *(byte *)(param_1 + 10), (bVar1 >> 1 & 1) != bVar5)) {
    *(byte *)(param_1 + 10) = (bVar5 << 1 ^ bVar1) & 2 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x000f75fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x24))();
    return;
  }
  return;
}
