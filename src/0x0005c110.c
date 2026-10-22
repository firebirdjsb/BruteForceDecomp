/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 531636706F531C0930955F3312191395A9BAE56A89303D8319A542F7B59CCB4A
 * Entry: 0x0005c110, Ghidra index: 944, label: FUN_0005c110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005c110(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_EDI + 4);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) goto LAB_0005c13c;
    do {
      iVar2 = *(int *)(*(int *)(unaff_EDI + 8) + uVar3 * 4);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x14) == 0)) && (*(int *)(iVar2 + 4) != 0)) &&
         ((*(byte *)(*(int *)(iVar2 + 4) + 0x70) & 1) == 0)) {
        return *(undefined4 *)(iVar2 + 4);
      }
LAB_0005c13c:
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}
