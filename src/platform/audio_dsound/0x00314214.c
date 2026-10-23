/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 123EC5C4A72318523D67D6877CAD878F295D166B01CCEFD2C6B070A10C99B6D6
 * Entry: 0x00314214, Ghidra index: 12051, label: IDirectSound_SetI3DL2Listener
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_SetI3DL2Listener(int param_1,undefined4 param_2,undefined4 param_3)

{
  CDirectSound_SetI3DL2Listener(-(uint)(param_1 != 0) & param_1 - 8U,param_2,param_3);
  return;
}
