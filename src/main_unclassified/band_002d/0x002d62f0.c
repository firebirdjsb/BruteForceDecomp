/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EF676EE82D3AE3D81BAD457B0BBB6D32BE308656A394A870DE5345C18DDE6B3
 * Entry: 0x002d62f0, Ghidra index: 10240, label: FUN_002d62f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d62f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 local_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x84);
  local_10[3] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[0] = 0;
  puVar4 = (uint *)(*(uint *)(param_1 + iVar1 * -0x1c + 0x48) & 0xfffffff0);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  local_10[3 - iVar1] = puVar4 + ((*puVar4 & 0xfff) + 1) * -4;
  puVar4 = (uint *)(*(uint *)(iVar1 * 0x1c + 0x2c + param_1) & 0xfffffff0);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  local_10[iVar1] = puVar4 + ((*puVar4 & 0xfff) + 1) * -4;
  FUN_002bf610(uVar3,uVar2,param_2,param_1 + 0x88,local_10[2],local_10[3],local_10[0],local_10[1],
               param_1 + 0x80);
  return;
}
