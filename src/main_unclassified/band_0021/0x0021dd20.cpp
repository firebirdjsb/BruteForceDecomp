/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49C663B881B029E76151AEA6174EDE0305951E913E0D7292E1014DC28D6F4A7D
 * Entry: 0x0021dd20, Ghidra index: 7553, label: FUN_0021dd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394ab8;
extern uint32_t PTR_FUN_00394f00;
void FUN_0021dd20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00394ab8;
  if (in_ECX[0x34] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x34]);
  }
  if (in_ECX[0x3b] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x3b]);
  }
  if (in_ECX[0x3c] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x3c]);
  }
  if (in_ECX[0x3d] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x3d]);
  }
  *in_ECX = &PTR_FUN_00394f00;
  FUN_001553f0();
  return;
}
