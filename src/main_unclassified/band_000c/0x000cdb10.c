/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7C00EB8BE7F4A3C6CC0E9B352FBA9B9DE54CE21C5CFFFCEEFB489E19AB69285
 * Entry: 0x000cdb10, Ghidra index: 2540, label: FUN_000cdb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cdb10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  undefined4 *puVar4;
  
  iVar3 = param_1;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00234470();
    *puVar1 = 0;
    if (puVar1[4] != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar1[4]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar1);
  }
  FUN_000e0860(&param_1);
  iVar2 = *(int *)(iVar3 + 0x24);
  if (iVar2 != 0) {
    puVar1 = *(undefined4 **)(in_EAX + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar1;
    }
    for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
      if (*(int *)(puVar4[2] + 0x24) == iVar2) goto LAB_000cdb94;
    }
    iVar2 = *(int *)(iVar2 + 0x6c);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(uint *)(iVar2 + 0x44) = *(uint *)(iVar2 + 0x44) & 0xfffffdbf;
    }
  }
LAB_000cdb94:
  if (*(int *)(iVar3 + 0x24) != 0) {
    FUN_0008f6e0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar3);
}
