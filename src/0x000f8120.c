/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B1C85CE993CE12539BB97A5C4F82845D57B3A59CD76EDB466EAC8174249C905
 * Entry: 0x000f8120, Ghidra index: 3115, label: FUN_000f8120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
undefined1 FUN_000f8120(undefined4 param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int unaff_EBX;
  int *piVar10;
  undefined4 uVar11;
  int unaff_retaddr;
  undefined4 *local_c;
  
  iVar6 = *(int *)(param_2 + 4);
  for (piVar9 = *(int **)(iVar6 + 0x74);
      (piVar10 = (int *)0x0, piVar9 != *(int **)(iVar6 + 0x78) &&
      (piVar10 = (int *)*piVar9, piVar10[9] != 0x17c025b)); piVar9 = piVar9 + 1) {
  }
  piVar9 = (int *)0x0;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 4))(), iVar4 == 3)) {
    piVar9 = piVar10;
  }
  uVar1 = piVar9[0x1c];
  if ((int)uVar1 < 0) {
LAB_000f819a:
    local_c = &DAT_0046d064;
  }
  else {
    if (piVar9[0x19] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = piVar9[0x1a] - piVar9[0x19] >> 2;
    }
    if ((uVar5 <= uVar1) || (iVar4 = *(int *)(piVar9[0x19] + uVar1 * 4), iVar4 == 0))
    goto LAB_000f819a;
    local_c = (undefined4 *)(iVar4 + 0x24);
  }
  cVar2 = (**(code **)(*DAT_00469ab4 + 0x60))(local_c);
  if (cVar2 == '\x01') {
    FUN_00101a30(0,1,1);
    return 0;
  }
  for (piVar9 = *(int **)(iVar6 + 0x74);
      (piVar10 = (int *)0x0, piVar9 != *(int **)(iVar6 + 0x78) &&
      (piVar10 = (int *)*piVar9, piVar10[9] != 0x15630f68)); piVar9 = piVar9 + 1) {
  }
  if ((piVar10 != (int *)0x0) && (iVar6 = (**(code **)(*piVar10 + 4))(), iVar6 == 3)) {
    uVar7 = FUN_0010c850();
    uVar8 = FUN_000efa30();
    uVar11 = 0;
    piVar9 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar9 == 0x17506391) {
      iVar6 = 0;
LAB_000f8297:
      uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x14c))
                        (uVar8,unaff_EBX,uVar7,uVar11,iVar6);
      piVar9 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar9 + 0x14))(*(undefined4 *)(unaff_EBX + 4));
      return uVar3;
    }
    if (*piVar9 == -0x104e72d8) {
      iVar6 = FUN_000f8080(uVar8);
      iVar4 = *(int *)(unaff_retaddr + 0xc4c);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x14) == 0x62bd076)) {
        cVar2 = FUN_00088bc0();
        if ((cVar2 != '\0') && (cVar2 = FUN_00088c30(), cVar2 == '\0')) {
          uVar11 = *(undefined4 *)(iVar4 + 0x48 + iVar6 * 4);
          goto LAB_000f8297;
        }
        FUN_00100f90();
        iVar6 = FUN_001016f0();
        if (iVar6 != 0) {
          FUN_000f7ae0();
        }
      }
    }
  }
  return 0;
}
