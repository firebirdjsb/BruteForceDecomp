/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E20D1B2127E7DB88E43E03E02961FF9EB17FDACFEC21E101178862555912A026
 * Entry: 0x0008dcf0, Ghidra index: 1720, label: FUN_0008dcf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a2068;
void FUN_0008dcf0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a2068;
  if (in_ECX[0xb] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0xb]);
  }
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  return;
}
