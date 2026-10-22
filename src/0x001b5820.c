/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8150C87EA0E753C0405BAD0F3069C1C125B211CFE5DD1D3194F4D897949878A7
 * Entry: 0x001b5820, Ghidra index: 5675, label: FUN_001b5820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5820(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_EBX + 8) - iVar1) / 0x1c;
  }
  if (uVar4 < param_1) {
    FUN_001c7f90(*(undefined4 *)(unaff_EBX + 8));
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EBX + 8), param_1 < (uint)((iVar2 - iVar1) / 0x1c)))
     && (param_1 * 0x1c + iVar1 != iVar2)) {
    uVar3 = FUN_0015eaa0(iVar2);
    *(undefined4 *)(unaff_EBX + 8) = uVar3;
  }
  return;
}
