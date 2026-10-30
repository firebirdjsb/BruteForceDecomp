/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0A972834D77C3429C80815407C2EF88C974B154B35EE66319F2BB502F955DD4
 * Entry: 0x00281510, Ghidra index: 9042, label: FUN_00281510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391758;
void FUN_00281510(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_LAB_00391758;
  piVar1 = (int *)in_ECX[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[3] = 0;
  }
  piVar1 = (int *)in_ECX[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[2] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
