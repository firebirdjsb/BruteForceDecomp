/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C930883BF2FA77495871093DD5926571EEBDEB43B830A1691F25E4748198F8CA
 * Entry: 0x000da9d0, Ghidra index: 2696, label: FUN_000da9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000da9d0(void)

{
  int iVar1;
  int *piVar2;
  int in_EDX;
  int *unaff_EDI;
  
  piVar2 = (int *)0x0;
  if (*(undefined4 **)(in_EDX + 0x28) != (undefined4 *)0x0) {
    piVar2 = (int *)**(undefined4 **)(in_EDX + 0x28);
  }
  iVar1 = 0;
  if (piVar2 != *(int **)(in_EDX + 0x28)) {
    while( true ) {
      iVar1 = piVar2[2];
      piVar2 = (int *)*piVar2;
      if ((iVar1 != 0) && (*unaff_EDI == *(int *)(iVar1 + 4))) break;
      if (piVar2 == *(int **)(in_EDX + 0x28)) {
        return 0;
      }
    }
  }
  return iVar1;
}
