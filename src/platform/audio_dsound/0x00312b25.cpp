/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B5A498D3069CB984B5BB4DEBDD1E467B741113653D217A587C23CDCE0249E83
 * Entry: 0x00312b25, Ghidra index: 11965, label: IDirectSoundBuffer_StopEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_StopEx
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CDirectSoundBuffer_StopEx(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3,param_4);
  return;
}
