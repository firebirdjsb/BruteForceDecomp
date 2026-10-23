/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB91A45F42BD3B8F4FAB75CEF871179A82A8F2DFDA42E4A7240A394D0BD1E147
 * Entry: 0x001e7990, Ghidra index: 6820, label: FUN_001e7990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396cd4;
void FUN_001e7990(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00396cd4;
  FUN_001e7ef0();
  FUN_001e7ef0();
  FUN_001e7ef0();
  FUN_001e7ef0();
  if (in_ECX[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0xc]);
  }
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  if (in_ECX[9] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[9]);
  }
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  if (in_ECX[6] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[6]);
  }
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  if (in_ECX[3] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[3]);
  }
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  return;
}
