/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3704B151F1D75ED35BBDD856C356786F509DD0ACD96F2940BC2D118E0020D40B
 * Entry: 0x000f0480, Ghidra index: 2999, label: FUN_000f0480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f0480(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int unaff_EBX;
  int *piVar7;
  int *piVar8;
  char unaff_retaddr;
  undefined4 uStack_10;
  int iStack_c;
  undefined1 auStack_8 [8];
  
  iVar3 = **(int **)(DAT_00469b58 + 8);
  uVar2 = FUN_00102000();
  iStack_c = (**(code **)(iVar3 + 0x130))(uVar2);
  if (iStack_c != 0) {
    for (piVar5 = *(int **)(unaff_EBX + 0x74);
        (piVar8 = (int *)0x0, piVar5 != *(int **)(unaff_EBX + 0x78) &&
        (piVar8 = (int *)*piVar5, piVar8[9] != 0xaecc0f9)); piVar5 = piVar5 + 1) {
    }
    piVar5 = (int *)0x0;
    if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 4))(), iVar3 == 7)) {
      piVar5 = piVar8;
    }
    for (piVar8 = *(int **)(unaff_EBX + 0x74);
        (piVar7 = (int *)0x0, piVar8 != *(int **)(unaff_EBX + 0x78) &&
        (piVar7 = (int *)*piVar8, piVar7[9] != -0xc60ef8b)); piVar8 = piVar8 + 1) {
    }
    piVar8 = (int *)0x0;
    if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 4))(), iVar3 == 3)) {
      piVar8 = piVar7;
    }
    uStack_10 = 0;
    if (piVar8 == (int *)0x0) {
      if (unaff_retaddr != '\0') {
        uStack_10 = *(undefined4 *)(iStack_c + 0x10);
        puVar4 = (undefined4 *)FUN_000f03a0(auStack_8);
        uStack_10 = *puVar4;
      }
    }
    else {
      FUN_0010c850();
      if (unaff_retaddr != '\0') {
        puVar4 = (undefined4 *)FUN_000f03a0(&uStack_10);
        uStack_10 = *puVar4;
      }
    }
    if (piVar5 != (int *)0x0) {
      if (unaff_retaddr != '\0') {
        FUN_001036d0();
      }
      /* XBE 0x000F05AB: LEA EDX,[ESP+0x0C]; PUSH EDX. After
       * SUB ESP,0x10 and three saved-register pushes this is the
       * already declared guest DWORD uStack_10 (not a new ABI input).
       * The virtual callee's prototype remains unverified. */
      iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x158))(iStack_c,&uStack_10);
      bVar1 = *(byte *)(piVar5 + 10);
      if ((bool)(bVar1 >> 1 & 1) != (iVar3 == 0)) {
        *(byte *)(piVar5 + 10) = ((iVar3 == 0) << 1 ^ bVar1) & 2 ^ bVar1;
        (**(code **)(*piVar5 + 0x24))();
      }
      piVar5 = (int *)FUN_00100f90();
      if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 4))(), iVar6 == 7)) {
        bVar1 = *(byte *)(piVar5 + 10);
        if ((iVar3 == 2) != (bool)(bVar1 >> 2 & 1)) {
          *(byte *)(piVar5 + 10) = ((iVar3 == 2) << 2 ^ bVar1) & 4 ^ bVar1;
          (**(code **)(*piVar5 + 0x28))();
        }
      }
    }
  }
  return;
}
