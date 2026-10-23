/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EB8FA17BACB37041AF823277F7946E182E8590A4F518D9A7184E79E69E4B775
 * Entry: 0x00061430, Ghidra index: 1023, label: FUN_00061430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061430(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(unaff_ESI + 8) - iVar1 >> 2) < (uint)(*(int *)(unaff_ESI + 0xc) - iVar1 >> 2))
     ) {
    iVar1 = *(int *)(unaff_ESI + 8);
    FUN_00061c90(iVar1,1);
    *(int *)(unaff_ESI + 8) = iVar1 + 4;
    return;
  }
  FUN_000615d0(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),1,unaff_EBX);
  return;
}
