/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8866BEFBCD5D7EE5C9642B87D1105CD829F3530B3AC7F3DB41BCA78028975D1F
 * Entry: 0x001e48e0, Ghidra index: 6785, label: FUN_001e48e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
extern uint32_t PTR_DAT_0040757c;
extern char s_d__version_bin_0040756c[];
extern char s_z__cacheinfo_bin_00407558[];
void FUN_001e48e0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int unaff_EBX;
  int *unaff_EBP;
  undefined **ppuVar7;
  char *pcVar8;
  int *piStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  pcVar1 = param_1;
  puStack_1c = (undefined4 *)0x1e48ef;
  local_4 = XAPILIB__XGetLanguage();
  puStack_1c = &param_1;
  piStack_20 = &local_8;
  pcVar8 = s_d__version_bin_0040756c;
  local_c = 0;
  param_1 = (char *)0x0;
  local_8 = -0x1f3bc2fb;
  iVar3 = (**(code **)(*DAT_004432f8 + 0xc))(DAT_004432f8,s_d__version_bin_0040756c,0x80000000);
  if (-1 < iVar3) {
    (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,&piStack_20,4,&puStack_1c);
    (**(code **)(*piStack_20 + 0xc))(piStack_20);
  }
  cVar2 = '\x01';
  if ((char)local_c == '\0') {
    local_c = 0xe0c43d05;
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      unaff_EBP = (int *)0x0;
    }
    iVar3 = (**(code **)(*DAT_004432f8 + 0xc))
                      (DAT_004432f8,s_z__cacheinfo_bin_00407558,0x80000000,&local_c,&stack0xfffffff0
                      );
    if (-1 < iVar3) {
      (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,pcVar1,0x34,&local_c);
      if (puStack_1c == (undefined4 *)0x34) {
        iVar3 = *(int *)(pcVar1 + 0xc);
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        iVar4 = FUN_00238370();
        if ((((iVar4 == iVar3) && (*(int *)(pcVar1 + 0xc) = iVar3, *pcVar1 == -0x7d)) &&
            (*(char **)(pcVar1 + 4) == pcVar8)) &&
           ((unaff_EBX == *(int *)(pcVar1 + 8) && (unaff_EBX != 0)))) {
          cVar2 = FUN_001e4a70(pcVar1);
          cVar2 = '\x01' - (cVar2 != '\0');
        }
      }
      (**(code **)(*piStack_20 + 0xc))(piStack_20);
      if (cVar2 == '\0') goto LAB_001e4a25;
    }
  }
  iVar3 = XAPILIB__XFormatUtilityDrive();
  if (iVar3 != 0) {
    pcVar8 = pcVar1;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    *pcVar1 = -0x7d;
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    uVar5 = XAPILIB__XGetLanguage();
    *(undefined4 *)(pcVar1 + 4) = uVar5;
  }
  *(int **)(pcVar1 + 8) = piStack_20;
LAB_001e4a25:
  if (PTR_DAT_0040757c != (undefined *)0x0) {
    ppuVar7 = &PTR_DAT_0040757c;
    puVar6 = PTR_DAT_0040757c;
    do {
      FUN_001e4e30(pcVar1,puVar6,0,1);
      puVar6 = ppuVar7[1];
      ppuVar7 = ppuVar7 + 1;
    } while (puVar6 != (undefined *)0x0);
  }
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return;
}
