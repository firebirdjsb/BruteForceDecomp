/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB8818D3EE3C1B21161CC603BD397C032EDAFB8719B4F1E715282F96AF54932C
 * Entry: 0x001b1fa0, Ghidra index: 5615, label: FUN_001b1fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1fa0(void)

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
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x18;
  }
  if (uVar4 < in_EAX) {
    FUN_001b8070();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x18)))
     && (iVar1 + in_EAX * 0x18 != iVar2)) {
    uVar3 = FUN_001d69d0(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
