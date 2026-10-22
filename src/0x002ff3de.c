/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E0E51EDD67C5C81B86E01280A6BCE67E8639683D16D895178FFCB564E56D5D9
 * Entry: 0x002ff3de, Ghidra index: 11061, label: FUN_002ff3de
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002ff3de(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = XAPILIB__IsBadCodePtr(param_1);
  return iVar1 == 0;
}
