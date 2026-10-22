/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84082C4CED82432E3EB098B75C0BEBAEAAAD84928DCD44C16880D32EC1E7CCB1
 * Entry: 0x0014d130, Ghidra index: 4353, label: FUN_0014d130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0014d130(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EDI;
  
  piVar1 = (int *)(unaff_EDI + 0x144);
  uVar2 = (**(code **)(*(int *)(unaff_EDI + 0x144) + 0x20))();
  if ((char)uVar2 != '\0') {
    uVar2 = *(uint *)(unaff_EDI + 0x1cc);
    if (uVar2 == 1) {
      uVar2 = (**(code **)(*piVar1 + 0x50))();
      if ((char)uVar2 == '\0') {
        uVar2 = (**(code **)(*piVar1 + 0x34))(1);
        *(undefined4 *)(unaff_EDI + 0x1cc) = 0;
        return uVar2 & 0xffffff00;
      }
    }
    else if (uVar2 == 2) {
      uVar2 = (**(code **)(*piVar1 + 0x50))(unaff_EDI + 0x44);
      if ((char)uVar2 == '\0') {
        uVar2 = (**(code **)(*piVar1 + 0x34))(1);
      }
    }
    *(undefined4 *)(unaff_EDI + 0x1cc) = 0;
  }
  return uVar2 & 0xffffff00;
}
