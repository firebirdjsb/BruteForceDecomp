/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED661DFD885616AB190E24DD5866D518A2A55958B1C3A6B46563C4108915EB3C
 * Entry: 0x0005c2b0, Ghidra index: 948, label: FUN_0005c2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005c2b0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_EDI + 4);
  uVar4 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) goto LAB_0005c2db;
    do {
      iVar2 = *(int *)(*(int *)(unaff_EDI + 8) + uVar4 * 4);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) &&
          (iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0xc), iVar3 != 0)) &&
         (*(int *)(iVar3 + 8) == unaff_EBX)) {
        return *(undefined4 *)(iVar2 + 4);
      }
LAB_0005c2db:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}
