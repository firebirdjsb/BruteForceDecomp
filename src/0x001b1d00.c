/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B666369A23B028F264B20591161E5829CF13991B36C4855314A2FCE4DEA4804A
 * Entry: 0x001b1d00, Ghidra index: 5612, label: FUN_001b1d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1d00(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_EDI + 8) - iVar1) / 0x1c;
  }
  if (uVar4 < param_1) {
    FUN_001b7950();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), param_1 < (uint)((iVar2 - iVar1) / 0x1c)))
     && (param_1 * 0x1c + iVar1 != iVar2)) {
    uVar3 = FUN_001d6750(iVar2);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
