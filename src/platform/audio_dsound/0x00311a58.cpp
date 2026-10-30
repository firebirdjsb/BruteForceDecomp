/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3270BE9D4962CDCDB62EF4C3242B41B960C1F0CB7621E035393E8B7607DE92C
 * Entry: 0x00311a58, Ghidra index: 11910, label: IDirectSoundBuffer_Release
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_Release(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(-(uint)(param_1 != 0) & param_1 - 0x1cU);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
