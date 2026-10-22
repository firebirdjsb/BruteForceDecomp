/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12D2A20534C1C183D45C19C7A05766E0FF7E7E3AD3A32D0235EFB981A9EFE8D1
 * Entry: 0x0017c1e0, Ghidra index: 5042, label: FUN_0017c1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0017c1e0(void)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = FUN_0017beb0(in_EAX);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0017c205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_00469940 + 100))();
    return;
  }
  return;
}
