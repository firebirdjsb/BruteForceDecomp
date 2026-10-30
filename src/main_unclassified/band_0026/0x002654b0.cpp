/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE90029AA89DB2A3AD71BECFF927477F21E793D20FA8FE032AE57594CCC98FEF
 * Entry: 0x002654b0, Ghidra index: 8722, label: FUN_002654b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002654b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_00265440();
  if (-1 < iVar1) {
    iVar1 = thunk_FUN_002ea01d((param_2 + 1) * param_3 + -1);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      return -0x7fffbffb;
    }
    puVar2 = (undefined4 *)thunk_FUN_002ea01d(param_2 * 0x28);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_0001fe40(puVar2,0x28,param_2,(uintptr_t)0x00264f70U);
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
    }
    uVar3 = *(int *)(param_1 + 4) + -1 + param_3 & ~(param_3 - 1U);
    for (; param_2 != 0; param_2 = param_2 + -1) {
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[4] = 0;
      puVar2[3] = uVar3;
      *puVar2 = 0;
      if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
        puVar2[1] = 0;
        *(undefined4 **)(param_1 + 0x14) = puVar2;
      }
      else {
        **(undefined4 **)(param_1 + 0x18) = puVar2;
        puVar2[1] = *(undefined4 *)(param_1 + 0x18);
      }
      *(undefined4 **)(param_1 + 0x18) = puVar2;
      uVar3 = uVar3 + param_3;
      puVar2 = puVar2 + 10;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar1 = 0;
  }
  return iVar1;
}
