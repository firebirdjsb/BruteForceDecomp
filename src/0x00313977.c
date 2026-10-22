/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37DC64DC37FA8F22A2CA3F566C5F5F4E7FA58FD63D27A21B568BC529B55F8B50
 * Entry: 0x00313977, Ghidra index: 12025, label: IDirectSoundBuffer_SetVelocity
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetVelocity
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CDirectSoundBuffer_SetVelocity
            (-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3,param_4,param_5);
  return;
}
