/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2753C843055B7E5E5143147CFB139D0B3716A886E508EBB10892B5A1F93A855
 * Entry: 0x0013f570, Ghidra index: 4056, label: FUN_0013f570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0013f570(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x10) != *(int *)(unaff_ESI + 8)) {
    do {
      puVar1 = *(undefined4 **)(unaff_ESI + 0x10);
      iVar2 = puVar1[3];
      if (iVar2 != 0) {
        *(undefined4 *)(unaff_ESI + 0x10) = *puVar1;
        return iVar2;
      }
      piVar3 = (int *)FUN_001facd0(puVar1);
      iVar2 = *piVar3;
      *(int *)(unaff_ESI + 0x10) = iVar2;
    } while (iVar2 != *(int *)(unaff_ESI + 8));
  }
  if (*(undefined4 **)(unaff_ESI + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(unaff_ESI + 0x10) = **(undefined4 **)(unaff_ESI + 8);
    return 0;
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return 0;
}
