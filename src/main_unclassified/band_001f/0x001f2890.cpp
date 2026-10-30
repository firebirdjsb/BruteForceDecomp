/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AAEF45243C160218DE2433C283556F22C69435B0B0D62290791F66B4957D0A5
 * Entry: 0x001f2890, Ghidra index: 7006, label: FUN_001f2890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396864;
void FUN_001f2890(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00396864;
  FUN_001e8c20();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
