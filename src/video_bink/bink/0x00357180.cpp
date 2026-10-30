/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E4638110DCE6A8E8A1D163F1FFC006C7CD87CE3B0B4C7863ACD250F08F4E157
 * Entry: 0x00357180, Ghidra index: 13151, label: FUN_00357180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00357180(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x280) == 0) {
    uVar1 = FUN_0035b1a0();
    *(undefined4 *)(unaff_ESI + 0x280) = uVar1;
    *(int *)(unaff_ESI + 0x284) = *(int *)(unaff_ESI + 0x270) + -1;
  }
  return;
}
