/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC9A65F3AC3AF8DC5B0A7746D388A90A9D0F1598C483AC6421AEA9C44C4692E7
 * Entry: 0x003129fe, Ghidra index: 11955, label: IDirectSound_GetCaps
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_GetCaps(int param_1,undefined4 param_2)

{
  CDirectSound_GetCaps(-(uint)(param_1 != 0) & param_1 - 8U,param_2);
  return;
}
