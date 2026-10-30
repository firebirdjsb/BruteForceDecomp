/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F2EAFFD5CE6770332E9A5D19033C7C60D51131D7D8E6CB8A88BB30D68F269F8
 * Entry: 0x001649b0, Ghidra index: 4683, label: FUN_001649b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001649b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  
  iVar5 = (in_EAX - param_1) / 0x28;
  if (0 < iVar5) {
    param_1 = param_1 + iVar5 * 0x14;
    do {
      uVar1 = *(undefined4 *)(param_1 + -0x14);
      param_1 = param_1 + -0x14;
      uStack_18 = param_2;
      puVar2 = local_28;
      iVar5 = iVar5 + -1;
      iVar3 = param_1 - (int)puVar2;
      iVar4 = 4;
      do {
        *puVar2 = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_00164ed0(uVar1);
    } while (0 < iVar5);
  }
  return;
}
