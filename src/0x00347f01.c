/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C813BE3B7763981B812103D1542BD17D2D621736D125BA285E86A9F0DA5E8D6
 * Entry: 0x00347f01, Ghidra index: 12885, label: FUN_00347f01
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347f01(int param_1,int param_2,short *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  undefined4 local_14;
  int local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_a;
  
  if (((((*(uint *)(param_1 + 8) & 0x1000000) == 0) && (*(int *)(param_2 + 0x10) != -1)) &&
      (0x13 < param_4)) &&
     (((uVar1 = (*(byte *)(param_3 + 6) & 0xf0) >> 2, 0x13 < uVar1 && (uVar1 <= param_4)) &&
      ((param_3[1] != 0 && (*param_3 != 0)))))) {
    if ((*(uint *)(param_1 + 8) & 0x2000000) == 0) {
      local_14 = *(undefined4 *)(param_2 + 0xc);
      local_c = 0;
      local_a = CONCAT11((char)param_4,(char)(param_4 >> 8));
      local_b = 6;
      psVar4 = param_3;
      uVar5 = param_4;
      local_10 = *(int *)(param_2 + 0x10);
      uVar2 = FUN_0035628c(0,&local_14,0xc);
      iVar3 = FUN_0035628c(uVar2,psVar4,uVar5);
      if (iVar3 != 0xffff) {
        return;
      }
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_00354ff6(param_1,param_2,*param_3,param_3[1],param_3 + 2,uVar1 + (int)param_3,
                   param_4 - uVar1);
    }
  }
  return;
}
