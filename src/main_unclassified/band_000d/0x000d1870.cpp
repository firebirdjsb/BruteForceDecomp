/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66AA0F71C7E00A907B1CC30F80707DEC0EB443F7E20FAE51308D2F05CDCF31DA
 * Entry: 0x000d1870, Ghidra index: 2601, label: FUN_000d1870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f000;
void FUN_000d1870(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039f000;
  FUN_000e3cf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
