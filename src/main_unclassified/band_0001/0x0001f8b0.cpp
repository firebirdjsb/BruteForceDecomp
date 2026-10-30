/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C127D8FDDFEE8C5F3269F6B6A0CC2C7CD7550ABE609F6E47A428C61237DEDFD
 * Entry: 0x0001f8b0, Ghidra index: 150, label: FUN_0001f8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a401c;
void FUN_0001f8b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003a401c;
  if (0xf < (uint)in_ECX[9]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[4]);
  }
  in_ECX[9] = 0xf;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  __1exception__UAE_XZ();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
