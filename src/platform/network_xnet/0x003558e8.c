/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92B61300EA5134D0664004E762D969F6658C91A977F9FBB8BD4E647DAA02414D
 * Entry: 0x003558e8, Ghidra index: 13123, label: FUN_003558e8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003558e8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar1 = *(int *)(param_1 + 0x14);
    piVar2 = *(int **)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x1c);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) - *(int *)(param_1 + 0x20);
    if (*(uint *)(iVar3 + 0x3c) < *(uint *)(iVar3 + 0x58)) {
      iVar1 = *(int *)(iVar3 + 0x30);
      if (iVar1 == 0) {
        if ((*(byte *)(iVar3 + 0xd) & 0x10) != 0) {
          KeSetEvent(iVar3 + 0x10,1,0);
        }
      }
      else {
        uVar4 = FUN_003554bb(iVar3,iVar1,0x40000);
        *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 0x10);
        FUN_00345e88(iVar3,iVar1,uVar4);
      }
    }
  }
  FUN_0034c826(param_1);
  return;
}
