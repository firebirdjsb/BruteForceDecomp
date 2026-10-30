/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 216708267F4EE7233A6D50EEA69962385469708B28488EFFBA5A059B40C0BDA5
 * Entry: 0x002cce50, Ghidra index: 10157, label: FUN_002cce50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039df74;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e588;
void FUN_002cce50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_0038e588;
  if (in_ECX[1] != 0) {
    (*(code *)PTR_FUN_003bc654)(*(undefined4 *)(in_ECX[1] + -4));
    return;
  }
  *in_ECX = &PTR_FUN_0039df74;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
