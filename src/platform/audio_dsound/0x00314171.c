/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC074F2973E2D6DAB5F8D9BF350F4FB652E60AAF5869BE265AC7B19AA04CE554
 * Entry: 0x00314171, Ghidra index: 12048, label: IDirectSound_SetDistanceFactor
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_SetDistanceFactor(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSound_SetDistanceFactor(-(uint)(param_1 != 0) & param_1 - 8U,param_2,param_3);
  return;
}
