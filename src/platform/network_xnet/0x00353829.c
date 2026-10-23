/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2295C49345F17CBD4B0C62F25CF3CC4239DF20F6DCC47C527D581E7A48C25F87
 * Entry: 0x00353829, Ghidra index: 13092, label: FUN_00353829
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00353829(void)

{
  int iVar1;
  
  iVar1 = FUN_003537fa();
  if (iVar1 != 0) {
    FUN_00353101(iVar1);
  }
  return iVar1;
}
