/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 294834B54A619FECA8C92DEFC6F1FEE5F351FBAB0CF3F387F9FDAAC1FE6CD6C3
 * Entry: 0x002ea018, Ghidra index: 10570, label: thunk_FUN_00237ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void thunk_FUN_00237ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00067bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_003bc654)();
  return;
}
