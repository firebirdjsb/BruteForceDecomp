/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2FDD062688589804E9B0112E0EF06799184F2EE3A45AD231C3068AB2E75AEC8
 * Entry: 0x00286670, Ghidra index: 9082, label: FUN_00286670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003915e8;
void FUN_00286670(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003915e8;
  if (in_ECX[1] != 0) {
    FUN_00237e40();
    in_ECX[1] = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
