/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EACE529EAE41AD1951DB4FBEB517D6A3F4F99985E99D52135F67C92E340BCE8F
 * Entry: 0x0023daf0, Ghidra index: 7965, label: FUN_0023daf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023daf0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x48;
  }
  if (uVar4 < in_EAX) {
    FUN_0023dbd0(unaff_ESI,*(undefined4 *)(unaff_ESI + 8));
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x48)))
     && (iVar1 + in_EAX * 0x48 != iVar2)) {
    uVar3 = FUN_0023e0b0(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
