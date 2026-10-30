/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F966D369AC06A610579939D6D1AE9F78D3F72CC3B52020BC78BB89A9AD024492
 * Entry: 0x00312ba1, Ghidra index: 11969, label: IDirectSoundBuffer_SetCurrentPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetCurrentPosition(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetCurrentPosition(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
