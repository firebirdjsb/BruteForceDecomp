/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18DA205C9457D38CB8F892E6C6A09382444E7ED0FBA5F0492BDD83FC1D586BAD
 * Entry: 0x000f7f30, Ghidra index: 3112, label: FUN_000f7f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f7f30(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = *(int *)(in_EAX + 4);
  for (piVar6 = *(int **)(iVar1 + 0x74);
      (piVar7 = (int *)0x0, piVar6 != *(int **)(iVar1 + 0x78) &&
      (piVar7 = (int *)*piVar6, piVar7[9] != 0x96eb19f)); piVar6 = piVar6 + 1) {
  }
  piVar6 = (int *)0x0;
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 4))(), iVar2 == 3)) {
    piVar6 = piVar7;
  }
  iVar2 = FUN_001020d0();
  if (((piVar6 != (int *)0x0) && (iVar2 != 0)) && (*(int *)(iVar2 + 0x28) != 0)) {
    FUN_0010c850();
    iVar3 = FUN_0005c2b0();
    iVar5 = *(int *)(iVar2 + 0x10);
    iVar4 = FUN_0005be70();
    if (((iVar4 != 0) && (iVar4 != iVar2)) && ((iVar3 != 0 && (iVar5 != 0)))) {
      FUN_0008a720(iVar2,0);
      FUN_0008a720(iVar4,iVar5);
      FUN_0008a720(iVar2,iVar3);
    }
    iVar5 = FUN_0008ada0(iVar2,iVar3);
    if (iVar5 == 0) {
      FUN_0008a890(iVar2);
    }
    else {
      FUN_0008a720(iVar2,iVar5);
    }
    piVar6 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar6 + 0x14))(iVar1);
    (**(code **)(*DAT_00469ab4 + 0x90))();
    return 1;
  }
  return 0;
}
