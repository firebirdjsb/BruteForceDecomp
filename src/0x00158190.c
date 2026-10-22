/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 528F80ED61EC30DF9B2EDE05BA3D8A8F71547394EF2AA473F8A0F9571C99AA57
 * Entry: 0x00158190, Ghidra index: 4495, label: FUN_00158190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00158190(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(*(int *)(unaff_EDI + 100) + 0x5c) == 0) {
    if (*(undefined4 **)(unaff_EDI + 0x60) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EDI + 0x60))(1);
      *(undefined4 *)(unaff_EDI + 0x60) = 0;
    }
    *(undefined4 *)(unaff_EDI + 0x60) = 0;
  }
  else {
    iVar1 = FUN_00224230();
    if (*(undefined4 **)(unaff_EDI + 0x60) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_EDI + 0x60))(1);
      *(undefined4 *)(unaff_EDI + 0x60) = 0;
    }
    *(int *)(unaff_EDI + 0x60) = iVar1;
    if (iVar1 != 0) {
      FUN_00222d30(unaff_EDI);
      return;
    }
  }
  return;
}
