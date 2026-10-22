/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D63F242D7A88B7197E71685503B5910015DD45667965943A7D55CB4E81A85727
 * Entry: 0x00269600, Ghidra index: 8746, label: FUN_00269600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00269600(undefined4 *param_1,int *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  FUN_002ebea0();
  puVar2 = (undefined4 *)&stack0xfffffffc;
  for (iVar3 = extraout_ECX[0x145]; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = extraout_ECX;
  puVar5 = (undefined4 *)&stack0x00000564;
  for (iVar3 = 0x146; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00269870();
  *param_2 = 0;
  uVar4 = 0;
  if (extraout_ECX[0x145] != 0) {
    do {
      if (1e-06 <= *(float *)(&stack0xfffffffc + uVar4 * 4)) {
        fVar1 = *(float *)(&stack0xfffffffc + uVar4 * 4);
        *param_2 = *param_2 + 1;
        *(float *)(&stack0xfffffffc + uVar4 * 4) = 1.0 / fVar1;
      }
      else {
        *(undefined4 *)(&stack0xfffffffc + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)extraout_ECX[0x145]);
  }
  FUN_0026a780();
  puVar2 = (undefined4 *)FUN_0026a810();
  for (iVar3 = 0x146; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
