/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC3CE6B2C47DE693AAD201CC866C3290690A2560DD8344FAEA3F22804A0CD4FC
 * Entry: 0x001f8510, Ghidra index: 7065, label: FUN_001f8510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a4f50;
undefined4 FUN_001f8510(int *param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float fVar10;
  undefined4 *puStack_80;
  undefined **ppuStack_60;
  int iStack_5c;
  float fStack_58;
  int *piStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  byte bStack_4;
  
  puVar4 = (undefined4 *)(**(code **)(*(int *)(*param_1 + 8) + 4))();
  iVar1 = *param_1;
  puVar8 = *(undefined4 **)(iVar1 + 0xe0);
  if (puVar8 == (undefined4 *)0x0) {
    puStack_80 = (undefined4 *)0x0;
  }
  else {
    puStack_80 = (undefined4 *)*puVar8;
  }
  if (puStack_80 != puVar8) {
    do {
      piVar2 = (int *)puStack_80[3];
      if ((piVar2 != (int *)0x0) &&
         (((uint)piVar2 & -(uint)((*(byte *)((int)piVar2 + 0x26) & 0x40) != 0)) != 0)) {
        bVar3 = *(byte *)((int)piVar2 + 0x26) & 0x40;
        if (0.0 <= (float)param_1[1]) {
          piVar6 = (int *)(-(uint)(bVar3 != 0) & (uint)piVar2);
          if ((*(byte *)(piVar6 + 0x1c) & 1) == 0) {
            (**(code **)(*piVar2 + 0x40))();
            fVar9 = (float10)FUN_000394b0();
            fVar9 = (float10)FUN_001f8420((float)fVar9);
            if ((float10)0.0 < fVar9 * (float10)param_2) {
              fVar9 = (float10)FUN_00222f60();
              iStack_5c = param_1[3];
              fStack_58 = (float)fVar9;
              piStack_54 = piVar6;
              piStack_50 = piVar6;
              iVar7 = (**(code **)(*piVar6 + 0x40))();
              uStack_28 = *(undefined4 *)(iVar7 + 0x2c);
              uStack_2c = *(undefined4 *)(iVar7 + 0x28);
              uStack_30 = *(undefined4 *)(iVar7 + 0x24);
              uStack_10 = puVar4[2];
              uStack_14 = puVar4[1];
              uStack_18 = *puVar4;
              piStack_50 = (int *)0x0;
              uStack_4c = 0;
              uStack_44 = 0;
              bStack_4 = bStack_4 & 0xfc;
              uStack_34 = 0;
              uStack_38 = 0;
              uStack_3c = 0;
              uStack_1c = 0;
              uStack_20 = 0;
              uStack_24 = 0;
              FUN_00012000(1,&ppuStack_60);
              ppuStack_60 = &PTR_LAB_003a4f50;
            }
          }
        }
        else {
          uVar5 = -(uint)(bVar3 != 0) & (uint)piVar2;
          fVar10 = -(param_2 * (float)param_1[1]) + *(float *)(uVar5 + 0x54);
          if (*(float *)(uVar5 + 0x50) <= fVar10) {
            fVar10 = *(float *)(uVar5 + 0x50);
          }
          *(float *)(uVar5 + 0x54) = fVar10;
        }
      }
      puVar8 = (undefined4 *)*puStack_80;
      puStack_80 = puVar8;
    } while (puVar8 != *(undefined4 **)(iVar1 + 0xe0));
  }
  return CONCAT31((int3)((uint)puVar8 >> 8),1);
}
