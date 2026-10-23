/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91C73F22197C69631A8B9DE41ECD65007CAF93BC39ABC69E15CD69991034E8D6
 * Entry: 0x00312a1a, Ghidra index: 11956, label: IDirectSound_DownloadEffectsImage
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_DownloadEffectsImage
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  CDirectSound_DownloadEffectsImage
            (-(uint)(param_1 != 0) & param_1 - 8U,param_2,param_3,param_4,param_5);
  return;
}
