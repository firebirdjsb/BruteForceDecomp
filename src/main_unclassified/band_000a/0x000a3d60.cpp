/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E523E19444D8479B38666CB0C0B62D2BACAA114605BED5FA894CD6107901F5A4
 * Entry: 0x000a3d60, Ghidra index: 1953, label: FUN_000a3d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a0840;
extern uint32_t PTR_LAB_003a084c;
void FUN_000a3d60(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003a0840;
  if (in_ECX[1] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[1]);
  }
  if (in_ECX[0x31] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x31]);
  }
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  piVar1 = (int *)in_ECX[0x11];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x11] = 0;
  }
  piVar1 = (int *)in_ECX[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[6] = 0;
  }
  piVar1 = (int *)in_ECX[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[5] = 0;
  }
  piVar1 = (int *)in_ECX[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[4] = 0;
  }
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
  *in_ECX = &PTR_LAB_003a084c;
  return;
}
