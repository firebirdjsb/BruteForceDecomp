/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85E153BC7627F7A8772FDE82A77DC214FFA044920D04091BD58C5014314EB16D
 * Entry: 0x002a8ec0, Ghidra index: 9626, label: FUN_002a8ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a8ec0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x54) = iVar1;
  return iVar1;
}
