/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EBF4B64295B57D6CE339E884E059A9B6E1219D6FF7C4B55B451615F767BC445
 * Entry: 0x0022b820, Ghidra index: 7689, label: FUN_0022b820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0022b820(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  int local_cc;
  int local_c8;
  
  uVar17 = 0;
  local_c8 = 0x294;
  iVar18 = 0x374;
  do {
    iVar12 = *(int *)(param_1 + 0x318);
    if ((iVar12 == 0) || ((uint)(*(int *)(param_1 + 0x31c) - iVar12 >> 2) <= uVar17)) {
      return;
    }
    if (*(int *)(iVar12 + uVar17 * 4) != DAT_0046d064) {
      bVar11 = false;
      local_cc = 0;
      do {
        iVar12 = (**(code **)(*param_2 + 0x30))();
        if (iVar12 <= local_cc) break;
        piVar13 = (int *)(**(code **)(*param_2 + 0x34))(local_cc);
        if ((piVar13 != (int *)0x0) && (piVar13 != (int *)0xffffffff)) {
          if ((*piVar13 != 0) && (iVar12 = *(int *)(*piVar13 + 0x14), iVar12 != 0)) {
            piVar14 = *(int **)(iVar12 + 4);
            if (piVar14 != *(int **)(iVar12 + 8)) {
              do {
                if (*piVar14 == *(int *)(*(int *)(param_1 + 0x318) + uVar17 * 4)) {
                  if (piVar14 != (int *)0x0) {
                    iVar12 = piVar14[3];
                    iVar3 = piVar14[4];
                    piVar1 = (int *)(iVar18 + 0x24 + param_1);
                    *piVar1 = piVar14[2];
                    piVar1[1] = iVar12;
                    piVar1[2] = iVar3;
                    FUN_002333b0(piVar14 + 5);
                    param_2[uVar17 + 0x84] = (int)piVar13;
                    (**(code **)(*param_2 + 0x40))();
                    FUN_002334b0();
                    puVar15 = (undefined4 *)FUN_002334b0();
                    uVar4 = puVar15[1];
                    uVar5 = puVar15[2];
                    uVar6 = puVar15[3];
                    uVar2 = puVar15[8];
                    uVar7 = puVar15[4];
                    uVar8 = puVar15[5];
                    uVar9 = puVar15[6];
                    uVar10 = puVar15[7];
                    puVar16 = (undefined4 *)(local_c8 + (int)param_2);
                    *puVar16 = *puVar15;
                    puVar16[1] = uVar4;
                    puVar16[2] = uVar5;
                    puVar16[3] = uVar6;
                    puVar16[8] = uVar2;
                    puVar16[4] = uVar7;
                    puVar16[5] = uVar8;
                    puVar16[6] = uVar9;
                    puVar16[7] = uVar10;
                    bVar11 = true;
                  }
                  break;
                }
                piVar14 = piVar14 + 0xe;
              } while (piVar14 != *(int **)(iVar12 + 8));
            }
          }
        }
        local_cc = local_cc + 1;
      } while (!bVar11);
    }
    uVar17 = uVar17 + 1;
    iVar18 = iVar18 + 0x30;
    local_c8 = local_c8 + 0x24;
  } while( true );
}
