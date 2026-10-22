/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF11F387E6E3B14FD6A25A4B6E7DE3DD8A23F751D9010CAE0258DA619C177943
 * Entry: 0x00148720, Ghidra index: 4258, label: FUN_00148720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039be8c;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00148720(int *param_1,int *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  float unaff_EBX;
  undefined1 auStack_c [12];
  
  puVar6 = (undefined4 *)FUN_002ea01d(0x3c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &DAT_0039be8c;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 0xe) = 0;
    puVar6[9] = 0x3f800000;
    puVar6[10] = 0x40a00000;
    puVar6[0xd] = 5;
  }
  if ((undefined4 *)param_2[0x6d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_2[0x6d])(1);
  }
  param_2[0x6d] = (int)puVar6;
  if ((int *)puVar6[4] != param_2) {
    FUN_0008f6a0(param_2);
  }
  iVar8 = param_2[0x6c];
  if (iVar8 == 0) {
    iVar8 = (**(code **)(*param_2 + 0x40))();
    fVar1 = *(float *)(iVar8 + 0x20);
    fVar5 = (float)*(int *)(*(int *)(puVar6[4] + 0xc) + 0x17c);
    fVar3 = *(float *)(iVar8 + 0x2c);
    fVar4 = fVar5 * -*(float *)(iVar8 + 8) + *(float *)(iVar8 + 0x24);
    puVar6[7] = fVar5 * -*(float *)(iVar8 + 0x14) + *(float *)(iVar8 + 0x28);
    puVar6[8] = fVar5 * -fVar1 + fVar3;
  }
  else {
    if (*(int *)(iVar8 + 8) == 0) {
      if ((*(int *)(iVar8 + 0x10) == 0) ||
         (iVar8 = *(int *)(*(int *)(iVar8 + 0x10) + 0xb0), *(int *)(*(int *)(iVar8 + 0xc) + 4) != 3)
         ) {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar8 + 8) + 0x1d4);
    }
    pfVar7 = (float *)(**(code **)(*(int *)(iVar8 + 0x1b4) + 0x30))(auStack_c);
    fVar1 = *pfVar7;
    uVar2 = *(undefined8 *)(pfVar7 + 1);
    iVar8 = (**(code **)(*param_1 + 0x40))();
    fVar3 = *(float *)(iVar8 + 0x2c);
    fVar4 = unaff_EBX * fVar1 + *(float *)(iVar8 + 0x24);
    puVar6[7] = unaff_EBX * (float)uVar2 + *(float *)(iVar8 + 0x28);
    puVar6[8] = unaff_EBX * (float)((ulonglong)uVar2 >> 0x20) + fVar3;
  }
  puVar6[6] = fVar4;
  puVar6[5] = param_2;
  puVar6[0xc] = *(undefined4 *)(*(int *)(puVar6[4] + 0xc) + 0x178);
  puVar6[0xb] = (float)*(int *)(*(int *)(puVar6[4] + 0xc) + 0x17c);
  return;
}
