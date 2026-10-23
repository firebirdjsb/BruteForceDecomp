/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3471C3CA877FFB7C6997862E6B98C617253DADF9BF91EE58B395483D8592484
 * Entry: 0x000c99d0, Ghidra index: 2495, label: FUN_000c99d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c99d0(int param_1)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar1 = *(byte *)(param_1 + 0x3b);
  if (((((bVar1 & 2) != 0) && ((bVar1 & 4) != 0)) && ((bVar1 & 8) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    FUN_002385a0();
    fVar2 = *(float *)(param_1 + 0x44);
    if ((*(byte *)(param_1 + 0x3b) & 0x10) != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x40);
      uVar4 = (uint)*(ushort *)(param_1 + 0x36);
      uVar8 = 0;
      uVar7 = 0;
      uVar5 = 0;
      uVar3 = FUN_000ba590(0,uVar6,0,0,uVar4);
      FUN_000ccd20(*(undefined4 *)(param_1 + 0x24),(float)(*(int *)(param_1 + 0x28) + 1),
                   (float)(*(int *)(param_1 + 0x2c) + 1),(int)(fVar2 * 128.0) * 0x1000000 + 0xa0a0a,
                   uVar3,uVar5,uVar6,uVar7,uVar8,uVar4);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    uVar4 = (uint)*(ushort *)(param_1 + 0x36);
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar3 = FUN_000ba590(0,uVar6,0,0,uVar4);
    FUN_000ccd20(*(undefined4 *)(param_1 + 0x24),(float)*(int *)(param_1 + 0x28),
                 (float)*(int *)(param_1 + 0x2c),
                 (((uint)*(byte *)(param_1 + 0x38) + (int)(fVar2 * 255.0) * 0x100) * 0x100 +
                 (uint)*(byte *)(param_1 + 0x3a)) * 0x100 + (uint)*(byte *)(param_1 + 0x39),uVar3,
                 uVar5,uVar6,uVar7,uVar8,uVar4);
    FUN_00238630();
  }
  return;
}
