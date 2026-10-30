/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 633CB1457E0A4AC8F63F13BAEA34637B17768B360CAA05BF5225CF42688A13A7
 * Entry: 0x000ca3d0, Ghidra index: 2505, label: FUN_000ca3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f18c;
extern uint32_t PTR_FUN_0039f89c;
void FUN_000ca3d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039f18c;
  if (in_ECX[0xd] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_0039f89c;
  FUN_000b2530();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
