/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 963A9F2E79F231B9057D54ECC9DD227CE59F17E1A85239ADED19E8963558E80C
 * Entry: 0x0014ae80, Ghidra index: 4308, label: FUN_0014ae80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014ae80(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x20) != 0) {
    if (*(int *)(unaff_ESI + 8) == 0) {
      if (*(int *)(unaff_ESI + 0x10) == 0) {
        return;
      }
      iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0xb0);
      if (*(int *)(*(int *)(iVar1 + 0xc) + 4) != 3) {
        return;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_ESI + 8) + 0x1d4);
    }
    if (iVar1 != 0) {
      FUN_001150e0(iVar1,*(int *)(unaff_ESI + 0x20));
      iVar1 = *(int *)(unaff_ESI + 8);
      if ((unaff_ESI == iVar1 + 0x144) && (*(int *)(iVar1 + 0x1cc) != 0)) {
        *(undefined4 *)(iVar1 + 0x1cc) = 0;
      }
    }
  }
  return;
}
