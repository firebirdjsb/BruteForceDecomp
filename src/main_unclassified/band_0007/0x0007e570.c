/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21A1025E979A9BBABFEEC77B76FB338541F4F386BA0753D53466E4EDFBD40E78
 * Entry: 0x0007e570, Ghidra index: 1497, label: FUN_0007e570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400128;
extern uint32_t DAT_00400534;
extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t DAT_0040dd4c;
extern uint32_t DAT_0040ddd8;
extern uint32_t *DAT_004432f8;
extern uint32_t DAT_00469b58;
extern char s__s_s_s_0040dd8c[];
extern char s_campaign_0040dd68[];
extern char s_campaign_type_dat_0040dd54[];
extern char s_package_name_dat_0040dd28[];
void FUN_0007e570(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  char *pcVar11;
  int unaff_ESI;
  char *pcVar12;
  int *unaff_EDI;
  char *pcVar13;
  undefined4 uStack_77c;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 auStack_764 [5];
  undefined1 auStack_750 [4];
  undefined1 auStack_74c [8];
  undefined1 auStack_744 [251];
  char cStack_649;
  char acStack_648 [264];
  undefined1 auStack_540 [12];
  undefined1 auStack_534 [256];
  undefined1 auStack_434 [260];
  undefined1 auStack_330 [264];
  wchar_t awStack_228 [274];
  
  local_768 = 0;
  uStack_77c = 0x7e59a;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  uStack_77c = 0;
  auStack_764[0] = 0x7246856;
  (**(code **)(*piVar2 + 8))(auStack_764,0x3f800000);
  iVar3 = FUN_0007f4b0(in_ECX,param_2,0,1,0x104);
  if (iVar3 == 0) {
    pcVar4 = DAT_00400538;
    if (DAT_0040054c < 0x10) {
      pcVar4 = (char *)&DAT_00400538;
    }
    FUN_002eaa19(auStack_534,0x104,s__s_s_s_0040dd8c,auStack_744,s_campaign_0040dd68,pcVar4);
    cVar1 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,auStack_534);
    if (cVar1 != '\0') {
      *param_1 = -0xb6ce2f4;
      return;
    }
    FUN_002eaa19(auStack_434,0x104,&DAT_0040dd4c,auStack_74c,s_campaign_type_dat_0040dd54);
    iVar3 = FUN_002f2b3f(auStack_434,0x40000000,0,0,4,0x80,0);
    if (iVar3 != -1) {
      uStack_76c = param_3;
      XAPILIB__WriteFile(iVar3,&stack0xfffff890,8,&stack0xfffff888,0);
      XAPILIB__SetEndOfFile(iVar3);
      XAPILIB__CloseHandle(iVar3);
    }
    iVar3 = (**(code **)(*in_ECX + 0x1a4))(param_3);
    iVar6 = *(int *)(iVar3 + 0x9c);
    if (iVar6 == 0) {
      if (*(uint *)(iVar3 + 0x38) < 0x10) {
        iVar3 = iVar3 + 0x24;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x24);
      }
      FUN_0001fe90(iVar3);
      FUN_001e88e0(&DAT_00400128,&uStack_76c,&DAT_00400534);
      FUN_000519c0();
      unaff_EDI = in_ECX;
    }
    else {
      pwVar10 = awStack_228;
      for (iVar7 = 0x82; iVar7 != 0; iVar7 = iVar7 + -1) {
        pwVar10[0] = L'\0';
        pwVar10[1] = L'\0';
        pwVar10 = pwVar10 + 2;
      }
      if (*(uint *)(iVar6 + 0x1c) < 8) {
        pwVar10 = (wchar_t *)(iVar6 + 8);
      }
      else {
        pwVar10 = *(wchar_t **)(iVar6 + 8);
      }
      _wcsncpy(awStack_228,pwVar10,0x104);
      uVar5 = XAPILIB__XCalculateSignatureBegin(0);
      XAPILIB__XCalculateSignatureUpdate(uVar5,awStack_228,0x208);
      XAPILIB__XCalculateSignatureEnd(uVar5,&uStack_76c);
      FUN_002eaa19(auStack_330,0x104,&DAT_0040dd4c,auStack_750,s_package_name_dat_0040dd28);
      iVar6 = FUN_002f2b3f(auStack_330,0x40000000,0,0,4,0x80,0);
      if (iVar6 != -1) {
        XAPILIB__WriteFile(iVar6,&uStack_76c,0x14,&uStack_77c,0);
        XAPILIB__WriteFile(iVar6,awStack_228,0x208,&uStack_77c,0);
        XAPILIB__SetEndOfFile(iVar6);
        XAPILIB__CloseHandle(iVar6);
      }
      iVar6 = *(int *)(iVar3 + 0x9c);
      if (*(uint *)(iVar6 + 0x38) < 0x10) {
        pcVar4 = (char *)(iVar6 + 0x24);
      }
      else {
        pcVar4 = *(char **)(iVar6 + 0x24);
      }
      pcVar11 = acStack_648;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      pcVar4 = &DAT_0040ddd8;
      do {
        pcVar11 = pcVar4;
        pcVar4 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      pcVar4 = &cStack_649;
      do {
        pcVar13 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar13 != '\0');
      pcVar13 = &DAT_0040ddd8;
      for (uVar8 = (uint)(pcVar11 + -0x40ddd7) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar8 = (uint)(pcVar11 + -0x40ddd7) & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar4 = pcVar4 + 1;
      }
      if (*(uint *)(iVar3 + 0x38) < 0x10) {
        pcVar4 = (char *)(iVar3 + 0x24);
        pcVar11 = pcVar4;
      }
      else {
        pcVar4 = *(char **)(iVar3 + 0x24);
        pcVar11 = pcVar4;
      }
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar13 = &cStack_649;
      do {
        pcVar12 = pcVar13 + 1;
        pcVar13 = pcVar13 + 1;
      } while (*pcVar12 != '\0');
      pcVar12 = pcVar11;
      for (uVar8 = (uint)((int)pcVar4 - (int)pcVar11) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = (int)pcVar4 - (int)pcVar11 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      pcVar4 = DAT_00400538;
      pcVar11 = DAT_00400538;
      if (DAT_0040054c < 0x10) {
        pcVar4 = (char *)&DAT_00400538;
        pcVar11 = pcVar4;
      }
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar8 = (int)pcVar4 - (int)pcVar11;
      pcVar4 = &cStack_649;
      do {
        pcVar13 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar13 != '\0');
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar4 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    iVar3 = (**(code **)(*DAT_004432f8 + 0x2c))(DAT_004432f8,acStack_648,auStack_540);
    if (iVar3 == 0) {
      FUN_0023a1c0(auStack_534);
      FUN_0007e410();
      cVar1 = FUN_0007ab60(unaff_EDI,auStack_744,param_2);
      if (cVar1 != '\0') {
        uVar5 = FUN_002383b0();
        *param_4 = uVar5;
        *param_1 = unaff_ESI;
        return;
      }
    }
  }
  else {
    if (iVar3 == 0x70) {
      *param_1 = -0xb9a5ed3;
      return;
    }
    if (iVar3 == 0x52) {
      *param_1 = 0x16613b37;
      return;
    }
    unaff_ESI = ((iVar3 != 0xb7) - 1 & 0xc5e946a) + 0x113d43e2;
  }
  *param_1 = unaff_ESI;
  return;
}
