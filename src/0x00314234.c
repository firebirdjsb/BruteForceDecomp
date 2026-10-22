/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67B46632FB65BF4159F13EEEC202A090D6C69D3FDE32CB85974183F9348BA510
 * Entry: 0x00314234, Ghidra index: 12052, label: IDirectSoundBuffer_SetBufferData
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSoundBuffer_SetBufferData(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSoundBuffer_SetBufferData(-(uint)(param_1 != 0) & param_1 - 0x1cU,param_2,param_3);
  return;
}
