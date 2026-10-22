/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06337857ED4F56EF51BCDC3C22B8252254E7E69EE6978501ADDEBCDEF4E1A77B
 * Entry: 0x001435d0, Ghidra index: 4142, label: FUN_001435d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d100;
undefined4 FUN_001435d0(uint *param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 extraout_ST0;
  float10 fVar8;
  undefined *puVar9;
  uint uStack_98;
  byte bStack_94;
  float fStack_90;
  int aiStack_8c [8];
  undefined auStack_6c [64];
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  
  FUN_00143570();
  iVar4 = FUN_0017beb0(param_1);
  if (iVar4 == 0) {
    return 0;
  }
  in_EAX[1] = *(undefined4 *)(iVar4 + 0x1c);
  if (param_2 == 0) goto LAB_001437a2;
  *(undefined1 *)(in_EAX + 0x15) = 1;
  iVar5 = FUN_0017beb0(param_1);
  fVar8 = extraout_ST0;
  if (iVar5 != 0) {
    fVar8 = (float10)(**(code **)(*DAT_00469940 + 100))(iVar5 + 4);
  }
  in_EAX[0x14] = (float)fVar8;
  cVar3 = FUN_00112790();
  if (cVar3 == '\0') {
    if ((*(int *)(param_2 + 0x59c) != 0) &&
       (*(float *)(iVar4 + 8) < 0.0 != (*(float *)(iVar4 + 8) == 0.0))) {
      piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
      if (*piVar7 != 0x17506391) {
        FUN_0003f010();
        iVar4 = FUN_0005c550();
        if (0 < iVar4) {
          iVar5 = 0;
          if (0 < iVar4) {
            do {
              if (aiStack_8c[iVar5] != 0) {
                cVar3 = FUN_0008b880();
                if (cVar3 != '\0') goto LAB_00143710;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar4);
          }
          uStack_20 = 1;
          uStack_24 = 0x3dcccccd;
          uStack_28 = 1;
          uStack_2c = 0xbd8f5c29;
        }
LAB_00143710:
        uVar6 = FUN_0017c170(DAT_00469984);
        puVar9 = auStack_6c;
        goto LAB_0014365e;
      }
    }
    bStack_94 = bStack_94 & 0xfc;
    uStack_98 = param_2;
    uVar6 = 0;
    iVar4 = FUN_0017beb0(param_1);
    if (iVar4 != 0) {
      uVar6 = FUN_00178e50(&uStack_98);
    }
    *in_EAX = uVar6;
  }
  else {
    uVar6 = FUN_0017c170(DAT_00469984);
    puVar9 = &DAT_0046d100;
LAB_0014365e:
    *in_EAX = uVar6;
    FUN_0017c110(puVar9,0);
  }
  if (param_3 != '\0') {
    uVar1 = *(uint *)(param_2 + 4);
    uVar2 = *param_1;
    fVar8 = (float10)FUN_0017c1e0(DAT_00469984);
    fStack_90 = (float)fVar8;
    uStack_98 = uVar1 ^ uVar2;
    FUN_00141100(fStack_90);
  }
LAB_001437a2:
  in_EAX[0x11] = in_EAX[0x10];
  return 1;
}
