/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 365A33F8B8B6661500B572E7793F9492ABCD87A8748EF7F8B29F489559BF3B26
 * Entry: 0x002899d0, Ghidra index: 9138, label: FUN_002899d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002899d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00289e20();
  if ((iVar1 != -2) && (iVar1 != -1)) {
    return 0;
  }
  return 1;
}
