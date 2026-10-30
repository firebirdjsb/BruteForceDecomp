/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35525C8B38E368CE906078CB825A1B6E109EA69F6E5B85D584370745EC8819D4
 * Entry: 0x000f2130, Ghidra index: 3016, label: FUN_000f2130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f2130(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  uint uVar9;
  undefined1 uVar10;
  undefined4 uStack_8;
  
  uVar10 = (undefined1)((uint)unaff_EBX >> 0x18);
  if ((unaff_ESI == (int *)0x0) || (iVar3 = (**(code **)(*unaff_ESI + 4))(), iVar3 != 3)) {
    return 0;
  }
  FUN_0010caa0();
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar4 == 0x17506391) {
    uVar1 = FUN_000f1f00();
  }
  else if (*piVar4 == 0x120785ef) {
    uVar1 = FUN_000f1fb0();
  }
  else {
    uVar1 = FUN_000f2010();
  }
  iVar3 = **(int **)(DAT_00469b58 + 8);
  uStack_8 = CONCAT13(uVar1,(undefined3)uStack_8);
  uVar5 = FUN_00102000();
  iVar3 = (**(code **)(iVar3 + 0x130))(uVar5);
  uStack_8 = *(int *)(iVar3 + 0x10);
  if ((uStack_8 != 0) &&
     (iVar6 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x158))(iVar3,&uStack_8), iVar6 == 0)) {
    uVar5 = *(undefined4 *)(iVar3 + 0x10);
    uStack_8 = uVar5;
    cVar2 = FUN_0010cb40(&uStack_8);
    if (cVar2 != '\0') {
      uStack_8 = uVar5;
      FUN_0010c890();
      return uVar10;
    }
  }
  if (unaff_ESI[0x19] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = unaff_ESI[0x1a] - unaff_ESI[0x19] >> 2;
  }
  if (iVar6 < 1) {
    return uVar10;
  }
  uVar9 = 0;
  do {
    piVar4 = (int *)unaff_ESI[0x19];
    if ((piVar4 != (int *)0x0) && (uVar9 < (uint)(unaff_ESI[0x1a] - (int)piVar4 >> 2))) {
      uVar8 = 0;
      for (; piVar4 != (int *)unaff_ESI[0x1a]; piVar4 = piVar4 + 1) {
        if (uVar8 == uVar9) {
          uStack_8 = *(undefined4 *)(*piVar4 + 0x24);
          goto LAB_000f224e;
        }
        uVar8 = uVar8 + 1;
      }
    }
    uStack_8 = 0;
LAB_000f224e:
    iVar7 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x158))(iVar3,&uStack_8);
    if (iVar7 == 0) {
      FUN_0010c7d0();
      return uVar10;
    }
    uVar9 = uVar9 + 1;
    if (iVar6 <= (int)uVar9) {
      return uVar10;
    }
  } while( true );
}
