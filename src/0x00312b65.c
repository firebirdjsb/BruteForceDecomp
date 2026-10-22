/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4942EA13099402FD0D67DF3376E053C31F7B529B4AC94B9626BB03AD91EF668B
 * Entry: 0x00312b65, Ghidra index: 11967, label: IDirectSoundBuffer_GetStatus
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_GetStatus(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_GetStatus(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
