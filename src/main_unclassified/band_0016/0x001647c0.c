/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1B0B9F7E43F038196681D350BAFCD43099357A081F50C10AB30C363D7306CF8
 * Entry: 0x001647c0, Ghidra index: 4681, label: FUN_001647c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001647c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  
  iVar7 = (in_EAX - param_1) / 0x30;
  if (0 < iVar7) {
    puVar6 = (undefined4 *)(param_1 + 4 + iVar7 * 0x18);
    do {
      uVar1 = puVar6[-7];
      puVar6 = puVar6 + -6;
      uStack_18 = param_2;
      uVar2 = *puVar6;
      puVar4 = local_28;
      iVar7 = iVar7 + -1;
      iVar3 = 4 - (int)puVar4;
      iVar5 = 4;
      do {
        *puVar4 = *(undefined4 *)((int)puVar6 + iVar3 + (int)puVar4);
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_00164d90(uVar1,uVar2);
    } while (0 < iVar7);
  }
  return;
}
