/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01AF3B8E0E53177DEDEFB46788CF29CB4CADA0EAF7FE73D96573AB4CB573FD7B
 * Entry: 0x00338505, Ghidra index: 12475, label: FUN_00338505
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00338505(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,int param_11,undefined4 *param_12)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  if (in_ECX == 0) {
    iVar2 = -0x7feafffb;
  }
  else {
    uVar1 = *param_4;
    if (param_11 == 0) {
      puVar3 = (undefined4 *)
               thunk_FUN_0033e970((~-(uint)(param_3 != (undefined4 *)0x0) & uVar1) + 0x138,0x2022);
    }
    else {
      puVar3 = (undefined4 *)
               FUN_0033e9f8((~-(uint)(param_3 != (undefined4 *)0x0) & uVar1) + 0x138,0x2022);
    }
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    else {
      puVar4 = puVar3;
      for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      puVar3[0x43] = param_11;
      if (param_3 == (undefined4 *)0x0) {
        param_3 = puVar3 + 0x4e;
      }
      iVar2 = FUN_00338406(param_1,param_2,param_3,uVar1,param_5,param_6,param_7,param_8,param_9,
                           param_10,puVar3,0);
      if (iVar2 < 0) {
        if (iVar2 == -0x7ff8ff86) {
          *param_4 = puVar3[0x27];
        }
        if (param_11 == 0) {
          FUN_0033e9ea(puVar3);
        }
        else {
          FUN_0033ea20(0);
        }
      }
      else {
        *param_12 = puVar3;
      }
    }
  }
  return iVar2;
}
