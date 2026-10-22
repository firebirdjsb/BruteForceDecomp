/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD25226764EE8EE710BAE076F396AA13207F3D948CBD36CD609863650A3ED2A0
 * Entry: 0x0014e200, Ghidra index: 4385, label: FUN_0014e200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern uint32_t PTR_FUN_0039b118;
extern uint32_t PTR_LAB_0039af90;
void FUN_0014e200(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039b118;
  piVar1 = (int *)in_ECX[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[10] = 0;
  }
  in_ECX[0x1c] = DAT_0046d064;
  piVar1 = (int *)in_ECX[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[10] = 0;
  }
  *in_ECX = &PTR_LAB_0039af90;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
