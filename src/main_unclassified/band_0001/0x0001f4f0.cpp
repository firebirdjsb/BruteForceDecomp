/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 855A7FDD82E311A469539F6A3B49546AAF1839C87F62D8B343C64B8B67094843
 * Entry: 0x0001f4f0, Ghidra index: 145, label: FUN_0001f4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001f4f0(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_002f254a();
  }
  uVar5 = *(int *)(param_1 + 0x14) - param_2;
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (in_ECX != param_1) {
    cVar1 = FUN_0001f660(uVar5,1);
    if (cVar1 != '\0') {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        param_1 = param_1 + 4;
      }
      else {
        param_1 = *(int *)(param_1 + 4);
      }
      piVar2 = (int *)(in_ECX + 4);
      piVar4 = piVar2;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        piVar4 = (undefined4 *)*piVar2;
      }
      puVar6 = (undefined4 *)(param_1 + param_2);
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar4 = *puVar6;
        puVar6 = puVar6 + 1;
        piVar4 = piVar4 + 1;
      }
      for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)piVar4 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        piVar4 = (undefined4 *)((int)piVar4 + 1);
      }
      *(uint *)(in_ECX + 0x14) = uVar5;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        piVar2 = (int *)*piVar2;
      }
      *(undefined1 *)((int)piVar2 + uVar5) = 0;
    }
    return;
  }
  FUN_0001f5a0(uVar5 + param_2,0xffffffff);
  FUN_0001f5a0(0,param_2);
  return;
}
