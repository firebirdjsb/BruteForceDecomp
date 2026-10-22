/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23F75CECE6DA0D9319B71B2D89A61CC1CCF18853614E18103D0089AD7B6B27D3
 * Entry: 0x003138da, Ghidra index: 12021, label: IDirectSoundBuffer_SetMaxDistance
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetMaxDistance(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundBuffer_SetMaxDistance(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3);
  return;
}
