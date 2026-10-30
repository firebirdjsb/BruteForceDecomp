/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E09150731E5DB6915C8AE2639B1B2D4E65F90978BD49A22A85200DF8D4776444
 * Entry: 0x0023c1d0, Ghidra index: 7926, label: FUN_0023c1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023c1d0(int *param_1,undefined4 param_2,int *param_3,int *param_4,char param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined4 in_EAX;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float fVar9;
  uint32_t guest_item_word;
  undefined4 *unaff_EDI;
  int *local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  local_ac = (int *)0x0;
  local_70 = 1;
  local_7c = 0;
  local_78 = 0;
  local_98 = 0x65;
  local_88 = 1;
  local_94 = 0;
  local_9c = 0;
  uVar5 = (**(code **)(*param_3 + 0x14))();
  iVar6 = FUN_002338c0(auStack_30,uVar5);
  FUN_0003d6c0(auStack_60,iVar6,iVar6 + 0x24);
  unaff_EDI[4] = &local_9c;
  unaff_EDI[3] = &piStack_84;
  unaff_EDI[2] = auStack_60;
  *unaff_EDI = in_EAX;
  unaff_EDI[1] = uVar5;
  pfVar2 = *(float **)(*param_1 + 0x18);
  pfVar3 = *(float **)(*param_1 + 0x1c);
  if (pfVar2 != pfVar3) {
    pfVar7 = pfVar2 + 2;
    do {
      piVar8 = param_4;
      /* MOV EBP,[EBX-4] loads a guest 32-bit pointer, not a float value. */
      memcpy(&guest_item_word, pfVar7 - 1, sizeof guest_item_word);
      if (param_4 == (int *)0x0) {
        piVar8 = (int *)(uintptr_t)guest_item_word;
      }
      if (piVar8 != (int *)0x0) {
        if ((param_5 == '\0') && (0.0 <= *pfVar7)) {
          FUN_000621c0();
          iVar6 = (**(code **)(*param_3 + 0x50))(auStack_6c,*pfVar7);
          if (iVar6 < 2) goto LAB_0023c3f2;
        }
        if (piVar8 != local_ac) {
          if (local_ac != (int *)0x0) {
            (**(code **)(*local_ac + 0x24))(local_ac,param_2);
          }
          (**(code **)(*piVar8 + 0x1c))(piVar8,param_2);
          local_ac = piVar8;
        }
        unaff_EDI[0xb] = pfVar7 + -2;
        /* MOV EAX,[EBX-4] / MOV [EDI+0x18],EAX forwards the same bits. */
        unaff_EDI[6] = guest_item_word;
        unaff_EDI[5] = ((-8 - (int)pfVar2) + (int)pfVar7) / 0x2c;
        fVar4 = pfVar7[6];
        for (fVar9 = pfVar7[5]; fVar9 != fVar4; fVar9 = (float)((int)fVar9 + 0x30)) {
          uStack_80 = *(undefined4 *)((int)fVar9 + 0xc);
          piStack_84 = (int *)((int)fVar9 + 0x20);
          uStack_74 = *(undefined4 *)((int)fVar9 + 0x10);
          uStack_90 = *(undefined4 *)((int)fVar9 + 0x2c);
          uStack_8c = *(undefined4 *)((int)fVar9 + 4);
          unaff_EDI[10] = *(undefined4 *)((int)fVar9 + 0x1c);
          if (*(int *)((int)fVar9 + 0x18) < 0) {
            unaff_EDI[9] = 0;
          }
          else {
            unaff_EDI[8] = *(undefined4 *)
                            (*(int *)(*param_1 + 8) + 4 + *(int *)((int)fVar9 + 0x18) * 0x14);
            unaff_EDI[9] = *(undefined4 *)
                            (*(int *)(*param_1 + 8) + 0x10 + *(int *)((int)fVar9 + 0x18) * 0x14);
          }
          (**(code **)(*piVar8 + 0x20))(piVar8);
        }
      }
LAB_0023c3f2:
      pfVar1 = pfVar7 + 9;
      pfVar7 = pfVar7 + 0xb;
    } while (pfVar1 != pfVar3);
    if (local_ac != (int *)0x0) {
      (**(code **)(*local_ac + 0x24))(local_ac,param_2);
    }
  }
  return;
}
