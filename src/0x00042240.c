/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD5E4EC4BFD475676D2FBB2E2D60FDC21CA831B9BAF8FE5AE9431982715C196A
 * Entry: 0x00042240, Ghidra index: 502, label: FUN_00042240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00042240(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 4) != 0) &&
     (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4) >> 2 != 0)) {
    for (uVar3 = 0;
        (iVar2 = *(int *)(unaff_ESI + 4), iVar2 != 0 &&
        (uVar3 < (uint)(*(int *)(unaff_ESI + 8) - iVar2 >> 2))); uVar3 = uVar3 + 1) {
      puVar1 = (uint *)(*(int *)(iVar2 + uVar3 * 4) + 0x28);
      *puVar1 = *puVar1 | 4;
    }
  }
  return;
}
