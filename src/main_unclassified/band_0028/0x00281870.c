/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26D4096631383E574CCAE3FC6079553539BDB595BB449BC94E67FEA638916E63
 * Entry: 0x00281870, Ghidra index: 9049, label: FUN_00281870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00281870(void)

{
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x2804) = 1;
  FUN_00281560();
  *(undefined4 *)(unaff_ESI + 0x2810) = 0;
  *(undefined4 *)(unaff_ESI + 0x2820) = 0;
  *(undefined4 *)(unaff_ESI + 0x280c) = 0;
  *(undefined4 *)(unaff_ESI + 0x2808) = 0;
  *(undefined4 *)(unaff_ESI + 0x2830) = 4;
  *(undefined4 *)(unaff_ESI + 0x2834) = 0;
  *(undefined2 **)(unaff_ESI + 0x2828) = (undefined2 *)(unaff_ESI + 0x40a);
  *(undefined4 *)(unaff_ESI + 0x2818) = 0;
  *(undefined2 *)(unaff_ESI + 0x40a) = 0;
  return;
}
