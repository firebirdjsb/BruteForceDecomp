/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C799F8BBD4BDC08473C2C02A12A35487B62B83FF217B3FF87272895244ECB855
 * Entry: 0x00312c0b, Ghidra index: 11977, label: IDirectSoundStream_FlushEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundStream_FlushEx
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CDirectSoundStream_FlushEx(param_1,param_2,param_3,param_4);
  return;
}
