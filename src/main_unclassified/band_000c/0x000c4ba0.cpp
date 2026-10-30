/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9E9B7351DCA326A57A55CC76B13DD2576F2B93F2C323713CA264DED729CBC14
 * Entry: 0x000c4ba0, Ghidra index: 2412, label: FUN_000c4ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c4ba0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_000c4bc0(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}
