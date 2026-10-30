/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E02CBCD43337FAC1CDBB9BB72B0F0A4CA0C7799EFDC60A8EAE5CAA7CFFDC8F7
 * Entry: 0x000543e0, Ghidra index: 791, label: FUN_000543e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00054540(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6);

void FUN_000543e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_EDX;
  int unaff_EDI;
  
  while( true ) {
    iVar7 = in_EDX * 2 + 2;
    if (unaff_EDI <= iVar7) break;
    if (*(float *)(param_1 + iVar7 * 0x14) < *(float *)(param_1 + iVar7 * 0x14 + -0x14)) {
      iVar7 = in_EDX * 2 + 1;
    }
    iVar1 = param_1 + iVar7 * 0x14;
    *(undefined4 *)(param_1 + in_EDX * 0x14) = *(undefined4 *)(param_1 + iVar7 * 0x14);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = param_1 + in_EDX * 0x14;
    uVar6 = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 8) = uVar6;
    *(undefined4 *)(iVar2 + 0xc) = uVar5;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    in_EDX = iVar7;
  }
  if (iVar7 == unaff_EDI) {
    puVar4 = (undefined4 *)(param_1 + -0x14 + unaff_EDI * 0x14);
    puVar3 = (undefined4 *)(param_1 + in_EDX * 0x14);
    *puVar3 = *puVar4;
    uVar5 = puVar4[3];
    uVar6 = puVar4[2];
    puVar3[1] = puVar4[1];
    puVar3[2] = uVar6;
    puVar3[3] = uVar5;
    puVar3[4] = puVar4[4];
  }
  FUN_00054540(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}
