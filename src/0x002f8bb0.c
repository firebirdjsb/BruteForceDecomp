/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EB74DEA4AA550A7FDDFCB38DFB8264879C8F652AFBF20913E4D43842F59267A
 * Entry: 0x002f8bb0, Ghidra index: 10960, label: FUN_002f8bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f8bb0(void)

{
  int iVar1;
  uint in_ECX;
  
  iVar1 = 0;
  if (in_ECX != 0) {
    for (; (in_ECX >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  return iVar1;
}
