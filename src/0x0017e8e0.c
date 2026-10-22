/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78E9497613F162F32EBB708587AB85B8C5B6C006430C151F0DB1A55EFA756763
 * Entry: 0x0017e8e0, Ghidra index: 5109, label: FUN_0017e8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399c40;
void FUN_0017e8e0(void)

{
  undefined4 *in_ECX;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_00399c40;
  if (in_ECX[0x36] != 0) {
    DSOUND__IDirectSound_Release(in_ECX[0x36]);
    in_ECX[0x36] = 0;
  }
  FUN_00180ae0(local_4,*(undefined4 *)in_ECX[0x65],(undefined4 *)in_ECX[0x65]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x65]);
}
