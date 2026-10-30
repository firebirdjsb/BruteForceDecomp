/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 569ABB28659B86E56D718FA303B4F9C94B7DEE5F9DF42BBAB0787D2A0BB89C20
 * Entry: 0x000fddf0, Ghidra index: 3180, label: FUN_000fddf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fddf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar3 = param_1;
  FUN_0010a7d0();
  piVar1 = *(int **)(iVar3 + 0x1c);
  if ((*(byte *)(piVar1 + 10) & 4) != 0) {
    *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfb;
    (**(code **)(*piVar1 + 0x28))();
  }
  param_1 = iVar3 + 0x24;
  if (*(undefined4 **)(iVar3 + 0x28) == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)**(undefined4 **)(iVar3 + 0x28);
  }
  while( true ) {
    if (puVar5 == *(undefined4 **)(iVar3 + 0x28)) {
      puVar5 = *(undefined4 **)(iVar3 + 0x28);
      if (puVar5 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar5;
      }
      FUN_001298b0(&param_1,uVar4,puVar5);
      return;
    }
    iVar2 = puVar5[2];
    if (iVar2 != 0) break;
    puVar5 = (undefined4 *)*puVar5;
  }
  if (*(uint *)(iVar2 + 0x18) < 8) {
    *(undefined4 *)(iVar2 + 0x18) = 7;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined2 *)(iVar2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 4));
}
