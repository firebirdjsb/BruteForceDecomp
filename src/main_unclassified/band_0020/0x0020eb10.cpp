/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDF859F6AA7914ECC6A0AAA8B5DC6B604D0CF05BDF02175CF48F5C40427F7CC9
 * Entry: 0x0020eb10, Ghidra index: 7407, label: FUN_0020eb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394f00;
extern uint32_t PTR_FUN_00395020;
void FUN_0020eb10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00395020;
  if (in_ECX[0x20] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x20]);
  }
  if (in_ECX[0x21] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x21]);
  }
  if (in_ECX[0x22] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x22]);
  }
  *in_ECX = &PTR_FUN_00394f00;
  FUN_001553f0();
  return;
}
