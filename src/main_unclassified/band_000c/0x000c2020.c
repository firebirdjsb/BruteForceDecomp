/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 054A7FA0C9CF3B0E05E7DB3CB81D0DBA198F00D3BFA49B134158F814A608CC82
 * Entry: 0x000c2020, Ghidra index: 2365, label: FUN_000c2020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
extern uint32_t DAT_00469aac;
void FUN_000c2020(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_EBP;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int unaff_retaddr;
  int *local_8;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(DAT_00469aac + 0xbec);
  piVar9 = *(int **)(*(int *)(param_1 + 0x34) + 0x30);
  if (piVar9 != (int *)0x0) {
    local_8 = piVar9;
    iVar3 = (**(code **)(*piVar1 + 0x10))(local_4);
    piVar8 = piVar1;
    while (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x28);
      iVar7 = *(int *)(iVar4 + 0xc);
      iVar5 = piVar9[3];
      if ((((iVar7 != -1) && (iVar5 != -1)) && (iVar7 == iVar5)) &&
         (((&DAT_003ffd80)[iVar7 * 10 + iVar5] == '\0' && (*(int *)(iVar4 + 4) != 0)))) {
        if (*(int *)(iVar4 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = **(int **)(iVar4 + 8);
        }
        iVar4 = *(int *)(iVar4 + 4);
        if (iVar4 != 0) {
          iVar7 = 0;
          uVar10 = 1;
          do {
            if ((*(byte *)(iVar4 + 0x70) & 1) == 0) {
              puVar6 = (undefined4 *)0x0;
              if (*(undefined4 **)(unaff_retaddr + 0x68) != (undefined4 *)0x0) {
                puVar6 = (undefined4 *)**(undefined4 **)(unaff_retaddr + 0x68);
              }
              for (; puVar6 != *(undefined4 **)(unaff_retaddr + 0x68);
                  puVar6 = (undefined4 *)*puVar6) {
                iVar5 = puVar6[2];
                if (*(int *)(iVar5 + 0x44) == iVar4) goto LAB_000c20f7;
              }
              iVar5 = FUN_000c2330();
LAB_000c20f7:
              if (iVar5 != 0) {
                *(undefined4 *)(iVar5 + 0x48) = 0x3f4ccccd;
              }
            }
            uVar2 = *(uint *)(*(int *)(iVar3 + 0x28) + 4);
            piVar8 = unaff_EBP;
            piVar9 = piVar1;
            if (uVar2 <= uVar10) break;
            iVar7 = iVar7 + 4;
            if (uVar10 < uVar2) {
              iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x28) + 8) + iVar7);
            }
            else {
              iVar4 = 0;
            }
            iVar4 = *(int *)(iVar4 + 4);
            uVar10 = uVar10 + 1;
          } while (iVar4 != 0);
        }
      }
      iVar3 = (**(code **)(*piVar8 + 0x14))(&local_8);
    }
  }
  return;
}
