/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40EE47D8E984DF49846430170E830B029447912946BE576C1873128E66360559
 * Entry: 0x000f2a30, Ghidra index: 3030, label: FUN_000f2a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000f2a30(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined4 *******pppppppuVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puStack_24;
  undefined4 *******apppppppuStack_20 [4];
  undefined4 uStack_10;
  uint auStack_c [3];
  
  for (piVar7 = *(int **)(param_1 + 0x74);
      (piVar12 = (int *)0x0, piVar7 != *(int **)(param_1 + 0x78) &&
      (piVar12 = (int *)*piVar7, piVar12[9] != 0x17e9b6bd)); piVar7 = piVar7 + 1) {
  }
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar12 + 4))();
  if (iVar5 != 3) {
    return 0;
  }
  uVar2 = piVar12[0x1c];
  if (-1 < (int)uVar2) {
    if (piVar12[0x19] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = piVar12[0x1a] - piVar12[0x19] >> 2;
    }
    if ((uVar2 < uVar6) && (iVar5 = *(int *)(piVar12[0x19] + uVar2 * 4), iVar5 != 0)) {
      puVar11 = (undefined4 *)(iVar5 + 0x24);
      goto LAB_000f2aac;
    }
  }
  puVar11 = &DAT_0046d064;
LAB_000f2aac:
  puVar3 = (uint *)*puVar11;
  piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar7 == -0x104e72d8) {
    iVar5 = piVar12[0x1c];
  }
  else {
    puStack_24 = puVar3;
    iVar5 = FUN_000efab0();
  }
  puStack_24 = *(uint **)(DAT_00469b58 + 8);
  apppppppuStack_20[0] = (undefined4 *******)*puStack_24;
  uVar8 = FUN_00102000();
  pbVar9 = (byte *)(*(code *)apppppppuStack_20[0][0x4c])(uVar8);
  cVar4 = FUN_000f2960(iVar5);
  if (cVar4 == '\0') {
    piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar7 + 8))(&stack0x00000000,0,0);
    auStack_c[0] = 0xfd890279;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(auStack_c);
    return 0;
  }
  bVar1 = *pbVar9;
  *pbVar9 = bVar1 | 0x10;
  *(int *)(pbVar9 + 0x98) = iVar5;
  uVar8 = *puVar11;
  *pbVar9 = bVar1 | 0x18;
  *(undefined4 *)(pbVar9 + 0x14) = uVar8;
  uVar8 = FUN_00102000();
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x134))(uVar8);
  auStack_c[0] = 7;
  uStack_10 = 0;
  apppppppuStack_20[0] = (undefined4 *******)((uint)apppppppuStack_20[0] & 0xffff0000);
  if (((-1 < piVar12[0x1c]) && (piVar12[0x19] != 0)) &&
     ((uint)piVar12[0x1c] < (uint)(piVar12[0x1a] - piVar12[0x19] >> 2))) {
    FUN_00087940(&puStack_24,0,0xffffffff);
    uVar8 = FUN_00102000();
    pppppppuVar10 = apppppppuStack_20[0];
    if (auStack_c[0] < 8) {
      pppppppuVar10 = apppppppuStack_20;
    }
    FUN_000f29b0(uVar8,pppppppuVar10);
  }
  if (auStack_c[0] < 8) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(apppppppuStack_20[0]);
}
