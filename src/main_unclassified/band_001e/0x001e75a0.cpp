/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B6B0C9D43D380EA16E23F905AA270660691464829054C415213A42E8B657875
 * Entry: 0x001e75a0, Ghidra index: 6808, label: FUN_001e75a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
void FUN_001e75a0(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)(in_EAX + 0x250);
  iVar3 = 0x19;
  do {
    puVar4 = (undefined4 *)(*piVar2 + 0x30);
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    (**(code **)(*DAT_00469b58 + 0x14))();
    FUN_001e8cd0(param_1);
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
