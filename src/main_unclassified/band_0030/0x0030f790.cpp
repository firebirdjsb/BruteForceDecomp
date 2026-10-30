/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D12D411069B37B049A3C582BE27CB22EF0D02AFA07238D9A639868E3AAE1311C
 * Entry: 0x0030f790, Ghidra index: 11498, label: FUN_0030f790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046d31c;
void FUN_0030f790(void)

{
  undefined1 local_4 [4];
  
  FUN_000fb7a0(local_4,*DAT_0046d31c,DAT_0046d31c);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(DAT_0046d31c);
}
