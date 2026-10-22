/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4A40D6A0D9359DA06AFFB6D6916BADF06F26846ECDD533878BD209A21347E48
 * Entry: 0x001b1e70, Ghidra index: 5614, label: FUN_001b1e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1e70(void)

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
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x2c;
  }
  if (uVar4 < in_EAX) {
    FUN_001b7d50();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x2c)))
     && (in_EAX * 0x2c + iVar1 != iVar2)) {
    uVar3 = FUN_001d6890(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
