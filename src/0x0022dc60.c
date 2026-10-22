/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7309C2BB95524F4334DBF231A99CB7D578269F75B7D0412F347391DA468568B6
 * Entry: 0x0022dc60, Ghidra index: 7715, label: FUN_0022dc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022dc60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x360) != in_EAX) {
    FUN_0008f6a0();
  }
  uVar1 = unaff_EBX[2];
  uVar2 = *unaff_EBX;
  *(undefined4 *)(unaff_EDI + 0x1f0) = unaff_EBX[1];
  *(undefined4 *)(unaff_EDI + 0x1ec) = uVar2;
  *(undefined4 *)(unaff_EDI + 500) = uVar1;
  *(byte *)(unaff_EDI + 0x224) = *(byte *)(unaff_EDI + 0x224) | 1;
  return;
}
