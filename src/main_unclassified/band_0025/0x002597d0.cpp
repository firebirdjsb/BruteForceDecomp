/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 775567025F29DD5C7145BFBAD4477FC7FB62A9777ED08CC6773A6257E828290A
 * Entry: 0x002597d0, Ghidra index: 8505, label: FUN_002597d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393570;
void FUN_002597d0(void)

{
  undefined4 *in_ECX;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_00393570;
  FUN_0025a8b0(local_4,*(undefined4 *)in_ECX[5],(undefined4 *)in_ECX[5]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[5]);
}
