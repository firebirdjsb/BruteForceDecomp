/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98BC4D89C272CFA7595100C55BEB9194A0413C6BC4B51E2B91FA6BDD2DBD1F00
 * Entry: 0x00314850, Ghidra index: 12068, label: FUN_00314850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0032fe90;
void FUN_00314850(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = ExQueryPoolBlockSize(param_1);
  *DAT_0032fe90 = *DAT_0032fe90 - iVar1;
                    /* WARNING: Could not recover jumptable at 0x00314862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExFreePool();
  return;
}
