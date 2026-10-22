/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38BFEF5740CA1CFAD03AB9918CC4A4A44D676F8802AE68E39A9ED74B8774B848
 * Entry: 0x00129510, Ghidra index: 3744, label: FUN_00129510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00129510(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((in_ECX != (int *)0x0) && (iVar1 = (**(code **)(*in_ECX + 0xf4))(), iVar1 != 0)) {
    FUN_00012090();
  }
  return;
}
