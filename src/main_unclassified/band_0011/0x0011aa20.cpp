/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31AFB268E26600CB7DBAA5ACF3938334C040185528B5115A7E82CA24B28BA944
 * Entry: 0x0011aa20, Ghidra index: 3610, label: FUN_0011aa20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699d0;
extern uint32_t DAT_004699d4;
void FUN_0011aa20(float param_1)

{
  byte *pbVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float fVar8;
  int unaff_retaddr;
  
  iVar5 = (**(code **)(**(int **)(*(int *)((int)param_1 + 8) + 0xbec) + 0xc))(param_1);
  if (((iVar5 == 0) || (*(int *)(iVar5 + 0x24) == 0)) ||
     ((*(byte *)(*(int *)(iVar5 + 0x24) + 0x14) & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    iVar5 = FUN_0006ef00();
    if ((iVar5 != 0) &&
       (piVar6 = (int *)(**(code **)(**(int **)(iVar5 + 0xf0) + 0x30))(), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0xd4))();
    }
    if ((*(byte *)(unaff_retaddr + 0x810) & 1) != 0) {
      iVar5 = *(int *)(unaff_retaddr + 0x2e8);
      cVar4 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x20))();
      if (((cVar4 != '\0') && (iVar5 = *(int *)(iVar5 + 0x164), iVar5 != 0)) &&
         ((*(int *)(*(int *)(iVar5 + 0xc) + 4) == 0x14 && (iVar5 != 0)))) {
        FUN_0014d2e0();
        FUN_0022dc60();
      }
      iVar5 = *(int *)(unaff_retaddr + 0x2e8);
      cVar4 = (**(code **)(*(int *)(iVar5 + 0x178) + 0x20))();
      if ((cVar4 != '\0') && (*(int *)(iVar5 + 0x198) != 0)) {
        (**(code **)(*(int *)(*(int *)(unaff_retaddr + 0x2e8) + 0x178) + 0x20))();
        FUN_0022dc60();
      }
      *(byte *)(unaff_retaddr + 0x810) = *(byte *)(unaff_retaddr + 0x810) & 0xfe;
    }
  }
  iVar5 = *(int *)(*(int *)(unaff_retaddr + 0x2e8) + 0x1cc);
  if (iVar5 != 0) {
    *(int *)(unaff_retaddr + 0x7e4) = iVar5;
    iVar5 = *(int *)(*(int *)(unaff_retaddr + 0xc) + 0x15c);
    if (iVar5 == 1) {
      iVar5 = (*(int *)(*(int *)(unaff_retaddr + 0x2e8) + 0x1cc) != 1) + 1;
    }
    else if ((iVar5 < 2) || (3 < iVar5)) {
      iVar5 = 1;
    }
    else {
      iVar5 = FUN_0014d2e0();
      if ((iVar5 == 0) || (**(int **)(iVar5 + 0x228) != 2)) {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
    }
    if (*(int *)(unaff_retaddr + 0x5b0) != iVar5) {
      *(int *)(unaff_retaddr + 0x5b0) = iVar5;
      *(byte *)(unaff_retaddr + 0x260) = *(byte *)(unaff_retaddr + 0x260) | 2;
    }
  }
  if ((*(char *)(unaff_retaddr + 0x6a0) != '\0') &&
     (((iVar5 = *(int *)(unaff_retaddr + 0x2e8), *(int *)(iVar5 + 0x1c0) != *(int *)(iVar5 + 0x1b8)
       || (*(int *)(iVar5 + 0x1c4) != *(int *)(iVar5 + 0x1bc))) &&
      (*(char *)(unaff_retaddr + 0x7e8) == '\0')))) {
    piVar6 = (int *)FUN_0014dae0();
    if (((piVar6 == (int *)0x0) || (iVar5 = (**(code **)(*piVar6 + 0x1c))(), iVar5 == 0)) ||
       (iVar5 = (**(code **)(*piVar6 + 0x1c))(), *(char *)(iVar5 + 0x70) == '\0')) {
      FUN_00121170(0x3f800000);
    }
    else {
      *(undefined1 *)(unaff_retaddr + 0x6a0) = 0;
      pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x2e8) + 0x1c8);
      *pbVar1 = *pbVar1 & 0xfe;
    }
  }
  FUN_00124380(unaff_retaddr,param_1);
  fVar3 = DAT_004699d4;
  fVar8 = DAT_004699d0;
  if (*(int *)(unaff_retaddr + 0x7a8) == 0) {
    if (bVar2) {
      *(undefined4 *)(unaff_retaddr + 2000) = *(undefined4 *)(*(int *)(unaff_retaddr + 0xc) + 600);
    }
    if (fVar3 <= 0.0) {
      *(undefined4 *)(unaff_retaddr + 0x7cc) = 0;
      fVar7 = (float10)FUN_00124920();
      *(float *)(unaff_retaddr + 0x7ac) = (float)fVar7;
    }
    else {
      *(float *)(unaff_retaddr + 0x7cc) = *(float *)(unaff_retaddr + 0x7cc) - param_1 / fVar3;
      fVar7 = (float10)FUN_0011af10(unaff_retaddr,param_1,fVar3);
      *(float *)(unaff_retaddr + 0x7ac) =
           (float)((float10)*(float *)(unaff_retaddr + 0x7ac) - fVar7);
    }
  }
  else {
    if (bVar2) {
      FUN_001244d0(unaff_retaddr,param_1);
    }
    if (fVar8 <= 0.0) {
      *(undefined4 *)(unaff_retaddr + 0x7cc) = 0x3f800000;
      fVar7 = (float10)FUN_00124920();
      *(float *)(unaff_retaddr + 0x7ac) = (float)fVar7;
    }
    else {
      *(float *)(unaff_retaddr + 0x7cc) = param_1 / fVar8 + *(float *)(unaff_retaddr + 0x7cc);
      fVar7 = (float10)FUN_0011ae80(unaff_retaddr,param_1,fVar8);
      *(float *)(unaff_retaddr + 0x7ac) =
           (float)(fVar7 + (float10)*(float *)(unaff_retaddr + 0x7ac));
    }
  }
  fVar8 = *(float *)(unaff_retaddr + 0x7cc);
  if (*(float *)(unaff_retaddr + 0x7cc) <= 0.0) {
    fVar8 = 0.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  *(float *)(unaff_retaddr + 0x7cc) = fVar8;
  param_1 = *(float *)(unaff_retaddr + 0x7c8) - param_1;
  if (param_1 < 0.0) {
    *(undefined4 *)(unaff_retaddr + 0x7c8) = 0;
    return;
  }
  *(float *)(unaff_retaddr + 0x7c8) = param_1;
  return;
}
