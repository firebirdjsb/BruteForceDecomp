/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7655B5D7E03E7DB9B101AFD62E5D259E8CBA5DFA9209914EEB520906F2DE2498
 * Entry: 0x002c0dd0, Ghidra index: 10018, label: FUN_002c0dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0dd0(float param_1,float param_2)

{
  int in_EAX;
  undefined4 uVar1;
  
  *(uint *)(in_EAX + 0x14) = *(uint *)(in_EAX + 0x14) & 0xffd7ffff | 0x140000;
  uVar1 = FUN_002d5d50(in_EAX + 0x18,*(float *)(*(int *)(in_EAX + 0x28) + 0x58) + param_1);
  *(undefined4 *)(in_EAX + 0x1c) = uVar1;
  uVar1 = FUN_002d5d50(in_EAX + 0x34,*(float *)(*(int *)(in_EAX + 0x44) + 0x58) + param_2);
  *(undefined4 *)(in_EAX + 0x38) = uVar1;
  return;
}
