/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F39413DFACF3DC99BFD4F9457739A3E728C6CA3E48916BCBCC5D243A549AF4A
 * Entry: 0x00221a40, Ghidra index: 7575, label: FUN_00221a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00221a40(float param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  undefined1 local_c [4];
  int local_8;
  float local_4;
  
  if (0.0 < param_1) {
    piVar3 = (int *)0x0;
    if (*(undefined4 **)(in_ECX + 0x1c8) != (undefined4 *)0x0) {
      piVar3 = (int *)**(undefined4 **)(in_ECX + 0x1c8);
    }
    piVar1 = *(int **)(in_ECX + 0x1c8);
    if (piVar3 != piVar1) {
      do {
        if (piVar3[3] == in_EDX) break;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != piVar1);
      if (piVar3 != piVar1) {
        return;
      }
    }
    local_8 = 0;
    if (in_EDX != 0) {
      FUN_0008f6a0();
    }
    iVar2 = *(int *)(in_ECX + 0x1c8);
    local_4 = param_1;
    iVar4 = FUN_00222830(in_ECX + 0x1c4,iVar2,*(undefined4 *)(iVar2 + 4),local_c);
    FUN_0021d890();
    *(int *)(iVar2 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    if (local_8 != 0) {
      FUN_0008f6e0();
    }
  }
  return;
}
