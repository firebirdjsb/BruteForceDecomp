/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB8E0E3A284B28237F0D237791E0EC2BEF3FC3966F6BCDC0857194E62C5A77DF
 * Entry: 0x0014c0f0, Ghidra index: 4334, label: FUN_0014c0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014c0f0(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_2c;
  int *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_14 [4];
  int *local_10;
  undefined4 local_c;
  
  local_10 = (int *)FUN_0025ae60(local_14);
  *(undefined1 *)((int)local_10 + 0x15) = 1;
  local_10[1] = (int)local_10;
  *local_10 = (int)local_10;
  local_10[2] = (int)local_10;
  piVar3 = (int *)(param_1 + 0xc);
  local_c = 0;
  local_2c = 10;
  do {
    piVar4 = (int *)piVar3[1];
    piVar5 = (int *)*piVar3;
    local_28 = piVar4;
    if (piVar5 != piVar4) {
      do {
        piVar1 = (int *)*piVar5;
        if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x20))(), cVar2 != '\0')) {
          uStack_24 = (**(code **)(*piVar1 + 0x5c))();
          uStack_20 = 0;
          piVar4 = (int *)FUN_00135410(&uStack_24);
          *(int *)(*piVar4 + 0x10) = (int)*(short *)((int)piVar1 + 0x1a);
          piVar4 = local_28;
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar4);
    }
    piVar3 = piVar3 + 4;
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  FUN_0014bd80();
  piVar3 = (int *)*local_10;
  while (piVar3 != local_10) {
    FUN_0014bfe0(piVar3[3]);
    FUN_0012aba0();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_0014c4f0(&local_28,*local_10,local_10);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_10);
}
