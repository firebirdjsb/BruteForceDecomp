/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6372AE1C11D6814AC5B63129D485E84B4A58C34BE1136A8240511D143FFB45DF
 * Entry: 0x00311e27, Ghidra index: 11928, label: CDirectSoundVoice_CommitDeferredSettings
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CDirectSoundVoice_CommitDeferredSettings(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *puVar1 = *puVar1 | *(uint *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0xa4);
  uVar2 = CMcpxVoiceClient_Commit3dSettings();
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *puVar1 = *puVar1 & ~uVar2;
  return 0;
}
