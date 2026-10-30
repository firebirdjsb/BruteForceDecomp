/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03B0FDFF70199320A2DB605A34283EDFB2714EEC2213F0D8374BEAF9EAA3F345
 * Entry: 0x0031454a, Ghidra index: 12061, label: IDirectSound_CreateSoundBuffer
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_CreateSoundBuffer
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CDirectSound_CreateSoundBuffer(-(uint)(param_1 != 0) & param_1 - 8U,param_2,param_3,param_4);
  return;
}
