/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DCB692430FFB74A4D83D822F778A3B42911C33011DE2BDCA2E4F1BF7423C2C2
 * Entry: 0x00277500, Ghidra index: 8910, label: FUN_00277500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392540;
extern uint32_t PTR_LAB_00392618;
void FUN_00277500(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0x11];
  *in_ECX = PTR_FUN_00392540;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *in_ECX = &PTR_LAB_00392618;
  in_ECX[1] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
