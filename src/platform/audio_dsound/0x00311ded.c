/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04666A06817392D49098A29A08C7E9D2BF2B6FCD06D7EF93520A0FE257E6D5FC
 * Entry: 0x00311ded, Ghidra index: 11926, label: CDirectSoundVoice_SetMixBins
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CDirectSoundVoice_SetMixBins(undefined4 param_1,undefined4 param_2)

{
  FUN_00311c80(param_2);
  CMcpxVoiceClient_SetMixBins();
  return;
}
