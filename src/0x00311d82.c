/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 833DB8F99EB4AF9D7DA9F1A455C30D8EBB4D110C08C81105419EEC303D933308
 * Entry: 0x00311d82, Ghidra index: 11922, label: CDirectSoundVoice_SetPitch
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__CDirectSoundVoice_SetPitch(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = param_2;
  CMcpxVoiceClient_SetPitch();
  return;
}
