/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6BAF13C3CE7129036FAF860D7454952862F2BC964F0C083097BAA84986B22C7
 * Entry: 0x000a0990, Ghidra index: 1900, label: FUN_000a0990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a0990(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int in_ECX;
  int iVar6;
  uint local_8 [2];
  
  while( true ) {
    iVar6 = in_ECX * 2 + 2;
    if (param_1 <= iVar6) break;
    iVar4 = *(int *)(in_EAX + iVar6 * 0xc);
    iVar5 = *(int *)(in_EAX + -0xc + iVar6 * 0xc);
    iVar1 = in_EAX + iVar6 * 0xc;
    local_8[0] = (uint)(iVar5 < iVar4);
    local_8[1] = (uint)(*(uint *)(iVar1 + -4) < *(uint *)(iVar1 + 8));
    if (local_8[iVar4 == iVar5] != 0) {
      iVar6 = in_ECX * 2 + 1;
    }
    puVar2 = (undefined4 *)(in_EAX + iVar6 * 0xc);
    puVar3 = (undefined4 *)(in_EAX + in_ECX * 0xc);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    in_ECX = iVar6;
  }
  if (iVar6 == param_1) {
    puVar3 = (undefined4 *)(in_EAX + -0xc + param_1 * 0xc);
    puVar2 = (undefined4 *)(in_EAX + in_ECX * 0xc);
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
  }
  FUN_000a0a70();
  return;
}
