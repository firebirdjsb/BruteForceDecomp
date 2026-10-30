/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C014D5195AA09ECA0897DC508E483C57CA1E6248E2FE1DE5A3D738DB4A91EB1
 * Entry: 0x00164320, Ghidra index: 4676, label: FUN_00164320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164320(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = (in_EAX - param_1) / 0x14;
  if (1 < iVar2) {
    puVar5 = (undefined4 *)(in_EAX + -0x14);
    if (iVar2 < 2) goto LAB_0016438d;
    do {
      uVar1 = *puVar5;
      uStack_14 = 0;
      uStack_18 = param_2;
      puVar3 = local_28;
      iVar2 = 4 - (int)puVar3;
      iVar4 = 4;
      do {
        *puVar3 = *(undefined4 *)((int)puVar5 + iVar2 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_001656b0(uVar1);
LAB_0016438d:
      puVar5 = puVar5 + -5;
    } while (1 < ((0x14 - param_1) + (int)puVar5) / 0x14);
  }
  return;
}
