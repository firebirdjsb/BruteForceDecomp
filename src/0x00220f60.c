/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21C3E7D1B82FEC57B76581E5546B6E0CD651F7C083AC4220BD43E93447494872
 * Entry: 0x00220f60, Ghidra index: 7564, label: FUN_00220f60
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
void FUN_00220f60(byte param_1)

{
  int in_ECX;
  
  FUN_00221470();
  *(undefined ***)(in_ECX + 0x1ec) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x1ec) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x1e8) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
