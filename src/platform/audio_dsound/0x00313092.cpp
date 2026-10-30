/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CF9FF164DFDD85BB4FCC888662A9E1191D1C4043CDF4CF076F9349022ABA783
 * Entry: 0x00313092, Ghidra index: 11991, label: CDirectSoundVoice_SetMinDistance
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CDirectSoundVoice_SetMinDistance(int param_1,undefined4 param_2,byte param_3)

{
  uint *puVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x34) = param_2;
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *puVar1 = *puVar1 | 4;
  if ((param_3 & 1) == 0) {
    CDirectSoundVoice_CommitDeferredSettings(param_1);
  }
  return 0;
}
