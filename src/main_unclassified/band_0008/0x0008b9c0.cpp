/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4CBBE863AFD54E6B23DFE919FBD8AFEA522682D3994A6B0BBBAB9B531B90563
 * Entry: 0x0008b9c0, Ghidra index: 1685, label: FUN_0008b9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0008b9c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0008b9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))();
  return;
}
