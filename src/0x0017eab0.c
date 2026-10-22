/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F019F7FF96B2E3571655CA66781DA28D9A52E785CFA82699DF7F7F0047F88A4C
 * Entry: 0x0017eab0, Ghidra index: 5110, label: FUN_0017eab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017eab0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xd8) != 0) {
    DSOUND__DirectSoundDoWork();
    FUN_00182610(param_1);
    FUN_001828f0(param_1);
    DSOUND__IDirectSound_CommitDeferredSettings();
    return;
  }
  return;
}
