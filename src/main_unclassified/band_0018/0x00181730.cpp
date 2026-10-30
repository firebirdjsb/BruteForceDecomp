/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6480DC4260313DD7A0F1868ED6384ADDBF512B87B8D9774E9E0B5956EADA2470
 * Entry: 0x00181730, Ghidra index: 5161, label: FUN_00181730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399bf0;
extern uint32_t PTR_LAB_00399ba0;
void FUN_00181730(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00399bf0;
  if (in_ECX[0x1a] != 0) {
    DSOUND__IDirectSoundBuffer_Release(in_ECX[0x1a]);
  }
  *in_ECX = &PTR_LAB_00399ba0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
