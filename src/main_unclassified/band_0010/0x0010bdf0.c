/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18394190AE4289568658CB2298242D2C48A05E33EF8565002C9CBAFE510B6FCA
 * Entry: 0x0010bdf0, Ghidra index: 3457, label: FUN_0010bdf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e0a0;
void FUN_0010bdf0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039e0a0;
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_0010c140(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[2]);
}
