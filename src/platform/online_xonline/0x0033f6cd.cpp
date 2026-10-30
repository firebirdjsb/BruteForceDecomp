/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDEB9B1FDBDFC2BAEE11F538F8FE9A542EAC51A5560F1865F73B870E0E98944A
 * Entry: 0x0033f6cd, Ghidra index: 12650, label: FUN_0033f6cd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033f6cd(uint param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_a0 [116];
  undefined1 local_2c [20];
  char local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  puVar4 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar4 + 4;
  if (*(undefined4 **)(param_1 + 4) < puVar4 + 4) {
    *(undefined4 **)(param_1 + 8) = puVar4;
    puVar4 = (undefined4 *)0x0;
  }
  if (puVar4 == (undefined4 *)0x0) {
    local_8 = 0xc000009a;
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = (undefined4 *)(iVar3 + 0x30U);
    if (*(undefined4 **)(param_1 + 4) < (undefined4 *)(iVar3 + 0x30U)) {
      *(int *)(param_1 + 8) = iVar3;
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      local_8 = 0xc000009a;
    }
    else {
      param_1 = 0;
      local_18[0] = '\0';
      local_18[1] = '\0';
      local_18[2] = '\0';
      local_18[3] = '\0';
      local_18[4] = '\0';
      local_18[5] = '\0';
      local_18[6] = '\0';
      local_18[7] = '\0';
      local_18[8] = '\0';
      local_18[9] = '\0';
      local_18[10] = '\0';
      local_18[0xb] = '\0';
      local_18[0xc] = '\0';
      local_18[0xd] = '\0';
      local_18[0xe] = '\0';
      local_18[0xf] = '\0';
      iVar1 = -(int)param_2;
      do {
        if (*param_2 == '\0') break;
        cVar2 = FUN_002ebaeb((int)*param_2);
        param_1 = param_1 + 1;
        param_2[(int)(local_18 + iVar1)] = cVar2;
        param_2 = param_2 + 1;
      } while (param_1 < 0x10);
      XcHMAC(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4),local_18,0x10,0,0,iVar3 + 8);
      XcHMAC(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4),local_18,0x10,local_18,0x10,
             local_2c);
      FUN_0033f362(iVar3);
      XcSHAInit(local_a0);
      XcSHAUpdate(local_a0,local_2c,8);
      XcSHAUpdate(local_a0,iVar3,8);
      XcSHAFinal(local_a0,iVar3 + 0x1c);
      puVar4[1] = 0xcc;
      puVar4[2] = 0x30;
      puVar4[3] = iVar3;
      *puVar4 = *param_4;
      *param_4 = puVar4;
    }
  }
  return local_8;
}
