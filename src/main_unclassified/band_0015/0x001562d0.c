/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E7FF950076DB49DB1D8DFA1EEDEBBE9354BE5285BD992249F4F6DF3C6E97442
 * Entry: 0x001562d0, Ghidra index: 4475, label: FUN_001562d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001562d0(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  if (((*(byte *)(unaff_ESI + 0x26) & 0x10) == 0) && (*(int *)(unaff_ESI + 8) != 0)) {
    puVar1 = (undefined4 *)FUN_000e0350(*(int *)(unaff_ESI + 8),local_4,unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x14) = *puVar1;
    *(byte *)(unaff_ESI + 0x26) = *(byte *)(unaff_ESI + 0x26) | 0x10;
  }
  return;
}
