/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBBCE89517ED3787F5B4025F039DE21C47ACA9FB871C73B033BC809C26B8452C
 * Entry: 0x0031389e, Ghidra index: 12019, label: IDirectSoundBuffer_SetFrequency
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetFrequency(int param_1,undefined4 param_2)

{
  CDirectSoundBuffer_SetFrequency(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2);
  return;
}
