/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A03B6AF52D1BAC3C9EB6CBBB44CBEC27534BD2BA8D20498A9574EF1C9BD1B82
 * Entry: 0x001fc650, Ghidra index: 7162, label: FUN_001fc650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395db8;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fc650(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00395db8;
  in_ECX[2] = &PTR_FUN_0039c24c;
  in_ECX[3] = &PTR_FUN_0039e7e8;
  if (in_ECX[0x14] != 0) {
    FUN_0008f6e0();
  }
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
