/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D451D24B7B41F945BCA8329E912FF57BD349F7CE467362AB4AC13E5128B581C
 * Entry: 0x00067cc0, Ghidra index: 1142, label: thunk_FUN_00237ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc658;
void thunk_FUN_00237ee0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00067cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_003bc658)();
  return;
}
