/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB256C5AD96D53505C821FE7630C4C334C463703EAC01043F57F79CCB763BB68
 * Entry: 0x002b3e00, Ghidra index: 9777, label: FUN_002b3e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e84c;
void FUN_002b3e00(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_002d5d00();
  *in_ECX = &PTR_FUN_0038e84c;
  if (in_ECX[4] != 0) {
    if (in_ECX[3] == 0) {
      *(undefined4 *)(in_ECX[4] + 0x18) = in_ECX[2];
    }
    else {
      *(undefined4 *)(in_ECX[3] + 8) = in_ECX[2];
    }
    if (in_ECX[2] != 0) {
      *(undefined4 *)(in_ECX[2] + 0xc) = in_ECX[3];
    }
  }
  in_ECX[5] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
