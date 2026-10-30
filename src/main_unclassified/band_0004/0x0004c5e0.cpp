/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77A93D67AD85B82E7E9E2C2002C079E284C1B5F893D20984D737A3AC17913831
 * Entry: 0x0004c5e0, Ghidra index: 636, label: FUN_0004c5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0014f7a0(void);
extern void FUN_000c5ca0(void);
extern int FUN_000388b0(int param_1);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_00469ab0;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_003a4f50;
undefined4 FUN_0004c5e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *in_EAX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined1 local_65;
  undefined4 *puStack_50;
  undefined **ppuStack_40;
  undefined **ppuStack_3c;
  int iStack_30;
  int iStack_1c;
  
  local_65 = 0;
  if (*(int *)(in_EAX[3] + 4) == 3) {
    (**(code **)(*in_EAX + 0x40))();
    FUN_0014f7a0();
  }
  puVar8 = *(undefined4 **)(DAT_00469ab0 + 0x1348);
  piVar12 = (int *)(DAT_00469ab0 + 0x1348);
  if (puVar8 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11 = (undefined4 *)*puVar8;
  }
  if (puVar11 != puVar8) {
    do {
      if ((puVar11[2] != 0) &&
         (piVar4 = (int *)(**(code **)(**(int **)(puVar11[2] + 0xf0) + 0x30))(), piVar4 == in_EAX))
      {
        FUN_000c5ca0();
        local_65 = 1;
      }
      puVar11 = (undefined4 *)*puVar11;
    } while (puVar11 != (undefined4 *)*piVar12);
  }
  iVar5 = (**(code **)(*in_EAX + 0xec))();
  puVar8 = (undefined4 *)0x0;
  if (iVar5 != 0) {
    iVar5 = in_EAX[2];
    puVar11 = *(undefined4 **)(iVar5 + 0x74);
    puVar9 = (undefined4 *)0x0;
    if (puVar11 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)*puVar11;
    }
    puVar1 = *(undefined4 **)(iVar5 + 0x68);
    puVar10 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)*puVar1;
    }
    puVar8 = *(undefined4 **)(iVar5 + 0x74);
    puVar2 = *(undefined4 **)(iVar5 + 0x68);
    puStack_50 = puVar10;
    while ((((puVar10 != puVar2 || (puVar1 != puVar2)) || (puVar9 != puVar8)) || (puVar11 != puVar8)
           )) {
      if (puVar10 == puVar1) {
        piVar12 = (int *)puVar9[3];
      }
      else {
        piVar12 = (int *)puVar10[3];
      }
      if (((piVar12 != (int *)0x0) &&
          (piVar4 = (int *)(**(code **)(*piVar12 + 0xec))(), piVar4 != (int *)0x0)) &&
         ((iVar5 = (**(code **)(*piVar12 + 0xf4))(), iVar5 != 0 && (piVar12 != in_EAX)))) {
        piVar6 = (int *)(**(code **)(*in_EAX + 0xec))();
        iVar5 = *piVar6;
        uVar7 = (**(code **)(*piVar4 + 0x9c))();
        cVar3 = (**(code **)(iVar5 + 0xc0))(uVar7);
        puVar10 = puStack_50;
        if (cVar3 != '\0') {
          iVar5 = (**(code **)(*piVar12 + 0xf4))();
          iVar5 = FUN_000388b0(*(undefined4 *)(iVar5 + 0x358));
          if ((iVar5 != 0) && (*(int *)(iVar5 + 100) == 1)) {
            FUN_00012320(0x11);
            FUN_00012000(0x11,&ppuStack_40);
            ppuStack_3c = &PTR_FUN_003a4f64;
            if (iStack_1c != 0) {
              FUN_0008f6e0();
            }
            if (iStack_30 != 0) {
              FUN_0008f6e0();
            }
            ppuStack_40 = &PTR_LAB_003a4f50;
          }
        }
      }
      if (puVar10 == puVar1) {
        puVar9 = (undefined4 *)*puVar9;
      }
      else {
        puVar10 = (undefined4 *)*puVar10;
        puStack_50 = puVar10;
      }
    }
  }
  return CONCAT31((int3)((uint)puVar8 >> 8),local_65);
}
