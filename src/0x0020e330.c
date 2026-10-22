/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E9B63C3917F3EE5BB88A50EC66475FD0A88332D9D8F9391E7F03DB8610D6127
 * Entry: 0x0020e330, Ghidra index: 7405, label: FUN_0020e330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039af90;
void FUN_0020e330(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[9] = 0;
  }
  *in_ECX = &PTR_LAB_0039af90;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
