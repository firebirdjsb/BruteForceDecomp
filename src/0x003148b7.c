/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C561FBF6595546ACE17C981397D6B692899594FF27025E596BB962DCEB89674A
 * Entry: 0x003148b7, Ghidra index: 12070, label: FUN_003148b7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032fe8c;
void FUN_003148b7(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = MmQueryAllocationSize(param_1);
  *DAT_0032fe8c = *DAT_0032fe8c - iVar1;
                    /* WARNING: Could not recover jumptable at 0x003148c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MmFreeContiguousMemory();
  return;
}
