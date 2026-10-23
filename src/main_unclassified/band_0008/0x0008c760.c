/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF6DF5BF73781BA634A9B5E6A1612C32E99405A5714463C1EE58B4528F611EB1
 * Entry: 0x0008c760, Ghidra index: 1702, label: FUN_0008c760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_00469b58;
void FUN_0008c760(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_0008c380(param_1);
  }
  iVar9 = 1;
  do {
    uVar3 = (**(code **)(*param_1 + 8))(iVar9);
    iVar5 = DAT_00469b58;
    if (uVar3 != 0) {
      if ((*(byte *)(uVar3 + 0x6c) & 0x20) != 0) {
        *(byte *)(uVar3 + 0x6c) = *(byte *)(uVar3 + 0x6c) & 0xdf;
        pbVar4 = (byte *)(**(code **)(**(int **)(iVar5 + 8) + 0x130))(iVar9);
        if (pbVar4 != (byte *)0x0) {
          *pbVar4 = *pbVar4 | 0x3d;
        }
        cVar2 = FUN_0008a890(uVar3);
        if (cVar2 == '\0') {
          iVar5 = FUN_0008aa90(uVar3);
          if (iVar5 != 0) {
            FUN_0008a720(uVar3,iVar5);
          }
          *(byte *)(uVar3 + 0x6c) = *(byte *)(uVar3 + 0x6c) | 1;
          FUN_0008ba30(uVar3);
        }
        iVar5 = *(int *)(param_1[0x12] + 0xc4c);
        if ((iVar5 == 0) || (*(int *)(iVar5 + 0x14) != 0x62bd076)) {
          iVar5 = 0;
        }
        iVar6 = 0;
        piVar8 = (int *)(*(int *)(uVar3 + 8) * 0x20 + 0x58 + iVar5);
        do {
          if (*piVar8 == 0) {
            iVar6 = iVar6 + *(int *)(uVar3 + 8) * 4;
            uVar7 = *(uint *)(iVar5 + 0x58 + iVar6 * 8);
            puVar1 = (undefined4 *)(iVar5 + 0x54 + iVar6 * 8);
            if (uVar7 != uVar3) {
              if (uVar7 != 0) {
                FUN_0008f6e0();
              }
              puVar1[1] = uVar3;
              if ((uVar3 & 1) == 0) {
                uVar7 = uVar3 * 0x19660d + 0x3c6ef35f >> 0x15;
                *puVar1 = *(undefined4 *)(&DAT_00414da0 + uVar7 * 4);
                *(undefined4 **)(&DAT_00414da0 + uVar7 * 4) = puVar1;
              }
            }
            break;
          }
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar6 < 4);
      }
      if ((*(byte *)(uVar3 + 0x6c) & 8) == 0) {
        FUN_0008a2b0(param_2);
      }
      else {
        (**(code **)(*param_1 + 0x38))(iVar9);
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x144))(iVar9);
        (**(code **)(*param_1 + 0x1c))();
      }
    }
    iVar9 = iVar9 + 1;
    if (8 < iVar9) {
      return;
    }
  } while( true );
}
