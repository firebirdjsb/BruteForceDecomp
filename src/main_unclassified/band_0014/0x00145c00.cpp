/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 527A2586E14AE34D7358999C075A2A4D8BA954EFB899C5C1AF1637640D825D7C
 * Entry: 0x00145c00, Ghidra index: 4198, label: FUN_00145c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00145c00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)(param_1 + 8);
  iVar4 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[-1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = param_1 - param_2;
  iVar5 = 4;
  puVar2 = (undefined4 *)(param_2 + 8);
  puVar6 = (undefined4 *)(param_1 + 4);
  do {
    param_2 = puVar2[-2];
    uVar3 = FUN_00235d50(&param_2);
    puVar6[-1] = uVar3;
    uVar3 = puVar2[1];
    uVar1 = *puVar2;
    *puVar6 = puVar2[-1];
    *(undefined4 *)(iVar4 + (int)puVar2) = uVar1;
    puVar6[2] = uVar3;
    iVar5 = iVar5 + -1;
    puVar6[3] = (float)puVar2[2] * 0.017453292;
    puVar6[4] = puVar2[3];
    puVar2 = puVar2 + 6;
    puVar6 = puVar6 + 6;
  } while (iVar5 != 0);
  return param_1;
}
