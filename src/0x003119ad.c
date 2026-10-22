/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EB74DEA4AA550A7FDDFCB38DFB8264879C8F652AFBF20913E4D43842F59267A
 * Entry: 0x003119ad, Ghidra index: 11903, label: FUN_003119ad
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003119ad(void)

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
