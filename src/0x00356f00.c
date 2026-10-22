/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B8366E91BE953B5C1EE07BF4A88A0450B6D28373990041134A6AB95B5276692
 * Entry: 0x00356f00, Ghidra index: 13150, label: FUN_00356f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b1690;
void FUN_00356f00(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcStack_c;
  uint local_8;
  int local_4;
  
  uVar2 = param_1;
  if (*(int *)(*(int *)(param_1 + 0x2f8) * 0x178 + -0x178 + *(int *)(param_1 + 0x300)) != 0) {
    iVar5 = param_1 + 0x34c;
    local_4 = iVar5;
    iVar3 = FUN_0035ad70(DAT_004b1690,iVar5);
    if (iVar3 != 0) {
      local_8 = 0;
      if (*(int *)(uVar2 + 0x2f8) != 0) {
        iVar3 = 0;
        do {
          puVar4 = (undefined4 *)(*(int *)(uVar2 + 0x300) + iVar3);
          iVar5 = (*(code *)*puVar4)(puVar4);
          while (iVar5 != 0) {
            iVar5 = iVar3 + *(int *)(uVar2 + 0x300);
            if (((*(uint *)(iVar5 + 0x40) <= *(uint *)(iVar3 + 0x54 + *(int *)(uVar2 + 0x300))) &&
                ((*(int *)(uVar2 + 0xc) <= *(int *)(iVar5 + 0x48) || (*(uint *)(iVar5 + 0x40) == 0))
                )) || (iVar5 = (**(code **)(iVar5 + 4))(iVar5,&pcStack_c,&param_1), iVar5 == 0))
            break;
            iVar5 = *(int *)(uVar2 + 0x300) + iVar3;
            if (*(int *)(*(int *)(uVar2 + 0x300) + 0x44 + iVar3) != 0) {
              param_1 = param_1 * 2;
            }
            if (*(uint *)(iVar5 + 0x40) < param_1) {
              param_1 = *(uint *)(iVar5 + 0x40);
            }
            if (*(int *)(uVar2 + 0xc) <= *(int *)(iVar5 + 0x48)) {
              param_1 = param_1 & *(int *)(iVar5 + 0x58) <<
                                  ((byte)*(undefined4 *)(iVar5 + 0x44) & 0x1f);
            }
            *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) - param_1;
            iVar5 = *(int *)(uVar2 + 0x300);
            pcVar9 = *(char **)(iVar3 + 0x38 + iVar5);
            uVar6 = *(int *)(iVar3 + 0x30 + iVar5) - (int)pcVar9;
            if (uVar6 < param_1) {
              if (uVar6 != 0) {
                if (*(int *)(iVar3 + iVar5 + 0x44) == 0) {
                  pcVar8 = pcStack_c;
                  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
                    pcVar9 = pcVar9 + 4;
                    pcVar8 = pcVar8 + 4;
                  }
                  for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar8 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                    pcVar8 = pcVar8 + 1;
                  }
                  pcStack_c = pcStack_c + uVar6;
                }
                else {
                  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcStack_c = pcVar9[1] + -0x80;
                    pcStack_c = pcStack_c + 1;
                    pcVar9 = pcVar9 + 2;
                  }
                }
              }
              iVar5 = iVar3 + *(int *)(uVar2 + 0x300);
              pcVar9 = *(char **)(iVar5 + 0x2c);
              if (*(int *)(iVar5 + 0x44) == 0) {
                pcVar8 = pcStack_c;
                for (uVar7 = param_1 - uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar8 = pcVar8 + 4;
                }
                for (uVar7 = param_1 - uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar8 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar8 = pcVar8 + 1;
                }
              }
              else {
                pcVar8 = pcStack_c;
                for (uVar7 = param_1 - uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar8 = pcVar9[1] + -0x80;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 2;
                }
              }
              *(uint *)(*(int *)(uVar2 + 0x300) + iVar3 + 0x38) =
                   (*(int *)(*(int *)(uVar2 + 0x300) + 0x2c + iVar3) - uVar6) + param_1;
            }
            else {
              if (*(int *)(iVar3 + iVar5 + 0x44) == 0) {
                pcVar8 = pcStack_c;
                for (uVar6 = param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar8 = pcVar8 + 4;
                }
                for (uVar6 = param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar8 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar8 = pcVar8 + 1;
                }
              }
              else {
                pcVar8 = pcStack_c;
                for (uVar6 = param_1 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar8 = pcVar9[1] + -0x80;
                  pcVar8 = pcVar8 + 1;
                  pcVar9 = pcVar9 + 2;
                }
              }
              piVar1 = (int *)(iVar3 + 0x38 + *(int *)(uVar2 + 0x300));
              *piVar1 = *piVar1 + param_1;
            }
            iVar5 = *(int *)(uVar2 + 0x300) + iVar3;
            if (*(int *)(*(int *)(uVar2 + 0x300) + 0x44 + iVar3) != 0) {
              param_1 = param_1 >> 1;
            }
            (**(code **)(iVar5 + 8))(iVar5,param_1);
            puVar4 = (undefined4 *)(iVar3 + *(int *)(uVar2 + 0x300));
            iVar5 = (*(code *)*puVar4)(puVar4);
          }
          local_8 = local_8 + 1;
          iVar3 = iVar3 + 0x178;
          iVar5 = local_4;
        } while (local_8 < *(uint *)(uVar2 + 0x2f8));
      }
      FUN_0035ae30(DAT_004b1690,iVar5);
    }
  }
  return;
}
