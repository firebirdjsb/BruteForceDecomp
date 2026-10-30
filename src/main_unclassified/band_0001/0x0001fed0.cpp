/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E40247B3BFFB5FB65156418FED05B79AAB5DFC6800CEDA0C0D7B9C37CC29189C
 * Entry: 0x0001fed0, Ghidra index: 170, label: FUN_0001fed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001fed0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  
  uVar3 = *(uint *)(in_ECX + 0x18);
  piVar4 = (int *)(in_ECX + 4);
  piVar2 = piVar4;
  if (0xf < uVar3) {
    piVar2 = (undefined4 *)*piVar4;
  }
  if (piVar2 <= param_1) {
    piVar2 = piVar4;
    if (0xf < uVar3) {
      piVar2 = (int *)*piVar4;
    }
    if (param_1 < (undefined4 *)(*(int *)(in_ECX + 0x14) + (int)piVar2)) {
      if (0xf < uVar3) {
        piVar4 = (int *)*piVar4;
      }
      FUN_0001f4f0(in_ECX,(int)param_1 - (int)piVar4,param_2);
      return;
    }
  }
  cVar1 = FUN_0001f660(param_2,1);
  if (cVar1 != '\0') {
    piVar2 = piVar4;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      piVar2 = (undefined4 *)*piVar4;
    }
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar2 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)piVar2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      piVar2 = (undefined4 *)((int)piVar2 + 1);
    }
    *(uint *)(in_ECX + 0x14) = param_2;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      piVar4 = (int *)*piVar4;
    }
    *(undefined1 *)(param_2 + (int)piVar4) = 0;
  }
  return;
}
