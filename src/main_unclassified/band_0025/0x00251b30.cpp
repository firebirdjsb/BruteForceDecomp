/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3FFAEEB939A2B3EAF0AC8B0CFBE550E146D4D8D9EDDE4CD6C0B4E3A180AA984
 * Entry: 0x00251b30, Ghidra index: 8372, label: FUN_00251b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00251b30(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = param_1[1];
  uVar3 = uVar2;
  if (in_ECX < uVar2) {
    uVar3 = in_ECX;
  }
  if (uVar3 == 0) {
    return 0;
  }
  param_1[1] = uVar2 - uVar3;
  if (*(int *)(param_1[7] + 0x18) == 0) {
    iVar1 = FUN_0027e680(param_1[0xc],*param_1,uVar3);
    param_1[0xc] = iVar1;
  }
  puVar4 = (undefined4 *)*param_1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  param_1[2] = param_1[2] + uVar3;
  *param_1 = *param_1 + uVar3;
  return uVar3;
}
