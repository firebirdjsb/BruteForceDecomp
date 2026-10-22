/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F174C02FE389C74970C34BE429C27E0BDFD63D9C4CA1E597224684B53AFFEBF4
 * Entry: 0x00149fe0, Ghidra index: 4283, label: FUN_00149fe0
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
void FUN_00149fe0(byte param_1)

{
  int in_ECX;
  
  FUN_0014a020();
  *(undefined ***)(in_ECX + 0x1d8) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x1d8) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x1d4) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
