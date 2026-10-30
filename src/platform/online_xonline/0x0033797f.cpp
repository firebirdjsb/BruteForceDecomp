/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73ABF4FF865C210D2DDB591646905EF0AA576F1861AC7FC1402DAC9A0DD5ECBE
 * Entry: 0x0033797f, Ghidra index: 12463, label: FUN_0033797f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033797f(uint param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  int iVar8;
  char *local_10;
  int local_c;
  
  iVar8 = 0;
  local_10 = param_3;
  param_3[0] = '\0';
  param_3[1] = '\0';
  param_3[2] = '\0';
  param_3[3] = '\0';
  local_c = 0;
  param_2 = FUN_003378b6(&local_10,param_2,1,0);
  pcVar2 = local_10;
  if (-1 < param_2) {
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    *(uint *)(local_10 + 0x38) = param_1;
    local_10 = (char *)(param_1 + 0xc);
    param_1 = 0;
    puVar7 = (undefined4 *)(in_ECX + 0x12d0);
    do {
      piVar3 = (int *)(*(int *)(pcVar2 + 0x38) + param_1);
      if (((*piVar3 != 0 || piVar3[1] != 0) && ((*(byte *)(piVar3 + 2) & 3) == 0)) &&
         (puVar7[3] == 0)) {
        local_c = local_c + 1;
        puVar4 = puVar7;
        for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        iVar8 = *(int *)(pcVar2 + 0x38);
        *puVar7 = *(undefined4 *)(param_1 + iVar8);
        puVar7[1] = *(undefined4 *)(param_1 + 4 + iVar8);
        puVar7[4] = 1;
        puVar4 = (undefined4 *)FUN_0033e9b3(0x2d80,0x2033);
        puVar7[0x10] = puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_00337ae7;
        iVar8 = *(int *)(pcVar2 + 0x38);
        *puVar4 = *(undefined4 *)(param_1 + iVar8);
        puVar4[1] = *(undefined4 *)(param_1 + 4 + iVar8);
        puVar4 = (undefined4 *)FUN_0033e9b3(0xfd0,0x2034);
        puVar7[0x11] = puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_00337ae7;
        iVar8 = *(int *)(pcVar2 + 0x38);
        *puVar4 = *(undefined4 *)(param_1 + iVar8);
        puVar4[1] = *(undefined4 *)(param_1 + 4 + iVar8);
        pcVar5 = local_10;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        *(char **)(pcVar2 + 0x40) =
             pcVar5 + *(int *)(pcVar2 + 0x40) +
                      ((*(ushort *)(puVar7 + 0x14) + 0x47) - (int)(local_10 + 1));
        iVar8 = local_c;
      }
      local_10 = local_10 + 0x70;
      param_1 = param_1 + 0x70;
      puVar7 = puVar7 + 0x2e;
    } while (param_1 < 0x1c0);
    if (iVar8 == 0) {
      pcVar2[0x10] = '\f';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
LAB_00337b08:
      *(char **)param_3 = pcVar2;
      return param_2;
    }
    iVar6 = thunk_FUN_0033e970(*(undefined4 *)(pcVar2 + 0x40),0x20);
    *(int *)(pcVar2 + 0x3c) = iVar6;
    if (iVar6 != 0) {
      iVar8 = iVar8 * 0x128c + 0x100;
      *(int *)(pcVar2 + 0x48) = iVar8;
      iVar8 = thunk_FUN_0033e970(iVar8,0x20);
      *(int *)(pcVar2 + 0x44) = iVar8;
      if (iVar8 != 0) goto LAB_00337b08;
    }
LAB_00337ae7:
    param_2 = -0x7ff8fff2;
  }
  FUN_003356c8(pcVar2);
  return param_2;
}
