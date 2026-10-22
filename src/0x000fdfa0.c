/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9147B86AF9E7E1B5679D9C920D98AF40936E4F6AECE14F0B2B3D6B5BECF03AFB
 * Entry: 0x000fdfa0, Ghidra index: 3182, label: FUN_000fdfa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fdfa0(int param_1,undefined4 param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int unaff_retaddr;
  
  fVar3 = *(float *)(param_1 + 0x2c);
  if (fVar3 != 0.0) {
    piVar4 = *(int **)(param_1 + 0x1c);
    if ((*(byte *)(piVar4 + 10) & 1) != 0) {
      FUN_000b2070(param_2);
    }
    FUN_000ef330(param_2);
    (**(code **)(*piVar4 + 0x3c))(param_2);
    iVar5 = 0;
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      iVar5 = **(int **)(param_1 + 0x28);
    }
    iVar5 = *(int *)(iVar5 + 8);
    fVar3 = fVar3 + *(float *)(iVar5 + 0x1c);
    *(float *)(iVar5 + 0x1c) = fVar3;
    piVar4 = *(int **)(param_1 + 0x1c);
    bVar2 = *(byte *)(piVar4 + 10);
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 4) == 0) {
        *(byte *)(piVar4 + 10) = bVar2 | 4;
        (**(code **)(*piVar4 + 0x28))();
      }
      FUN_0010a7d0();
      FUN_000ef210();
      return;
    }
    fVar1 = *(float *)(iVar5 + 0x20);
    if (1 < unaff_retaddr) {
      fVar1 = 1.0;
    }
    if (fVar1 <= fVar3) {
      if (7 < *(uint *)(iVar5 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(undefined4 *)(iVar5 + 4));
      }
      *(undefined4 *)(iVar5 + 0x18) = 7;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined2 *)(iVar5 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar5);
    }
  }
  return;
}
