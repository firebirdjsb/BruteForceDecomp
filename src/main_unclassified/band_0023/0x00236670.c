/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C4E9FF97FAD7BC65B6785B0219EE5FFC14E999AC651A7AA2E9585D197E84496
 * Entry: 0x00236670, Ghidra index: 7831, label: FUN_00236670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00236670(char param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = *in_ECX;
  local_30 = -0x40800000;
  if ((iVar4 == 0) || (piVar1 = *(int **)(iVar4 + 0x1c), piVar1 == (int *)0x0)) {
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
  }
  else {
    local_30 = *(int *)(iVar4 + 0x20);
    local_28 = piVar1[2];
    local_2c = piVar1[1];
    local_24 = *piVar1;
    local_20 = local_2c;
    local_1c = local_28;
  }
  if (param_1 == '\0') {
    *param_2 = local_30;
  }
  else {
    if (0.0 <= (float)in_ECX[0x18]) {
      *param_2 = in_ECX[0x18];
      iVar4 = in_ECX[0x1b];
      iVar2 = in_ECX[0x1a];
      *param_3 = in_ECX[0x19];
      param_3[1] = iVar2;
      param_3[2] = iVar4;
      return 1;
    }
    if ((in_ECX[0x13] != 0) && (in_ECX[0x14] - in_ECX[0x13] >> 2 != 0)) {
      iVar4 = in_ECX[0x13];
      iVar2 = in_ECX[0x14];
      if ((in_ECX[2] == 0) && ((in_ECX[0x11] & 0x100U) != 0)) {
        FUN_002368d0(1);
        in_ECX[0x11] = in_ECX[0x11] | 0x100;
      }
      FUN_000621c0();
      iVar3 = local_30;
      for (; iVar4 != iVar2; iVar4 = iVar4 + 4) {
        FUN_00236670(1,&local_30,&local_24);
        FUN_000621c0();
        local_2c = local_4;
        local_24 = local_c;
        local_28 = local_8;
        local_20 = local_8;
        local_1c = local_4;
        FUN_002364a0(local_30);
      }
      FUN_000a0c60();
      in_ECX[0x18] = iVar3;
      *param_2 = iVar3;
      in_ECX[0x19] = local_24;
      in_ECX[0x1b] = local_1c;
      in_ECX[0x1a] = local_20;
      *param_3 = local_24;
      param_3[1] = local_20;
      param_3[2] = local_1c;
      return 1;
    }
    in_ECX[0x18] = local_30;
    *param_2 = local_30;
    in_ECX[0x19] = local_24;
    in_ECX[0x1a] = local_20;
    in_ECX[0x1b] = local_1c;
  }
  *param_3 = local_24;
  param_3[1] = local_20;
  param_3[2] = local_1c;
  return 1;
}
