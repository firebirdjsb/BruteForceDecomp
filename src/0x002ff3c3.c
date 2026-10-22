/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9315DA4D89E9D6F57EA44AEB77CB8F0E0358D39EE6ECC26AB554443DBD2217D4
 * Entry: 0x002ff3c3, Ghidra index: 11060, label: FUN_002ff3c3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002ff3c3(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = XAPILIB__IsBadWritePtr(param_1,param_2);
  return iVar1 == 0;
}
