/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F642B885BB94CD461F4A5F5A04073BFCB55BD54B3E8F2CC3C38ABCDC358FAF74
 * Entry: 0x00111e00, Ghidra index: 3555, label: FUN_00111e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039efe4;
void FUN_00111e00(byte param_1)

{
  int in_ECX;
  
  FUN_00111e40();
  *(undefined ***)(in_ECX + 0x85c) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x85c) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x858) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
