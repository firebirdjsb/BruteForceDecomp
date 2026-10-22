/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 673E1F6E2369821585765010F591877CC2DDE01E36B5B49377DF044E0FFD8F04
 * Entry: 0x0001f5a0, Ghidra index: 146, label: FUN_0001f5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001f5a0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_002f254a();
  }
  uVar2 = *(int *)(in_ECX + 0x14) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(in_ECX + 4);
    puVar3 = puVar4;
    puVar1 = puVar4;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar3 = (undefined4 *)*puVar4;
      puVar1 = (undefined4 *)*puVar4;
    }
    _memmove((void *)((int)puVar3 + param_1),(void *)((int)puVar1 + param_2 + param_1),
             uVar2 - param_2);
    param_2 = *(int *)(in_ECX + 0x14) - param_2;
    if (param_2 == 0xffffffff) {
      FUN_002f258a();
    }
    if (*(uint *)(in_ECX + 0x18) < param_2) {
      FUN_0001f730(param_2,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (param_2 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)puVar4 = 0;
      return;
    }
    if (param_2 != 0) {
      *(uint *)(in_ECX + 0x14) = param_2;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)(param_2 + (int)puVar4) = 0;
    }
  }
  return;
}
