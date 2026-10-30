/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B67E4CD472FE1797026E1256F51F7705BA9C8776588A6CABDBEB6AB4F204A518
 * Entry: 0x00229810, Ghidra index: 7671, label: FUN_00229810
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
void FUN_00229810(byte param_1)

{
  int in_ECX;
  
  FUN_00229850();
  *(undefined ***)(in_ECX + 0x3b4) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x3b4) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x3b0) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
