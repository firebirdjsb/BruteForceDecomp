/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 192379A06DD2B01FB0B3018EF5BD460F0246190C77835B3180A3E1E31A3AACD3
 * Entry: 0x00109490, Ghidra index: 3403, label: FUN_00109490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e188;
extern uint32_t PTR_LAB_0039e5c8;
void FUN_00109490(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039e188;
  if (in_ECX[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x1a]);
  }
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  *in_ECX = &PTR_LAB_0039e5c8;
  FUN_000ef7f0();
  if (in_ECX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x15]);
  }
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}
