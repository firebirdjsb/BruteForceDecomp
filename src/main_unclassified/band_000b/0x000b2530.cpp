/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B61F2B488F014DEB95F606617473A80F4250A6DB8AC3838FD77D4599ADC8A107
 * Entry: 0x000b2530, Ghidra index: 2144, label: FUN_000b2530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b26b0(void);

extern uint32_t PTR_FUN_0039ffac;
void FUN_000b2530(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039ffac;
  FUN_000b26b0();
  puVar1 = (undefined4 *)in_ECX[6];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[6]);
}
