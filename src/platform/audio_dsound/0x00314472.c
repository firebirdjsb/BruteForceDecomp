/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECDF094F18BC0594D7660E9321FD28D639E2A161CA9CBBAFAC717C6C72F646E3
 * Entry: 0x00314472, Ghidra index: 12058, label: FUN_00314472
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003869f8;
void FUN_00314472(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003869f8;
  FUN_00313e3c();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
