/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AC6716668478209BEE37977DB73E643A63348FE09FA9B3C067F201B3A92E73F
 * Entry: 0x00313882, Ghidra index: 12018, label: IDirectSoundBuffer_SetFormat
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetFormat(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetFormat(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
