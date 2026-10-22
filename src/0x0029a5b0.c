/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 303405D47A6A9C1C97CE78EF8170186A136FAA14C2AA8CDD38AC929ED8F3DE5B
 * Entry: 0x0029a5b0, Ghidra index: 9410, label: FUN_0029a5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_syntax_error_00403f88[];
undefined4 FUN_0029a5b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint local_8;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0x25:
  case 0x114:
    FUN_00299b00();
    FUN_0029b4f0();
    if (local_8 == 4) {
      if (local_4 == 0) {
        FUN_00295910(param_1,s_syntax_error_00403f88);
      }
      FUN_00299b70();
      return 1;
    }
    FUN_0029bda0(param_1,&local_8,1);
    FUN_00299b40();
    return 1;
  default:
    FUN_0029a1e0();
    break;
  case 0x3b:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x110:
  case 0x112:
  case 0x11d:
    break;
  case 0x105:
    uVar4 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar4;
    FUN_0029aa10();
    FUN_0029a360(uVar6);
    return 1;
  case 0x109:
    if (piVar1[1] == 0) {
      FUN_00299b00();
      uVar4 = FUN_00296110();
      *(undefined4 *)(param_1 + 4) = uVar4;
      uVar4 = FUN_0029aac0();
      FUN_0029ab40(param_1,uVar4,uVar6);
      FUN_00299da0();
      return 1;
    }
    break;
  case 0x10a:
    FUN_0029ac60(param_1,uVar6);
    return 1;
  case 0x10b:
    FUN_00299b00();
    uVar6 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar6;
    iVar7 = FUN_0029bc40();
    FUN_0029bd60();
    piVar1[5] = piVar1[5] + iVar7;
    FUN_002998d0();
    FUN_00299ba0();
    return 1;
  case 0x10f:
    uVar4 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar4;
    FUN_0029aa10();
    FUN_0029a360(uVar6);
    FUN_0029ae00(param_1);
    FUN_00299e10(0x38);
    FUN_00299360(param_1);
    return 1;
  case 0x113:
    iVar7 = *piVar1;
    iVar2 = piVar1[2];
    uVar4 = FUN_00296110();
    *(undefined4 *)(param_1 + 4) = uVar4;
    iVar5 = FUN_0029a9f0();
    FUN_0029a340();
    FUN_0029aa10();
    FUN_0029a360(uVar6);
    uVar10 = iVar5 - iVar2;
    local_8 = uVar10;
    FUN_002992e0();
    iVar3 = *(int *)(iVar7 + 0x10);
    puVar9 = (undefined4 *)(iVar3 + iVar2);
    puVar11 = (undefined4 *)(piVar1[2] + iVar3);
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar7 = *(int *)(iVar7 + 0x10);
    _memmove((void *)(iVar7 + iVar2),(void *)(iVar7 + iVar5),piVar1[2] - iVar2);
    FUN_00299df0(param_1,0x32);
    FUN_00299e10(0x36);
    return 1;
  }
  return 0;
}
