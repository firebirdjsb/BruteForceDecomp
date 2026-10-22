/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11CA6347EF7F17CDB70B91C48A2ACCBF6A3441254709FB1B6ADED44B9831023C
 * Entry: 0x003138fe, Ghidra index: 12022, label: IDirectSoundBuffer_SetMinDistance
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetMinDistance(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundBuffer_SetMinDistance(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3);
  return;
}
