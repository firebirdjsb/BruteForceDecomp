/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F5EC64B5071DA8C809DAC6EB10110E6D933B0F6D79EC584BF30F88FE93CEDE1
 * Entry: 0x0014d1a0, Ghidra index: 4354, label: FUN_0014d1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0014d1a0(void)

{
  int *piVar1;
  char extraout_AL;
  undefined3 extraout_var;
  uint uVar2;
  int unaff_EDI;
  
  piVar1 = (int *)(unaff_EDI + 0x178);
  (**(code **)(*(int *)(unaff_EDI + 0x178) + 0x20))();
  if ((extraout_AL != '\0') && (*(char *)(unaff_EDI + 0x1a8) == '\0')) {
    uVar2 = *(uint *)(unaff_EDI + 0x1d0);
    if (uVar2 == 1) {
      uVar2 = (**(code **)(*piVar1 + 0x50))();
      if ((char)uVar2 == '\0') {
        uVar2 = (**(code **)(*piVar1 + 0x34))(1);
        *(undefined4 *)(unaff_EDI + 0x1d0) = 0;
        return uVar2 & 0xffffff00;
      }
    }
    else if (uVar2 == 2) {
      uVar2 = (**(code **)(*piVar1 + 0x50))(unaff_EDI + 0x44);
      if ((char)uVar2 == '\0') {
        uVar2 = (**(code **)(*piVar1 + 0x34))(1);
      }
    }
    *(undefined4 *)(unaff_EDI + 0x1d0) = 0;
    return uVar2 & 0xffffff00;
  }
  *(undefined4 *)(unaff_EDI + 0x1d0) = 0;
  return CONCAT31(extraout_var,1);
}
