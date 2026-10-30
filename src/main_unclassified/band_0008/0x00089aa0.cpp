/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A283E5A4041AA005F6CFB2DDE9C485A5D0094DCEBA5B44E8349D86184B61238
 * Entry: 0x00089aa0, Ghidra index: 1645, label: FUN_00089aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a21bc;
void FUN_00089aa0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[7] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_003a21bc;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
