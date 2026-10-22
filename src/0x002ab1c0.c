/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAB70806BD914354E1826A20B51CE31DD53F22605AE2A6F596B50A187A8774A6
 * Entry: 0x002ab1c0, Ghidra index: 9662, label: FUN_002ab1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038f660;
void FUN_002ab1c0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0038f660;
  piVar1 = (int *)in_ECX[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[6] = 0;
  }
  if (in_ECX[2] != 0) {
    FUN_002ad110(in_ECX + 1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[2]);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}
