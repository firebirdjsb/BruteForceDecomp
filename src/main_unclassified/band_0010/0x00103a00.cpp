/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92411ADAD0B219051E8D06EA5845C8F830C2C7EAF17A37617E2D16B78E5BCDEA
 * Entry: 0x00103a00, Ghidra index: 3307, label: FUN_00103a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00103a00(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x94);
  if ((*(int *)(unaff_ESI + 0x88) != 0) &&
     (iVar3 = *(int *)(unaff_ESI + 0x8c) - *(int *)(unaff_ESI + 0x88) >> 2, 0 < iVar3)) {
    if (iVar2 < 0) {
      iVar2 = iVar3 - -iVar2 % iVar3;
    }
    if (iVar3 <= iVar2) {
      iVar2 = iVar2 % iVar3;
    }
    piVar1 = *(int **)(*(int *)(unaff_ESI + 0x88) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(*piVar1 + 0x6c) = 0;
    }
  }
  return;
}
