/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD180E88E7EBF6E576252F0B4140C94B65ECCFA5B115E0619FA2BAE161DD1106
 * Entry: 0x00280be0, Ghidra index: 9035, label: FUN_00280be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00391800;
void FUN_00280be0(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  in_ECX[4] = 0xbf800000;
  *in_ECX = PTR_LAB_00391800;
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
