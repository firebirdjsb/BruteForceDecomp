/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5CB6230489D4959016ACF9BCBDAF7CC530520D98DD2616A716BB32A88985AC5
 * Entry: 0x003130c5, Ghidra index: 11992, label: CDirectSoundVoice_SetMode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CDirectSoundVoice_SetMode(int param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x3c) = param_2;
  if ((param_3 & 1) == 0) {
    CDirectSoundVoice_CommitDeferredSettings(param_1);
  }
  return 0;
}
