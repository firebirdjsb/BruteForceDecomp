/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D259FA8FC8394C90F715107008C3C90A0D707188C586E91DBCA36FBBA9DA9041
 * Entry: 0x00343c3f, Ghidra index: 12724, label: FUN_00343c3f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343c3f(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  *param_2 = 0;
  pbVar3 = *(byte **)(param_1 + 0x24);
  pbVar5 = (byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10));
  pbVar7 = pbVar3 + 1;
  if (pbVar5 < pbVar7) {
LAB_00343cc1:
    uVar4 = 0;
  }
  else {
    bVar1 = *pbVar3;
    uVar6 = bVar1 & 0x1f;
    *(byte **)(param_1 + 0x24) = pbVar7;
    if (uVar6 == 0x1f) {
      uVar6 = 0;
      do {
        pbVar7 = pbVar7 + 1;
        if (pbVar5 < pbVar7) goto LAB_00343cc1;
        bVar2 = **(byte **)(param_1 + 0x24);
        *(byte **)(param_1 + 0x24) = pbVar7;
        if ((uVar6 & 0xe0000000) != 0) {
          FUN_00343377(param_1,0xfffffc0d);
          goto LAB_00343cc1;
        }
        uVar6 = uVar6 << 7 | bVar2 & 0x7f;
      } while ((bVar2 & 0x80) != 0);
    }
    *param_2 = (bVar1 & 0xc0) << 0x18 | uVar6;
    *(byte **)(param_1 + 0x24) = pbVar3;
    uVar4 = 1;
  }
  return uVar4;
}
