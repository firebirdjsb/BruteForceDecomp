/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A72B625B8E9E1A301DDF3C84EC304EDED77FC8886C86F41F03EFD6FA1FAC2B5
 * Entry: 0x00311a3d, Ghidra index: 11908, label: IDirectSound_Release
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void DSOUND__IDirectSound_Release(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(-(uint)(param_1 != 0) & param_1 - 8U);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
