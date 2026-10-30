/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56CEA415E6F3B0AE81CB05BBDA935549E1D971B6B41B72CEB9B0A29350E1B47D
 * Entry: 0x002b0040, Ghidra index: 9719, label: FUN_002b0040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002b0040(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar1;
  return iVar1;
}
