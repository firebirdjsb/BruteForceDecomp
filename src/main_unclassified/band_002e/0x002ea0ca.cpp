/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C7DF2613DFE779F93B760398826EE2C8936EE7C54875F696A4BCA21CB29E902
 * Entry: 0x002ea0ca, Ghidra index: 10576, label: FUN_002ea0ca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386b04;
void FUN_002ea0ca(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00386b04;
  if (in_ECX[1] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[1]);
  }
  return;
}
