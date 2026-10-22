/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F52BC2948C121139EA7D71DFEEE81FDE6E58E583F971559CB1AB08D3980B4D0
 * Entry: 0x00072c30, Ghidra index: 1290, label: FUN_00072c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040de12;
extern uint32_t DAT_00469948;
void FUN_00072c30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x84) == '\x01') {
    if (DAT_0040de12 != '\0') {
      if (*(int **)(param_1 + 0x38) != (int *)0x0) {
        iVar2 = **(int **)(param_1 + 0x70);
        uVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x40))();
        (**(code **)(iVar2 + 0x44))(uVar1);
      }
      DAT_0040de12 = '\0';
    }
    iVar2 = *(int *)(param_1 + 0x70);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x38) != iVar2)) {
      FUN_00073110(param_1,iVar2,0);
      FUN_00072940();
      if (*(int *)(param_1 + 0x38) != iVar2) {
        FUN_0008f6a0(iVar2);
      }
      FUN_00072900(iVar2,0);
      *(undefined4 *)(param_1 + 0x74) = 2;
      FUN_00072890();
    }
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar2 = FUN_002ea01d(1);
      if (iVar2 != 0) {
        iVar3 = *(int *)(DAT_00469948 + 8) + 1;
        *(int *)(DAT_00469948 + 8) = iVar3;
        if (iVar3 == 1) {
          FUN_001e7880();
        }
        *(int *)(param_1 + 0xcc) = iVar2;
        return;
      }
      *(undefined4 *)(param_1 + 0xcc) = 0;
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xcc);
    if (iVar2 != 0) {
      piVar4 = (int *)(DAT_00469948 + 8);
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FUN_001e7880();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
    iVar2 = *(int *)(param_1 + 0x8c);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xd0);
      if (iVar2 != 0) {
        piVar4 = (int *)(DAT_00469948 + 0xc);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          FUN_001e7880();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar2);
      }
      iVar2 = 0;
      piVar4 = (int *)(param_1 + 0x94);
      do {
        if (*piVar4 != 0) {
          FUN_00072af0(*piVar4,1);
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar2 < 7);
    }
    else {
      if (*(int *)(param_1 + 0x38) != iVar2) {
        FUN_00073110(param_1,iVar2,0);
        FUN_00072940();
        if (*(int *)(param_1 + 0x38) != iVar2) {
          FUN_0008f6a0(iVar2);
        }
        FUN_00072900(iVar2,0);
        *(undefined4 *)(param_1 + 0x74) = 3;
        FUN_00072890();
      }
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar2 = FUN_002ea01d(1);
        if (iVar2 != 0) {
          uVar1 = FUN_001e7800();
          *(undefined4 *)(param_1 + 0xd0) = uVar1;
          return;
        }
        *(undefined4 *)(param_1 + 0xd0) = 0;
        return;
      }
    }
  }
  return;
}
