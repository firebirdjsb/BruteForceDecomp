/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE7C903EEB267074A55247F7D60E8E6B7F61FA1122C0AEA760C0CB6B618FB245
 * Entry: 0x00311db7, Ghidra index: 11924, label: CDirectSoundVoice_SetEG
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CDirectSoundVoice_SetEG(undefined4 param_1,undefined4 param_2)

{
  CMcpxVoiceClient_SetEG(param_2);
  return;
}
