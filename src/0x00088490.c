/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2D757EB0405F9D53969F7DB2177676DEA2E49C729C6974E67F54BBFD39A2B5C
 * Entry: 0x00088490, Ghidra index: 1632, label: FUN_00088490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00088490(void)

{
  undefined4 in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00088610(in_ECX,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}
