/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0404102C34518163DB0E1375A3A8B96A42DFA35AD47B0D6118E7EAC45A6270D0
 * Entry: 0x001ed790, Ghidra index: 6936, label: FUN_001ed790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003968c4;
void FUN_001ed790(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  undefined **local_d0 [6];
  undefined4 local_b8;
  undefined4 local_b4 [44];
  
  if (*(int *)(unaff_EBX + 0x1c) != 0) {
    FUN_002e8c40();
    local_d0[0] = &PTR_FUN_003968c4;
    local_b8 = param_1;
    puVar2 = local_b4;
    for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_002e7f50(0xfffffffd,local_d0,1,1);
    FUN_002e8b80();
  }
  return;
}
