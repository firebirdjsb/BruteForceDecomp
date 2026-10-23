/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3C2348B466DB84A14C5D9D834972C1099B3B61D43AAE9031E9307B3EFCE1180
 * Entry: 0x00067be0, Ghidra index: 1138, label: thunk_FUN_00237ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
void thunk_FUN_00237ea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00067be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_003bc650)();
  return;
}
