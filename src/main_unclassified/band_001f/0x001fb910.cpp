/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F110E913749FE7A5F82C6A78F9526063024A97FDA5B5441773E3959531360FF
 * Entry: 0x001fb910, Ghidra index: 7120, label: FUN_001fb910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001fb910(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int unaff_ESI;
  
  bVar2 = false;
  uVar4 = 0;
  do {
    bVar3 = false;
    if ((*(int *)(unaff_ESI + 0x20) == 0) ||
       ((uint)(*(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x20) >> 2) <= uVar4)) {
      if (bVar2) {
LAB_001fb957:
        if (*(char *)(unaff_ESI + 4) == '\0') {
          if (!bVar3) {
            return 0;
          }
        }
        else if (bVar3) {
          return 0;
        }
      }
      return 1;
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x20) + uVar4 * 4);
    if ((iVar1 != 0) && (bVar2 = true, *(int *)(*(int *)(param_1 + 0xc) + 8) == iVar1)) {
      bVar3 = true;
      goto LAB_001fb957;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}
