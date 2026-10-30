/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1E61047E0DB98658C3FA09B88AD8C33DDA485DFC6DE8062E88971C9DAFF3E7B
 * Entry: 0x0022d530, Ghidra index: 7705, label: FUN_0022d530
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
void FUN_0022d530(byte param_1)

{
  int in_ECX;
  
  FUN_0022d570();
  *(undefined ***)(in_ECX + 0x380) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x380) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x37c) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
