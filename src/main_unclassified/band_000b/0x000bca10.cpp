/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83C46AA87A49DA899A0D76892FAFCBDB6F4EC39B23C66746505B3BA87A73051C
 * Entry: 0x000bca10, Ghidra index: 2295, label: FUN_000bca10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2530(void);

extern uint32_t PTR_FUN_0039f89c;
void FUN_000bca10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039f89c;
  FUN_000b2530();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
