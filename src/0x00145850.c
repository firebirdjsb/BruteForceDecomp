/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8BB1F0E9118E868AA3CE17D6BF0E3E9228B5D5E3695A222E6BC50DA7E4615A5
 * Entry: 0x00145850, Ghidra index: 4194, label: FUN_00145850
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
void FUN_00145850(byte param_1)

{
  int in_ECX;
  
  FUN_00145890();
  *(undefined ***)(in_ECX + 0x1c8) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x1c8) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x1c4) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
