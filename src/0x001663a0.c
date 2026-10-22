/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F9503576D8BFBD853093F34ED9198C3AFB5F782ACD575BD0FD6A06A058000E0
 * Entry: 0x001663a0, Ghidra index: 4713, label: FUN_001663a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001663a0(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  puVar3 = (undefined4 *)(param_1 + 8);
  puVar2 = (undefined4 *)(in_EAX + 4);
  local_4 = 0x1b;
  do {
    puVar3[-2] = puVar2[-1];
    *(undefined4 *)((int)puVar2 + (param_1 - in_EAX)) = *puVar2;
    iVar4 = 4;
    puVar1 = puVar3;
    do {
      *puVar1 = *(undefined4 *)((int)puVar2 + (4 - (int)puVar3) + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2 = puVar2 + 6;
    puVar3 = puVar3 + 6;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return param_1;
}
