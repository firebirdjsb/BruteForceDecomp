/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D21F1A9D9F903FBB818A75A8014C5FEEE666F94EA903E4DED16CB3BA5E8F3967
 * Entry: 0x001fc720, Ghidra index: 7165, label: FUN_001fc720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003959e8;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fc720(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003959e8;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  if (in_ECX[0x11] != 0) {
    FUN_0008f6e0();
  }
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
