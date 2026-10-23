/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1345335E8DE3FAF838877271C16763F33F243AA795449BF386A8F25AFBA29B79
 * Entry: 0x0035418a, Ghidra index: 13106, label: FUN_0035418a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035418a(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1 + -0x6c;
  uVar4 = *(uint *)(in_ECX + 0x1d8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00353aaf(iVar5);
  }
  if ((*(uint *)(param_1 + 0x20) != 0) && (*(uint *)(param_1 + 0x20) <= uVar4)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar3 = FUN_00353845(iVar5,0x8007274c);
    if (iVar3 == 0) {
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x24) != 0) && (*(uint *)(param_1 + 0x24) <= uVar4)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar3 = FUN_00354023(iVar5);
    if (iVar3 == 0) {
      return;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 == 0) || (uVar4 < uVar1)) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar4 = 0xffffffff;
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if ((uVar2 != 0) && (uVar2 < uVar4)) {
      uVar4 = uVar2;
    }
    uVar2 = *(uint *)(param_1 + 0x24);
    if ((uVar2 != 0) && (uVar2 < uVar4)) {
      uVar4 = uVar2;
    }
    if ((uVar1 != 0) && (uVar1 < uVar4)) {
      uVar4 = uVar1;
    }
    FUN_0034c35a(param_1,uVar4);
  }
  else {
    *(uint *)(param_1 + 0x28) = 0;
    FUN_00346cd5(iVar5,1);
  }
  return;
}
