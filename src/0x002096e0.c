/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90A1ADAA3FB73B4DDE9F229ACDBCFEAC97E4B3BB570CF4BF57FDEF45188E449B
 * Entry: 0x002096e0, Ghidra index: 7322, label: FUN_002096e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_002096e0(char param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_ESI;
  int *piVar5;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int **)(unaff_ESI + 0xc4) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(unaff_ESI + 0xc4) + 0xfc))();
    if (iVar4 != 0) {
      (**(code **)(**(int **)(unaff_ESI + 0xc4) + 0x100))();
    }
    if (*(undefined4 **)(unaff_ESI + 0xf4) == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)**(undefined4 **)(unaff_ESI + 0xf4);
    }
    if (piVar5 != *(int **)(unaff_ESI + 0xf4)) {
      do {
        (**(code **)(**(int **)(unaff_ESI + 0xc4) + 0x100))(piVar5[3]);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)*(int *)(unaff_ESI + 0xf4));
    }
    iVar4 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0x20c);
    piVar5 = *(int **)(iVar4 + 4);
    piVar2 = (int *)*piVar5;
    uVar3 = *(undefined4 *)(unaff_ESI + 0xc4);
    while (piVar2 != piVar5) {
      FUN_00174fe0(piVar2[4],uVar3);
      FUN_0012aba0();
      piVar5 = *(int **)(iVar4 + 4);
    }
    piVar5 = *(int **)(unaff_ESI + 0xc4);
    if (*(int *)(piVar5[3] + 4) == 3) {
      iVar4 = (**(code **)(*piVar5 + 0xf4))();
      if (iVar4 != 0) {
        FUN_00018510(iVar4,*(undefined4 *)(unaff_ESI + 0x80),*(undefined4 *)(unaff_ESI + 0x88),
                     *(undefined4 *)(unaff_ESI + 0x8c),*(undefined4 *)(unaff_ESI + 0x84));
        iVar4 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0x1f8);
        if (iVar4 != 0) {
          FUN_00056fe0(iVar4,piVar5,0);
        }
      }
      if ((((*(byte *)(unaff_ESI + 0xe4) & 2) != 0) &&
          (bVar1 = *(byte *)(piVar5 + 0x20d), (bVar1 & 0x10) == 0)) &&
         (*(byte *)(piVar5 + 0x20d) = bVar1 | 0x10, (bVar1 & 0xd) == 0)) {
        FUN_00129530();
      }
      if (((*(byte *)(unaff_ESI + 0xe4) & 1) != 0) &&
         ((bVar1 = *(byte *)(piVar5 + 0x20d), (bVar1 & 1) == 0 || ((bVar1 & 2) != 0)))) {
        *(byte *)(piVar5 + 0x20d) = bVar1 & 0xfd | 1;
        FUN_00129530();
      }
      if (*(int *)(unaff_ESI + 0xe8) != 0) {
        (**(code **)(piVar5[0x6d] + 0x44))(*(int *)(unaff_ESI + 0xe8));
      }
    }
    if (param_1 != '\0') {
      uStack_8 = 0;
      uStack_c = 0;
      ppuStack_14 = &PTR_LAB_003a3fb4;
      uStack_4 = 0xffffffff;
      uStack_10 = 0x18;
      FUN_001fe3d0(&ppuStack_14);
    }
  }
  return;
}
