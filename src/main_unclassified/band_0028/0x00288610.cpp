/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D1A89E71D5F7D1B443C286749EDF73288B03BC4F2EC59616953CEBDA704F5D6
 * Entry: 0x00288610, Ghidra index: 9110, label: FUN_00288610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_4 [4];
  
  while( true ) {
    if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)**(undefined4 **)(param_1 + 0x20);
    }
    if (piVar4 == *(int **)(param_1 + 0x20)) {
      puVar2 = *(undefined4 **)(param_1 + 0x20);
      if (puVar2 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar2;
      }
      FUN_001298b0(local_4,uVar3,puVar2);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x20));
    }
    iVar1 = piVar4[2];
    if (iVar1 != 0) break;
    if (piVar4 != *(int **)(param_1 + 0x20)) {
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar4);
    }
  }
  if (0xf < *(uint *)(iVar1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  if (0xf < *(uint *)(iVar1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
