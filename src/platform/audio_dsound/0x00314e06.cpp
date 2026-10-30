/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE0C0E6B1ACE2E1E4D6D6479B08147649A4DAEC463E53D373BAAB83BBA72EA79
 * Entry: 0x00314e06, Ghidra index: 12094, label: FUN_00314e06
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x00314e0f CALL [0x0032f79c] confirms a callable slot; code signature/host width ABI_UNVERIFIED. */
extern code *DAT_0032f79c;
void FUN_00314e06(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  (*DAT_0032f79c)(param_1);
  return;
}
