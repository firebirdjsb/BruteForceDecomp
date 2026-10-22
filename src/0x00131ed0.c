/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82DC1152102F911197F401AC3DF0971A76467D534CF06B408829AE845CE621F0
 * Entry: 0x00131ed0, Ghidra index: 3838, label: FUN_00131ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00131ed0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_EDI + 8) - iVar1) / 0x14;
  }
  if (uVar4 < in_EAX) {
    FUN_001322c0(*(undefined4 *)(unaff_EDI + 8));
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x14)))
     && (iVar1 + in_EAX * 0x14 != iVar2)) {
    uVar3 = FUN_001328a0(iVar2);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
