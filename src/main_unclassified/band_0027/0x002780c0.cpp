/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 410B905686001A5B52E58127E014F8F3273D4BF06C31472569916A7FFFA76E01
 * Entry: 0x002780c0, Ghidra index: 8917, label: FUN_002780c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00391de0;
void FUN_002780c0(void)

{
  undefined4 *in_ECX;
  int local_4;
  
  *in_ECX = &PTR_FUN_00391de0;
  local_4 = *(int *)in_ECX[5];
  if ((int *)local_4 != (int *)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(local_4 + 0x10));
  }
  FUN_0027a6f0(&local_4,*(undefined4 *)in_ECX[5],(undefined4 *)in_ECX[5]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[5]);
}
