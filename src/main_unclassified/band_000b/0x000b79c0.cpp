/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39743494AFB350BC9821818DAF73FE0324FDD2FF5A91B655D7807DCAE9D3D94E
 * Entry: 0x000b79c0, Ghidra index: 2209, label: FUN_000b79c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b6e70(void);

extern uint32_t PTR_FUN_0039fd2c;
void FUN_000b79c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039fd2c;
  FUN_000b6e70();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
