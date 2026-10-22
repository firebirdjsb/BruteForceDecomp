/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E67E2460D9F65EE794B0EC38E78CA61BA2BED9B03EC1976DB770EEA560232518
 * Entry: 0x0031198a, Ghidra index: 11902, label: DSound_CRefCount_Release
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__DSound_CRefCount_Release(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[1] == 0) || (iVar1 = param_1[1] + -1, param_1[1] = iVar1, iVar1 != 0)) {
    uVar2 = param_1[1];
  }
  else {
    (**(code **)*param_1)(1);
    uVar2 = 0;
  }
  return uVar2;
}
