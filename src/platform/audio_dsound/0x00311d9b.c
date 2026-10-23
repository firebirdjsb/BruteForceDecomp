/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 466B771B6CE5CFB8E9724A7ADE635308F652213DDD110E9B53CC57D68295B2FC
 * Entry: 0x00311d9b, Ghidra index: 11923, label: CDirectSoundVoice_SetVolume
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CDirectSoundVoice_SetVolume(int param_1,int param_2)

{
  *(int *)(*(int *)(param_1 + 0x10) + 0x1c) = param_2 - *(int *)(*(int *)(param_1 + 0x10) + 0x20);
  CMcpxVoiceClient_SetVolume();
  return;
}
