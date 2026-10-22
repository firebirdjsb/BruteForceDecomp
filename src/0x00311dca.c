/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD16AAC3E46E00BA80F2E2DA3B2AAE4A92590DF5D0E0A467D9F172A6667D922F
 * Entry: 0x00311dca, Ghidra index: 11925, label: CDirectSoundVoice_SetHeadroom
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CDirectSoundVoice_SetHeadroom(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + (*(int *)(iVar1 + 0x20) - param_2);
  *(int *)(iVar1 + 0x20) = param_2;
  CMcpxVoiceClient_SetVolume();
  return;
}
