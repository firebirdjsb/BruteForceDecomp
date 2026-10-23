/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35BF3C2592D15D9481792C741D126398C2C386E44E1906FDBDE45BDBCB6B4929
 * Entry: 0x00237d00, Ghidra index: 7855, label: FUN_00237d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443080;
extern uint32_t DAT_00469904;
extern uint32_t DAT_0046cfa0;
undefined4 FUN_00237d00(void)

{
  undefined4 uVar1;
  
  RtlEnterCriticalSection(&DAT_0046cfa0);
  DAT_00469904 = DAT_00469904 + 1;
  uVar1 = FUN_00258f70(&DAT_00443080);
  RtlLeaveCriticalSection(&DAT_0046cfa0);
  return uVar1;
}
