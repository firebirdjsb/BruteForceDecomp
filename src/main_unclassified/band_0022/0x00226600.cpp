/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A70B997E0CC9FF1F6EAE479D57836BCF52E36C0B5F8399DC44B61FB7324F89E6
 * Entry: 0x00226600, Ghidra index: 7647, label: FUN_00226600
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
void FUN_00226600(byte param_1)

{
  int in_ECX;
  
  FUN_00226640();
  *(undefined ***)(in_ECX + 0x240) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x240) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x23c) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
