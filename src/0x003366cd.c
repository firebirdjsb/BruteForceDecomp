/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ACFF964B4560A5E671C6AF6AA032FD480AFFE8EA3AFC10D3D914D5D5A5BB4CF
 * Entry: 0x003366cd, Ghidra index: 12454, label: FUN_003366cd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_003366cd(int param_1,int param_2,int param_3,undefined4 *param_4,uint param_5,uint param_6,
            uint param_7)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_8;
  
  if (((param_2 == 0 && param_3 == 0) || (0x10 < param_5)) || (param_5 == 0)) {
    uVar4 = 0x80070057;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xc);
    local_8 = 0;
    if (uVar1 != 0) {
      piVar2 = (int *)(param_1 + 0x30);
      do {
        if ((*piVar2 == param_2) && (piVar2[1] == param_3)) break;
        local_8 = local_8 + 1;
        piVar2 = piVar2 + 0x1d;
      } while (local_8 < *(ushort *)(param_1 + 0xc));
    }
    if (local_8 == uVar1) {
      if (uVar1 == 100) {
        local_8 = local_8 - 1;
        iVar3 = local_8 * 0x74 + param_1;
        if (*(int *)(iVar3 + 0xa0) != -1) {
          return 0x80004005;
        }
        puVar7 = (undefined4 *)(iVar3 + 0x30);
        for (iVar5 = 0x1d; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      else {
        *(ushort *)(param_1 + 0xc) = uVar1 + 1;
      }
    }
    iVar3 = local_8 * 0x74 + param_1;
    uVar6 = *(uint *)(iVar3 + 0xa0);
    if (((uVar6 <= param_7) || (uVar6 == 0xffffffff)) || (uVar6 == 0xfffffffe)) {
      *(int *)(iVar3 + 0x30) = param_2;
      *(int *)(iVar3 + 0x34) = param_3;
      *(uint *)(iVar3 + 0xa0) = param_7;
      *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) & 0x3fffffff | param_6;
      if ((param_5 != 0) && (param_4 != (undefined4 *)0x0)) {
        puVar7 = (undefined4 *)(iVar3 + 0x3c);
        for (uVar6 = param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = *param_4;
          param_4 = param_4 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = param_5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)param_4;
          param_4 = (undefined4 *)((int)param_4 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        if (param_5 < 0x10) {
          *(undefined1 *)(iVar3 + 0x3c + param_5) = 0;
        }
        else {
          *(undefined1 *)(iVar3 + 0x4b) = 0;
        }
      }
      if ((param_7 != 0xffffffff) && (param_7 != 0xfffffffe)) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      FUN_0033633a(param_1,local_8);
    }
    uVar4 = 0;
  }
  return uVar4;
}
