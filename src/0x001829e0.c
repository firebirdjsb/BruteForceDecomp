/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C20660C4699F116C6AD643177054FB1BA4EF199BCE49D1E6A85FA69FE53687EC
 * Entry: 0x001829e0, Ghidra index: 5185, label: FUN_001829e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469984;
extern uint32_t DAT_0046d064;
undefined4 FUN_001829e0(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int unaff_retaddr;
  int iStack_c;
  int local_8;
  
  piVar3 = *(int **)(param_1 + 0x44);
  uVar4 = DAT_0046d064;
  for (piVar9 = *(int **)(param_1 + 0x40); DAT_0046d064 = uVar4, piVar9 != piVar3;
      piVar9 = piVar9 + 1) {
    piVar1 = (int *)*piVar9;
    cVar2 = (**(code **)(*piVar1 + 0x20))();
    if (cVar2 != '\0') {
      (**(code **)(*piVar1 + 8))(1);
    }
    *(byte *)(piVar1 + 7) = *(byte *)(piVar1 + 7) & 0xfe;
    *(undefined1 *)(piVar1 + 10) = 0;
    uVar4 = DAT_0046d064;
  }
  iVar5 = 0;
  piVar3 = (int *)(**(code **)(*DAT_00469984 + 0x14))(0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
    uVar4 = FUN_002383b0();
    iVar5 = piVar3[0x50];
    iStack_c = piVar3[0x51];
  }
  piVar3 = (int *)(unaff_retaddr + 4);
  local_8 = 4;
  do {
    puVar7 = (undefined4 *)*piVar3;
    if (puVar7 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar7;
    }
    for (; puVar6 != puVar7; puVar6 = (undefined4 *)*puVar6) {
      iVar8 = puVar6[2];
      if (*(int *)(iVar8 + 0x68) != 0) {
        *(undefined4 *)(iVar8 + 0x74) = uVar4;
        DSOUND__IDirectSoundBuffer_SetBufferData(*(undefined4 *)(iVar8 + 0x68),iVar5,iStack_c);
      }
    }
    piVar3 = piVar3 + 3;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (*(undefined4 **)(unaff_retaddr + 0x34) == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)**(undefined4 **)(unaff_retaddr + 0x34);
  }
  puVar6 = *(undefined4 **)(unaff_retaddr + 0x34);
  for (; puVar7 != puVar6; puVar7 = (undefined4 *)*puVar7) {
    FUN_001834c0();
  }
  iVar5 = (**(code **)(*DAT_00469984 + 8))();
  iVar8 = 0;
  if (0 < iVar5) {
    do {
      (**(code **)(*DAT_00469984 + 0x14))(iVar8);
      FUN_00182b30();
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  return 1;
}
