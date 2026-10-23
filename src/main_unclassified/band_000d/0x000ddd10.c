/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A37AFA4C9272C9F49FCE7FAB4BD1613C0F0DF9679D0C38B1A056CB44A5E0AC81
 * Entry: 0x000ddd10, Ghidra index: 2709, label: FUN_000ddd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_000ddd10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_2c [11];
  
  puVar4 = local_2c;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (in_EAX == (undefined4 *)0x0) {
    in_EAX = local_2c;
  }
  iVar3 = FUN_000dd8e0(param_1,param_5,param_6,param_8,param_7,0,in_EAX,0,param_9);
  if (iVar3 != 0) {
    *param_2 = in_EAX[9];
    uVar1 = in_EAX[5];
    uVar2 = in_EAX[4];
    *param_3 = in_EAX[3];
    param_3[1] = uVar2;
    param_3[2] = uVar1;
    uVar1 = in_EAX[8];
    uVar2 = in_EAX[7];
    *param_4 = in_EAX[6];
    param_4[1] = uVar2;
    param_4[2] = uVar1;
    return *in_EAX;
  }
  return 0;
}
