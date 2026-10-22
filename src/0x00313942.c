/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F09B56A06BC51EE4DD2178E8D8EF3F993357AD9348EF08CF018DD3F619CAE64A
 * Entry: 0x00313942, Ghidra index: 12024, label: IDirectSoundBuffer_SetPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetPosition
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CDirectSoundBuffer_SetPosition
            (-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3,param_4,param_5);
  return;
}
