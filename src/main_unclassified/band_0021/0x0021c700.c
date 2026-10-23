/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9024ADB265ECA83EB954CDA467B120A13352B9C70A61DE79A8251F75498BDB86
 * Entry: 0x0021c700, Ghidra index: 7529, label: FUN_0021c700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469868;
extern uint32_t *DAT_00469940;
void FUN_0021c700(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char in_AL;
  int unaff_EBX;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (in_AL == '\0') {
    iVar6 = *(int *)(unaff_EBX + 0x9c);
    if (iVar6 != 0) {
      FUN_0021d370(0,0);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar6);
    }
    piVar4 = (int *)(unaff_EBX + 0x7c);
    iVar6 = 8;
    do {
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        piVar4 = *(int **)(iVar3 + 0x14);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x34))(piVar4,7);
        }
        piVar4 = *(int **)(iVar3 + 0x14);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
          *(undefined4 *)(iVar3 + 0x14) = 0;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar3);
      }
      piVar4 = piVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*(int *)(unaff_EBX + 0x78) != 0) {
      (**(code **)(*DAT_00469868 + 0x54))(DAT_00469868,*(int *)(unaff_EBX + 0x78));
    }
    if ((*(int **)(unaff_EBX + 0xec) != (int *)0x0) &&
       (iVar6 = **(int **)(unaff_EBX + 0xec), iVar6 != 0)) {
      piVar4 = *(int **)(iVar6 + 0x14);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x34))(piVar4,7);
      }
      piVar4 = *(int **)(iVar6 + 0x14);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        *(undefined4 *)(iVar6 + 0x14) = 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar6);
    }
    puVar2 = *(undefined4 **)(unaff_EBX + 0xf4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar2;
    }
    for (; puVar5 != puVar2; puVar5 = (undefined4 *)*puVar5) {
      if (puVar5[3] != 0) {
        (**(code **)(*DAT_00469940 + 0x20))(puVar5[3],1);
        puVar5[3] = 0;
      }
    }
  }
  else {
    piVar4 = (int *)(unaff_EBX + 0x7c);
    iVar6 = 8;
    do {
      if ((*piVar4 != 0) && (piVar1 = *(int **)(*piVar4 + 0x14), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x34))(piVar1,1);
        (**(code **)(**(int **)(*piVar4 + 0x14) + 0x14))(*(int **)(*piVar4 + 0x14),0x7f7fffff,4);
      }
      piVar4 = piVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    piVar4 = *(int **)(unaff_EBX + 0xec);
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      piVar1 = *(int **)(*piVar4 + 0x14);
      (**(code **)(*piVar1 + 0x34))(piVar1,1);
      (**(code **)(**(int **)(*piVar4 + 0x14) + 0x14))(*(int **)(*piVar4 + 0x14),0x7f7fffff,4);
    }
    puVar2 = *(undefined4 **)(unaff_EBX + 0xf4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar2;
    }
    if (puVar5 != puVar2) {
      do {
        if (puVar5[3] != 0) {
          (**(code **)(*DAT_00469940 + 0x20))(puVar5[3],0);
          puVar5[3] = 0;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != puVar2);
      return;
    }
  }
  return;
}
