/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0816D4A29ED5CA99B3E25E315CDFEF798B0C818FAB5AA32BF1451D8527F42254
 * Entry: 0x0024e860, Ghidra index: 8304, label: FUN_0024e860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024e860(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  int iVar10;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_c = (undefined1)param_1;
  local_8 = (undefined4 *)FUN_00250580();
  *(undefined1 *)((int)local_8 + 0x11) = 1;
  local_8[1] = local_8;
  *local_8 = local_8;
  local_8[2] = local_8;
  param_2 = (int *)*param_2;
  local_4 = 0;
  if (param_2 != (int *)*param_3) {
    local_20 = 0;
    do {
      local_24 = *(undefined4 *)(*param_2 + 0x14);
      piVar5 = (int *)FUN_00279c40();
      if (*(int *)(*piVar5 + 0x10) != 0) {
        piVar5 = (int *)*param_2;
        piVar6 = (int *)0x0;
        if (*(undefined4 **)(param_1 + 0x98) != (undefined4 *)0x0) {
          piVar6 = (int *)**(undefined4 **)(param_1 + 0x98);
        }
        if (piVar6 != *(int **)(param_1 + 0x98)) {
          do {
            fVar3 = (float)piVar5[2];
            if (piVar5[2] < 0) {
              fVar3 = fVar3 + 4.2949673e+09;
            }
            if (fVar3 <= (float)piVar6[2]) break;
            FUN_002ebf10();
            FUN_0024ec10();
            local_2c = (undefined4 *)FUN_002ebf10();
            FUN_0024f4c0();
            piVar1 = (int *)*piVar6;
            if (piVar6 != *(int **)(param_1 + 0x98)) {
              *(int **)piVar6[1] = piVar1;
              *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0();
            }
            piVar6 = piVar1;
          } while (piVar1 != (int *)*(int *)(param_1 + 0x98));
        }
        local_2c = local_8;
        if (*(char *)((int)local_8[1] + 0x11) == '\0') {
          puVar7 = (undefined4 *)local_8[1];
          do {
            if ((uint)puVar7[3] < (uint)piVar5[2]) {
              puVar8 = (undefined4 *)puVar7[2];
            }
            else {
              puVar8 = (undefined4 *)*puVar7;
              local_2c = puVar7;
            }
            puVar7 = puVar8;
          } while (*(char *)((int)puVar8 + 0x11) == '\0');
        }
        if ((local_2c == local_8) || ((uint)piVar5[2] < (uint)local_2c[3])) {
          local_28 = local_8;
          ppuVar9 = &local_28;
        }
        else {
          ppuVar9 = &local_2c;
        }
        if (local_8 == *ppuVar9) {
          FUN_0024ec10();
          FUN_0024f4c0();
        }
        switch(*(undefined4 *)(*param_2 + 0x10)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xd:
        case 0xe:
          cVar4 = (**(code **)(*piVar5 + 0xc))();
          if ((cVar4 != '\0') && (FUN_001611d0(), 0.0 <= (float)piVar5[7])) {
            FUN_0024f250();
            iVar2 = *(int *)(param_1 + 0x98);
            iVar10 = FUN_000ff730(param_1 + 0x94);
            FUN_000b2a50();
            *(int *)(iVar2 + 4) = iVar10;
            **(int **)(iVar10 + 4) = iVar10;
            FUN_0024f2b0();
          }
          break;
        default:
        }
        FUN_00250840(*(undefined4 *)(param_1 + 0x88));
      }
      param_2 = param_2 + 1;
    } while (param_2 != (int *)*param_3);
  }
  FUN_0024ffe0();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
