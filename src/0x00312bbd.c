/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDCDE0D92663C81463D754814BDE3A70872F719AB9A79C61D01C06FBB4408AAE
 * Entry: 0x00312bbd, Ghidra index: 11970, label: IDirectSoundBuffer_Lock
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_Lock
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CDirectSoundBuffer_Lock
            (-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3,param_4,param_5,param_6,param_7
             ,param_8);
  return;
}
