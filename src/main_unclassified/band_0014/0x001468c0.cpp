/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D369FEF761F84DA60259F03C8A71D702270B66768C7FA955ECD0FF16EA4365DE
 * Entry: 0x001468c0, Ghidra index: 4226, label: FUN_001468c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039bf18;
void FUN_001468c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_0039bf18;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
    in_ECX[2] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
