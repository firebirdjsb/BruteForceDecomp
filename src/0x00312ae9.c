/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 561C89B33695E8F3B9BBC4F058B45A7E32804337F0318A152ABD5FA8775CE5E1
 * Entry: 0x00312ae9, Ghidra index: 11963, label: IDirectSoundBuffer_Play
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_Play
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CDirectSoundBuffer_Play(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3,param_4);
  return;
}
