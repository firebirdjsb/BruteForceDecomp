/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C3A37F9F1CB7F06838561ADF318C8F82717FFA325D968CFD941CEB2ECE679B7
 * Entry: 0x00140900, Ghidra index: 4084, label: FUN_00140900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c2ec;
void FUN_00140900(void)

{
  undefined4 *in_ECX;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039c2ec;
  FUN_00140e80();
  FUN_00141ef0(local_4,*(undefined4 *)in_ECX[0xb],(undefined4 *)in_ECX[0xb]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0xb]);
}
