/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DE3394F83B1C178827366D655F3A85736F4ACC9C3D2CED9674B501F6FB7C409
 * Entry: 0x00175090, Ghidra index: 4928, label: FUN_00175090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c564;
extern uint32_t DAT_0040c56c;
extern char s_script_0040c7b0[];
extern uint32_t switchD_001750d2_caseD_1[];
extern uint32_t switchD_001750d2_caseD_2[];
void FUN_00175090(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  int unaff_retaddr;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x18))(*(int **)(param_1 + 0x74));
  iVar8 = 0;
  iVar6 = param_1;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)
               (**(code **)(**(int **)(iVar6 + 0x74) + 0x20))(*(int **)(iVar6 + 0x74),iVar8);
      switch(*puVar3) {
      case 1:
      case 3:
      case 5:
      case 6:
switchD_001750d2_caseD_1:
        iVar6 = FUN_002383b0();
        if (*(undefined4 **)(param_1 + 0x28) == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x28);
        }
        do {
          if (puVar3 == *(undefined4 **)(param_1 + 0x28)) goto switchD_001750d2_caseD_2;
          iVar4 = puVar3[2];
          puVar3 = (undefined4 *)*puVar3;
        } while ((iVar4 == 0) || (iVar6 != *(int *)(iVar4 + 4)));
        if (iVar4 != 0) {
          FUN_000dec40(unaff_retaddr,iVar8,&stack0xfffffff0);
        }
        break;
      case 7:
        pbVar9 = (byte *)puVar3[0xf];
        if (pbVar9 == (byte *)0x0) goto switchD_001750d2_caseD_1;
        pbVar5 = &DAT_0040c56c;
        pbVar10 = pbVar9;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_0017514b:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00175150;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_0017514b;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00175150:
        if (iVar6 != 0) {
          pbVar5 = &DAT_0040c564;
          pbVar10 = pbVar9;
          do {
            bVar1 = *pbVar5;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00175184:
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00175189;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00175184;
            pbVar5 = pbVar5 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00175189:
          if (iVar6 != 0) {
            pcVar7 = s_script_0040c7b0;
            do {
              bVar1 = *pcVar7;
              bVar11 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_001751b6:
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_001751bb;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar7[1];
              bVar11 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_001751b6;
              pcVar7 = pcVar7 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_001751bb:
            if (iVar6 == 0) {
              (**(code **)(*(int *)(unaff_retaddr + 4) + 0x10))();
              FUN_001753d0(iVar8);
              FUN_00173500(iVar8);
              break;
            }
            goto switchD_001750d2_caseD_1;
          }
        }
        FUN_002383b0();
        iVar6 = FUN_000da6f0();
        if (iVar6 != 0) {
          FUN_000ded40(unaff_retaddr,iVar8,&stack0xfffffff0);
        }
        break;
      case 0xb:
        FUN_002383b0();
        iVar4 = FUN_000da6f0();
        if (iVar4 != 0) {
          FUN_000ded40(iVar6,iVar8,&stack0xfffffff0);
        }
      }
switchD_001750d2_caseD_2:
      iVar8 = iVar8 + 1;
      iVar6 = unaff_retaddr;
    } while (iVar8 < iVar2);
  }
  FUN_00174ec0();
  FUN_001765a0();
  return;
}
