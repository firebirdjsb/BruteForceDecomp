/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BB25F1EB325E66CC19EC6A18EE3882E30A1A950F55C18CDFE15CD3B99A6172A
 * Entry: 0x002bd2a0, Ghidra index: 9942, label: FUN_002bd2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002bd2a0(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)FUN_002c4c10(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x90));
  if (puVar1 == (undefined2 *)0x0) {
    _DAT_00000000 = 0;
  }
  FUN_002bd570();
  if (puVar1[1] == 0) {
    FUN_002bd570();
    if (puVar1[4] != 0) {
      if (*(int *)(puVar1 + 2) != 0) {
        uVar2 = (*(code *)PTR_FUN_003bc654)(*(int *)(puVar1 + 2));
        return uVar2;
      }
      *puVar1 = 0;
      puVar1[4] = 0;
    }
    puVar1[1] = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar1);
  }
  return 0;
}
