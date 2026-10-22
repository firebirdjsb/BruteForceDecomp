/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41D8AAC537F1BBE89C83089241539B07716635F79C81C591EEF92545781E8BE7
 * Entry: 0x00336410, Ghidra index: 12452, label: FUN_00336410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00336410(int param_1,ushort param_2,undefined4 param_3,uint *param_4,undefined1 *param_5)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar4 = param_2;
  if (param_2 < 0x65) {
    *(undefined4 *)(param_1 + 8) = param_3;
    _param_2 = 0;
    *(ushort *)(param_1 + 0xc) = uVar4;
    puVar6 = (undefined4 *)(param_1 + 0x30);
    for (iVar7 = 0xb54; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    if (uVar4 != 0) {
      puVar6 = (undefined4 *)(param_1 + 0x4c);
      do {
        puVar3 = (undefined4 *)*param_4;
        *param_4 = (int)puVar3 + 0xbU;
        if (param_5 < (undefined1 *)((int)puVar3 + 0xbU)) {
          return 0x80150001;
        }
        puVar6[-7] = *puVar3;
        puVar6[-6] = puVar3[1];
        cVar1 = *(char *)((int)puVar3 + 10);
        if (cVar1 == '\0') {
          *puVar6 = 0;
        }
        else if (cVar1 == '\x01') {
          *puVar6 = 0x40000000;
        }
        else {
          if (cVar1 != '\x02') goto LAB_00336516;
          *puVar6 = 0x80000000;
        }
        uVar2 = *(ushort *)(puVar3 + 2);
        if (0x10 < uVar2) {
          return 0x80150001;
        }
        if (param_5 < (undefined1 *)((uint)uVar2 + (int)*param_4)) {
          return 0x80150001;
        }
        puVar9 = (undefined4 *)*param_4;
        puVar10 = puVar6 + -4;
        for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *param_4 = *param_4 + (uint)*(ushort *)(puVar3 + 2);
        _param_2 = _param_2 + 1;
        puVar6[0x15] = param_3;
        puVar6 = puVar6 + 0x1d;
      } while (_param_2 < uVar4);
    }
    iVar7 = FUN_00335afb(param_1,0);
    if (iVar7 == 0) {
LAB_00336516:
      uVar5 = 0x80150007;
    }
    else {
      FUN_0033621e(param_1);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0x80150001;
  }
  return uVar5;
}
