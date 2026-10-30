/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE534BDE84CB763B9C2CD7EC478EFDED1A2B30EEB952ED88CD0940ABC8B47F03
 * Entry: 0x002c7880, Ghidra index: 10104, label: FUN_002c7880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e694;
extern uint32_t PTR_FUN_003bc654;
void FUN_002c7880(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0038e694;
  if (in_ECX[1] != 0) {
    (*(code *)PTR_FUN_003bc654)(in_ECX[1]);
    return;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
