/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC2DF098F9F00380C706E75FA7D923EA65DD5F8D09146127A4AEC7AE8BAC0329
 * Entry: 0x00381620, Ghidra index: 13572, label: FUN_00381620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00381620(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint local_18;
  int local_14;
  
  iVar7 = param_1[4];
  iVar8 = *(int *)(iVar7 + 0x5c);
  puVar1 = (undefined4 *)param_1[10];
  if ((param_2 & 0xc0000000) == 0xc0000000) {
    *(undefined4 *)(iVar7 + 0x14) = 0;
    *(uint *)(param_1[4] + 0x10) = param_2;
  }
  else {
    uVar3 = CONCAT11((char)*(undefined2 *)((int)puVar1 + 6),
                     (char)((ushort)*(undefined2 *)((int)puVar1 + 6) >> 8));
    uVar9 = (uint)CONCAT11((char)*(undefined2 *)(puVar1 + 1),
                           (char)((ushort)*(undefined2 *)(puVar1 + 1) >> 8)) * (uint)uVar3;
    iVar4 = FUN_003814f3(*puVar1);
    uVar2 = (ulonglong)(iVar4 + 1U) * (ulonglong)(uint)uVar3;
    if (uVar9 == 0) {
      uVar9 = 0x2000;
    }
    iVar5 = FUN_003815f0((uint)uVar3);
    if ((((iVar5 != 0) && (uVar3 < 0x1001)) && (uVar9 < 0x4001)) &&
       (((uVar9 & 0xfff) == 0 && (iVar4 + 1U != 0)))) {
      local_14 = (int)(uVar2 >> 0x20);
      local_18 = (uint)uVar2;
      if ((((local_14 != 0) || (uVar9 <= local_18)) && (uVar2 < 0x200000000)) &&
         ((local_14 == 0 || (local_18 == 0)))) {
        *(ulonglong *)(param_1 + 0x58) = uVar2;
        param_1[0x5a] = uVar9;
        uVar6 = FUN_0038160a(uVar3);
        param_1[0x56] = uVar6 & 0xff;
        param_1[0x52] = 0xc;
        uVar13 = __aulldiv(uVar2,uVar9,0);
        *(undefined8 *)(param_1 + 0x50) = uVar13;
        param_1[0x53] = 1;
        param_1[0x54] = uVar9 >> 0xc;
        param_1[0x55] = 0x1000;
        iVar8 = *(int *)(iVar8 + 0x10);
        if (iVar8 == 0x70000) {
          puVar10 = (undefined8 *)(param_1 + 0x50);
          puVar12 = *(undefined4 **)(iVar7 + 0x30);
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar12 = *(undefined4 *)puVar10;
            puVar10 = (undefined8 *)((int)puVar10 + 4);
            puVar12 = puVar12 + 1;
          }
          *(undefined4 *)(param_1[4] + 0x14) = 0x18;
        }
        else {
          if (iVar8 != 0x74004) goto LAB_003817d2;
          puVar12 = *(undefined4 **)(iVar7 + 0x30);
          puVar11 = puVar12;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          puVar12[2] = param_1[0x58];
          puVar12[3] = param_1[0x59];
          *(undefined1 *)((int)puVar12 + 0x1a) = 1;
          *(undefined4 *)(param_1[4] + 0x14) = 0x20;
        }
        *(undefined4 *)(param_1[4] + 0x10) = 0;
        goto LAB_003817d2;
      }
    }
    *(undefined4 *)(iVar7 + 0x14) = 0;
    *(undefined4 *)(param_1[4] + 0x10) = 0xc000014f;
  }
LAB_003817d2:
  ExFreePool(puVar1);
  IofCompleteRequest();
  IoStartNextPacket(*param_1);
  return;
}
