/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1510CA33C60668A86CBF743D6BE524652061EE67BC531DDB2FE11D7935D1E96A
 * Entry: 0x0020d780, Ghidra index: 7382, label: FUN_0020d780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020d780(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(unaff_ESI + 8) - iVar1 >> 3) < (uint)(*(int *)(unaff_ESI + 0xc) - iVar1 >> 3))
     ) {
    iVar1 = *(int *)(unaff_ESI + 8);
    FUN_0005ecb0(iVar1,1);
    *(int *)(unaff_ESI + 8) = iVar1 + 8;
    return;
  }
  FUN_0020ce90(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),1,unaff_EBX);
  return;
}
