/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 409FAB5DBDCC1A80DE649740E049C2BC2D7BE2DBFCB4ED3663C9B79F03E593FD
 * Entry: 0x00223610, Ghidra index: 7603, label: FUN_00223610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394880;
void FUN_00223610(byte param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[7] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_00394880;
  if (in_ECX[2] != 0) {
    FUN_0008f6e0();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
