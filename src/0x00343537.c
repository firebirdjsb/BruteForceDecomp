/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEA030655C0972175B4B5FEE7DBB6AAB1013126F9F2C61ED59BC7468A901DAD4
 * Entry: 0x00343537, Ghidra index: 12713, label: FUN_00343537
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343537(char *param_1,uint param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 local_14;
  short local_10;
  undefined1 local_c;
  undefined2 local_8;
  
  iVar9 = param_2;
  puVar2 = (undefined2 *)param_1;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  param_2 = 0;
  local_8 = 0;
  iVar7 = FUN_00343343(iVar9);
  if (iVar7 < 10) {
    return 0;
  }
  uVar6 = FUN_003433ac(iVar9,4);
  uVar3 = FUN_003433ac(iVar9 + 4,2);
  uVar4 = FUN_003433ac(iVar9 + 6,2);
  uVar5 = FUN_003433ac(iVar9 + 8,2);
  pcVar11 = (char *)(iVar9 + 10);
  cVar1 = *pcVar11;
  param_1 = pcVar11;
  if ((cVar1 == '.') || (cVar1 == ',')) {
    uVar12 = 10000000;
    iVar9 = FUN_003434ea(&param_1);
    local_c = (undefined1)((uint)(iVar9 * 0x3c) / 10000000);
    uVar8 = (uint)(iVar9 * 0x3c) % 10000000;
    uVar10 = 10000;
  }
  else {
    iVar7 = FUN_00343394(cVar1);
    if (iVar7 == 0) goto LAB_0034367b;
    local_c = FUN_003433ac(pcVar11,2);
    pcVar11 = (char *)(iVar9 + 0xc);
    cVar1 = *pcVar11;
    param_1 = pcVar11;
    if ((cVar1 != '.') && (cVar1 != ',')) {
      iVar7 = FUN_00343394(cVar1);
      if (iVar7 != 0) {
        param_2 = FUN_003433ac(pcVar11,2);
        param_1 = (char *)(iVar9 + 0xe);
        if ((*param_1 == '.') || (pcVar11 = param_1, *param_1 == ',')) {
          local_8 = FUN_003434ea(&param_1);
          pcVar11 = param_1;
        }
      }
      goto LAB_0034367b;
    }
    uVar12 = 100000;
    uVar8 = FUN_003434ea(&param_1);
    uVar10 = 100;
  }
  param_2 = (uVar8 * 0x3c) / uVar12;
  local_8 = (undefined2)(((ulonglong)(uVar8 * 0x3c) % (ulonglong)uVar12) / (ulonglong)uVar10);
  pcVar11 = param_1;
LAB_0034367b:
  cVar1 = *pcVar11;
  if (cVar1 == 'Z') {
    local_14 = 1;
    pcVar11 = pcVar11 + 1;
  }
  else if (cVar1 == '+') {
    uVar10 = FUN_003434ea(&param_1);
    local_10 = (short)(uVar10 / 100) * 0x3c + (short)(uVar10 % 100);
    pcVar11 = param_1;
  }
  else if (cVar1 == '-') {
    uVar10 = FUN_003434ea(&param_1);
    local_10 = (short)(uVar10 / 100) * -0x3c - (short)(uVar10 % 100);
    pcVar11 = param_1;
  }
  if (*pcVar11 != '\0') {
    return 0;
  }
  *puVar2 = uVar6;
  *(undefined1 *)(puVar2 + 1) = uVar3;
  *(undefined1 *)((int)puVar2 + 3) = uVar4;
  *(undefined1 *)(puVar2 + 2) = uVar5;
  *(undefined1 *)((int)puVar2 + 5) = local_c;
  *(undefined1 *)(puVar2 + 3) = (undefined1)param_2;
  puVar2[4] = local_8;
  *(undefined1 *)(puVar2 + 5) = local_14;
  puVar2[6] = local_10;
  return 1;
}
