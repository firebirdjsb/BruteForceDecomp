/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 890CE8EE5F5E390CAC470B7B30EF1FB0C69B103347E08B838D4A48B06994F7E3
 * Entry: 0x003139ac, Ghidra index: 12026, label: IDirectSoundBuffer_SetRolloffCurve
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetRolloffCurve
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CDirectSoundBuffer_SetRolloffCurve
            (-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3,param_4);
  return;
}
