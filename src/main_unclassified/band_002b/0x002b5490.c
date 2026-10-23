/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBE03A62D5EFAF252A2C6B69562C50FD6AE86856F3EA4BE3A0F7FBC6EE91E1EA
 * Entry: 0x002b5490, Ghidra index: 9792, label: FUN_002b5490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002b5490(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x154) = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x28) != 0) {
    (*(code *)PTR_FUN_003bc654)(*(int *)(iVar1 + 0x28));
    return;
  }
  if (*(int *)(iVar1 + 0x28) != 0) {
    (*(code *)PTR_FUN_003bc654)(*(int *)(iVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
