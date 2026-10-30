/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36A00AC3EBCF624B41441CD3403A0867E444DA103F106FBB8298BAB189AAF803
 * Entry: 0x00336802, Ghidra index: 12455, label: FUN_00336802
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00336802(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar5 = 0;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    piVar2 = (int *)(param_1 + 0x30);
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        if ((param_4 != 0xffffffff) && (param_4 != 0xfffffffe)) {
          uVar1 = *(uint *)(uVar5 * 0x74 + 0xa0 + param_1);
          if (((param_4 < uVar1) && (uVar1 != 0xffffffff)) && (uVar1 != 0xfffffffe)) {
            return 0;
          }
          uVar5 = uVar5 + 1;
          if (uVar5 < *(ushort *)(param_1 + 0xc)) {
            puVar3 = (undefined4 *)(uVar5 * 0x74 + -0x44 + param_1);
            do {
              puVar6 = puVar3 + 0x1d;
              puVar7 = puVar3;
              for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              uVar5 = uVar5 + 1;
              puVar3 = puVar3 + 0x1d;
            } while (uVar5 < *(ushort *)(param_1 + 0xc));
          }
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          puVar3 = (undefined4 *)((uint)*(ushort *)(param_1 + 0xc) * 0x74 + 0x30 + param_1);
          for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          return 0;
        }
        iVar4 = uVar5 * 0x74 + param_1;
        *(byte *)(iVar4 + 0x4f) = *(byte *)(iVar4 + 0x4f) & 0xc3;
        *(uint *)(iVar4 + 0xa0) = param_4;
        *(undefined4 *)(iVar4 + 0x98) = 0;
        *(undefined4 *)(iVar4 + 0x9c) = 0;
        FUN_0033633a(param_1,uVar5);
        return 0;
      }
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 0x1d;
    } while (uVar5 < *(ushort *)(param_1 + 0xc));
  }
  return 0;
}
