/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4025B38A9CC42DB2DF82F7B3D34D98DB92F7AF2D9BE1C81C7DA0819AC2ADB3B
 * Entry: 0x00279070, Ghidra index: 8927, label: FUN_00279070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Type propagation algorithm not settling */

void FUN_00279070(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 local_148 [4];
  undefined4 *local_144;
  int local_140 [4];
  int local_130;
  undefined1 local_12c [276];
  undefined1 local_18 [16];
  undefined4 *local_8;
  
  if (*(uint *)(param_1 + 8) < 2) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00279bb0(local_148);
  local_140[0] = 0;
  piVar9 = local_140 + 4;
  iVar7 = 0x1a;
  local_144 = puVar2;
  do {
    iVar3 = FUN_00279bb0(piVar9 + -2);
    piVar9[-1] = iVar3;
    *piVar9 = 0;
    piVar9 = piVar9 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = *(int *)(param_1 + 8);
  uVar8 = 0;
  do {
    if (iVar7 == 0) {
      if (1 < uVar8) {
        local_140[1] = uVar8 - 1;
        puVar10 = local_12c;
        do {
          FUN_00279af0(puVar10,puVar10 + -0xc);
          puVar10 = puVar10 + 0xc;
          local_140[1] = local_140[1] + -1;
        } while (local_140[1] != 0);
      }
      iVar7 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 4) = local_140[uVar8 * 3];
      local_140[uVar8 * 3] = iVar7;
      uVar6 = *(undefined4 *)(param_1 + 8);
      *(int *)(param_1 + 8) = local_140[uVar8 * 3 + 1];
      local_140[uVar8 * 3 + 1] = uVar6;
      if (local_8 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *local_8;
      }
      FUN_001298b0(local_140 + 1,uVar6,local_8);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_8);
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
    }
    if (puVar2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar2;
    }
    if (((puVar5 != puVar1) && (puVar4 != puVar5)) && (puVar4 != (undefined4 *)*puVar5)) {
      FUN_0027a600(puVar4,puVar5,(undefined4 *)*puVar5);
      puVar2 = local_144;
    }
    uVar11 = 0;
    if (uVar8 == 0) {
LAB_00279174:
      local_144 = (undefined4 *)local_140[uVar11 * 3 + 3];
      local_140[uVar11 * 3 + 3] = (int)puVar2;
      iVar7 = *(int *)(local_12c + uVar11 * 0xc + -4);
      *(int *)(local_12c + uVar11 * 0xc + -4) = local_140[0];
      local_140[0] = iVar7;
      if (uVar11 == uVar8) {
        uVar8 = uVar8 + 1;
      }
    }
    else {
      piVar9 = local_140 + 4;
      do {
        if (*piVar9 == 0) break;
        FUN_00279af0(piVar9 + -2,local_148);
        puVar2 = (undefined4 *)piVar9[-1];
        piVar9[-1] = (int)local_144;
        iVar7 = *piVar9;
        *piVar9 = local_140[0];
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + 3;
        local_140[0] = iVar7;
        local_144 = puVar2;
      } while (uVar11 < uVar8);
      if (uVar11 != 0x19) goto LAB_00279174;
      FUN_00279af0(local_18,local_148);
    }
    iVar7 = *(int *)(param_1 + 8);
    puVar2 = local_144;
  } while( true );
}
