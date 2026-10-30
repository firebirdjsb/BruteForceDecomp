/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FAADB2F940EC7FE1B9B39470D909F5653F83EB2F1F57B4A0C629F9546D9007C
 * Entry: 0x0021da10, Ghidra index: 7548, label: FUN_0021da10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394a98;
extern uint32_t PTR_LAB_0039af90;
void FUN_0021da10(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00394a98;
  piVar1 = (int *)in_ECX[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[7] = 0;
  }
  piVar1 = (int *)in_ECX[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[7] = 0;
  }
  *in_ECX = &PTR_LAB_0039af90;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
