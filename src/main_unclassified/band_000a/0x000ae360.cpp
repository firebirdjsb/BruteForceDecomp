/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB76CBF293335A3C199DF42A579EBDAB96C1EF90D9554A6F629921F6B9F0A545
 * Entry: 0x000ae360, Ghidra index: 2084, label: FUN_000ae360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00135410(uint *param_1);

uint FUN_000ae360(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint *puVar3;
  uint *puVar4;
  uint local_10 [4];
  
  uVar2 = param_1;
  puVar4 = (uint *)(in_EAX + 4);
  param_1 = FUN_000a2840(puVar4);
  if ((param_1 == *(uint *)(uVar2 + 0x7c)) || (*puVar4 < *(uint *)(param_1 + 0xc))) {
    local_10[0] = *(uint *)(uVar2 + 0x7c);
    puVar3 = local_10;
  }
  else {
    puVar3 = &param_1;
  }
  uVar1 = *puVar3;
  if (uVar1 != *(uint *)(uVar2 + 0x7c)) {
    *(undefined4 *)(uVar1 + 0x10) = *(undefined4 *)(uVar2 + 0xa8);
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  local_10[0] = *puVar4;
  local_10[1] = 0;
  puVar4 = (uint *)FUN_00135410(local_10);
  uVar1 = *puVar4;
  *(undefined4 *)(uVar1 + 0x10) = *(undefined4 *)(uVar2 + 0xa8);
  return uVar1 & 0xffffff00;
}
