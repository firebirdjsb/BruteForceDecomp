/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3136159ED31D44CA16EE41D7DC70E0D6714FF6EEC706322DA95F531DB0EF22EE
 * Entry: 0x00314195, Ghidra index: 12049, label: IDirectSound_SetOrientation
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_SetOrientation
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CDirectSound_SetOrientation
            (-(uint)(param_1 != 0) & param_1 - 8U,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8);
  return;
}
