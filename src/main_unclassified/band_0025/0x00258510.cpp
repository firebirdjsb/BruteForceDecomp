/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04777227109A90D307C9DCCF6DD9CB159D4292BB3DE256594A3E00F26F6CC472
 * Entry: 0x00258510, Ghidra index: 8469, label: FUN_00258510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258510(void)

{
  int iVar1;
  undefined4 in_ECX;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(unaff_ESI + 8) - iVar1) < (uint)(*(int *)(unaff_ESI + 0xc) - iVar1))) {
    iVar1 = *(int *)(unaff_ESI + 8);
    FUN_0024c790(iVar1,1);
    *(int *)(unaff_ESI + 8) = iVar1 + 1;
    return;
  }
  FUN_00071d20(*(undefined4 *)(unaff_ESI + 8),1,in_ECX);
  return;
}
