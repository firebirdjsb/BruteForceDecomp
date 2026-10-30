/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB25DE8628F44A5DF7F2BC4E67B26BC2F9ED5EE0F013157B274EAABFBE8361AA
 * Entry: 0x0021ccc0, Ghidra index: 7532, label: FUN_0021ccc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IFxEmitter_00402ae0[];
undefined4 FUN_0021ccc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *local_4;
  
  piVar2 = *(int **)(param_1 + 4);
  local_4 = (int *)0x0;
  iVar1 = (**(code **)*piVar2)(piVar2,s_23_23_IFxEmitter_00402ae0,&local_4);
  if (-1 < iVar1) {
    *local_4 = *local_4 + 1;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 0;
}
