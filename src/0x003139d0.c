/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FFA2D36B64BE5172BEDD077383057C71A60ADB0139CDDD7A8CFDE6A1B750CE3
 * Entry: 0x003139d0, Ghidra index: 12027, label: IDirectSoundBuffer_SetPlayRegion
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetPlayRegion(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundBuffer_SetPlayRegion(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3);
  return;
}
