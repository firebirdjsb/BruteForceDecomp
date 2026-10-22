/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89B7D72A53349242B826E3B10CE6ADDB8FB4541F5AD730C3A7497FDA83F51B7B
 * Entry: 0x0016e920, Ghidra index: 4824, label: FUN_0016e920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e920(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  int unaff_EDI;
  
  while( true ) {
    iVar6 = in_EAX * 2 + 2;
    if (unaff_EDI <= iVar6) break;
    if (*(uint *)(param_1 + 0x10 + iVar6 * 0x14) < *(uint *)(param_1 + -4 + iVar6 * 0x14)) {
      iVar6 = in_EAX * 2 + 1;
    }
    uVar3 = *(undefined4 *)(param_1 + 0xc + iVar6 * 0x14);
    puVar1 = (undefined4 *)(param_1 + iVar6 * 0x14);
    uVar4 = puVar1[2];
    uVar5 = puVar1[1];
    puVar2 = (undefined4 *)(param_1 + in_EAX * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar4;
    puVar2[3] = uVar3;
    puVar2[4] = puVar1[4];
    in_EAX = iVar6;
  }
  if (iVar6 == unaff_EDI) {
    puVar1 = (undefined4 *)(param_1 + in_EAX * 0x14);
    uVar3 = *(undefined4 *)(param_1 + -8 + unaff_EDI * 0x14);
    puVar2 = (undefined4 *)(param_1 + -0x14 + unaff_EDI * 0x14);
    uVar4 = puVar2[2];
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar4;
    puVar1[3] = uVar3;
    puVar1[4] = puVar2[4];
  }
  FUN_0016eb80(param_1);
  return;
}
