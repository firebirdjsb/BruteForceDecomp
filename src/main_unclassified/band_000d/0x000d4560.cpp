/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B4E239B4EF0781CEF000B0FF803F7CEA86B74F44E32F517204C5380B8EEA703
 * Entry: 0x000d4560, Ghidra index: 2653, label: FUN_000d4560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efb8;
extern uint32_t PTR_FUN_0039efc8;
void FUN_000d4560(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039efc8;
  FUN_002b8de0();
  *in_ECX = &PTR_FUN_0039efb8;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
