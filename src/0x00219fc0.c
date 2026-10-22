/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D670943E75BE4A16A98135987B774E914689BE80EB76765EF6C0C92125642D74
 * Entry: 0x00219fc0, Ghidra index: 7507, label: FUN_00219fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined1 FUN_00219fc0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_d;
  int local_c;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_d = 0;
  iVar3 = FUN_00219f30();
  if (iVar3 == 0) {
    piVar6 = (int *)(param_1 + 0x7c);
    piVar5 = (int *)(param_2 + 0x28);
    local_c = 8;
    do {
      if (*piVar5 != DAT_0046d064) {
        iVar3 = *piVar6;
        if (iVar3 != 0) {
          piVar5 = *(int **)(iVar3 + 0x14);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x34))(piVar5,7);
          }
          piVar5 = *(int **)(iVar3 + 0x14);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
            *(undefined4 *)(iVar3 + 0x14) = 0;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(iVar3);
        }
        puVar4 = (undefined4 *)FUN_002ea01d(0x18);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[5] = 0;
          *puVar4 = 1;
          puVar4[1] = 0;
          puVar4[3] = 0;
          puVar4[2] = 0x7f7fffff;
          puVar4[4] = 0;
        }
        *piVar6 = (int)puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[1] = *piVar5;
          *(int *)*piVar6 = piVar5[3];
          *(int *)(*piVar6 + 8) = piVar5[2];
          *(int *)(*piVar6 + 0x10) = piVar5[1];
          if ((*(float *)(*piVar6 + 0x10) == 0.0) &&
             (iVar3 = FUN_0008f5d0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xbc),
                                   uVar1), iVar3 != 0)) {
            iVar3 = *piVar6;
            if (iVar3 != 0) {
              piVar5 = *(int **)(iVar3 + 0x14);
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 0x34))(piVar5,7);
              }
              piVar5 = *(int **)(iVar3 + 0x14);
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 8))(piVar5);
                *(undefined4 *)(iVar3 + 0x14) = 0;
              }
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(iVar3);
            }
          }
          else {
            local_d = 1;
          }
        }
      }
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  uVar2 = 1;
  if (*(int *)(param_2 + 0xa8) == DAT_0046d064) {
    uVar2 = local_d;
  }
  return uVar2;
}
