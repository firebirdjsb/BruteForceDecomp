/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DCA3AE4C72363128CE6A5878A9A7F2D045F45C5D0F3D11C514EB3213D582974
 * Entry: 0x002219e0, Ghidra index: 7573, label: FUN_002219e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_0015b140(int param_1);
void FUN_002219e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_0015b140(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}
