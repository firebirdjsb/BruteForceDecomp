/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4967C2396E174C00BED476C73F33572CA4550DD0F114F5DDDD1AFB774B56CBB
 * Entry: 0x00311e0a, Ghidra index: 11927, label: CDirectSoundVoice_SetMixBinVolumes
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CDirectSoundVoice_SetMixBinVolumes(undefined4 param_1,undefined4 param_2)

{
  CDirectSoundVoiceSettings_SetMixBinVolumes(param_2);
  CMcpxVoiceClient_SetVolume();
  return;
}
