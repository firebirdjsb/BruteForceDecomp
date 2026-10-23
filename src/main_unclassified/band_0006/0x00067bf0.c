/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 964E6CBFFE5D3753558EC7D2E38D46DFE066CF0156FB09CC0FAD3B5FF329ACE2
 * Entry: 0x00067bf0, Ghidra index: 1139, label: thunk_FUN_00237ec0
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
