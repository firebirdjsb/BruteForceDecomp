/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 238E472FDDFBFCF3147D64164220177C13ADFE8CDD427AC07230BD3538C50F98
 * Entry: 0x00178850, Ghidra index: 4971, label: FUN_00178850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469990;
void FUN_00178850(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar1 = *(int **)(DAT_00469990 + 4);
  if (piVar1 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)*piVar1;
  }
  while( true ) {
    if (piVar7 == piVar1) {
      return;
    }
    iVar5 = piVar7[2];
    uVar2 = *(undefined4 *)(iVar5 + 8);
    cVar4 = (**(code **)(*DAT_00469940 + 0x2c))(uVar2);
    if (((cVar4 == '\0') && ((*(byte *)(iVar5 + 0x14) & 2) == 0)) ||
       (piVar3 = *(int **)(iVar5 + 0x10), piVar3 == (int *)0x0)) break;
    cVar4 = (**(code **)(*DAT_00469940 + 0x2c))(uVar2);
    if (cVar4 != '\0') {
      iVar5 = (**(code **)(*piVar3 + 0x40))();
      (**(code **)(*DAT_00469940 + 0x40))(uVar2,iVar5 + 0x24);
      iVar5 = *DAT_00469940;
      uVar6 = (**(code **)(*piVar3 + 0x54))();
      (**(code **)(iVar5 + 0x44))(uVar2,uVar6);
    }
    piVar7 = (int *)*piVar7;
  }
  (**(code **)(*DAT_00469940 + 0x30))(uVar2);
  (**(code **)(*DAT_00469940 + 0x20))(uVar2,1);
  if (piVar7 == *(int **)(DAT_00469990 + 4)) {
    if (*(int *)(iVar5 + 0x10) != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar5);
  }
  *(int *)piVar7[1] = *piVar7;
  *(int *)(*piVar7 + 4) = piVar7[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar7);
}
