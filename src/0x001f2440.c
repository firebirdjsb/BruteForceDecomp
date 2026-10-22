/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E1223150655F6D6EBDA812031BAED01445BF45DE659CF451E953EB7A4297E3D
 * Entry: 0x001f2440, Ghidra index: 7003, label: FUN_001f2440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_mapped_data_addresses_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e7d8;
extern uint32_t PTR_FUN_003a401c;
void FUN_001f2440(uint param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  undefined1 local_44 [4];
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28 [4];
  undefined1 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar4 = param_3;
  if (*(char *)((int)param_3 + 0x2d) != '\0') {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = 0;
    pcVar5 = &DAT_0040e7d8;
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    FUN_0001fed0(&DAT_0040e7d8,pcVar6 + -0x40e7d8);
    FUN_002ea02b();
    local_28[0] = &PTR_FUN_003a401c;
    local_4 = 0xf;
    local_8 = 0;
    local_18 = 0;
    FUN_0001f4f0(local_44,0,0xffffffff);
    local_28[0] = &PTR_FUN_003a401c;
                    /* WARNING: Subroutine does not return */
    FUN_002fe573(local_28,&LAB_003a55bc);
  }
  FUN_00270df0();
  uVar3 = param_1;
  piVar9 = (int *)*piVar4;
  piVar7 = piVar4 + 2;
  piVar11 = piVar4;
  if (*(char *)((int)piVar9 + 0x2d) == '\0') {
    if (*(char *)(*piVar7 + 0x2d) != '\0') goto LAB_001f24ff;
    piVar7 = param_3 + 2;
    piVar11 = param_3;
  }
  piVar9 = (int *)*piVar7;
LAB_001f24ff:
  if (piVar11 == piVar4) {
    piVar10 = (int *)piVar4[1];
    if (*(char *)((int)piVar9 + 0x2d) == '\0') {
      piVar9[1] = (int)piVar10;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar4) {
      *(int **)(*(int *)(param_1 + 4) + 4) = piVar9;
    }
    else if ((int *)*piVar10 == piVar4) {
      *piVar10 = (int)piVar9;
    }
    else {
      piVar10[2] = (int)piVar9;
    }
    if ((int *)**(undefined4 **)(param_1 + 4) == piVar4) {
      piVar7 = piVar10;
      if (*(char *)((int)piVar9 + 0x2d) == '\0') {
        piVar7 = (int *)FUN_00270dd0();
      }
      **(undefined4 **)(uVar3 + 4) = piVar7;
    }
    if (*(int **)(*(int *)(uVar3 + 4) + 8) == piVar4) {
      if (*(char *)((int)piVar9 + 0x2d) == '\0') {
        uVar8 = FUN_00270d60();
        *(undefined4 *)(*(int *)(uVar3 + 4) + 8) = uVar8;
      }
      else {
        *(int **)(*(int *)(uVar3 + 4) + 8) = piVar10;
      }
    }
  }
  else {
    *(int **)(*piVar4 + 4) = piVar11;
    *piVar11 = *piVar4;
    piVar10 = piVar11;
    if (piVar11 != (int *)piVar4[2]) {
      piVar10 = (int *)piVar11[1];
      if (*(char *)((int)piVar9 + 0x2d) == '\0') {
        piVar9[1] = (int)piVar10;
      }
      *piVar10 = (int)piVar9;
      *piVar7 = piVar4[2];
      *(int **)(piVar4[2] + 4) = piVar11;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == piVar4) {
      *(int **)(*(int *)(param_1 + 4) + 4) = piVar11;
    }
    else {
      puVar1 = (undefined4 *)piVar4[1];
      if ((int *)*puVar1 == piVar4) {
        *puVar1 = piVar11;
      }
      else {
        puVar1[2] = piVar11;
      }
    }
    piVar11[1] = piVar4[1];
    iVar2 = piVar11[0xb];
    *(char *)(piVar11 + 0xb) = (char)piVar4[0xb];
    *(char *)(piVar4 + 0xb) = (char)iVar2;
  }
  if ((char)piVar4[0xb] == '\x01') {
    if (piVar9 != *(int **)(*(int *)(uVar3 + 4) + 4)) {
      do {
        if ((char)piVar9[0xb] != '\x01') break;
        piVar7 = (int *)*piVar10;
        if (piVar9 == piVar7) {
          piVar7 = (int *)piVar10[2];
          if ((char)piVar7[0xb] == '\0') {
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar10 + 0xb) = 0;
            FUN_00270c40(uVar3);
            piVar7 = (int *)piVar10[2];
          }
          if (*(char *)((int)piVar7 + 0x2d) == '\0') {
            if ((*(char *)(*piVar7 + 0x2c) != '\x01') || (*(char *)(piVar7[2] + 0x2c) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x2c) == '\x01') {
                *(undefined1 *)(*piVar7 + 0x2c) = 1;
                *(undefined1 *)(piVar7 + 0xb) = 0;
                FUN_00270ca0(uVar3);
                piVar7 = (int *)piVar10[2];
              }
              *(char *)(piVar7 + 0xb) = (char)piVar10[0xb];
              *(undefined1 *)(piVar10 + 0xb) = 1;
              *(undefined1 *)(piVar7[2] + 0x2c) = 1;
              FUN_00270c40(uVar3);
              break;
            }
LAB_001f2696:
            *(undefined1 *)(piVar7 + 0xb) = 0;
          }
        }
        else {
          if ((char)piVar7[0xb] == '\0') {
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar10 + 0xb) = 0;
            FUN_00270ca0(uVar3);
            piVar7 = (int *)*piVar10;
          }
          if (*(char *)((int)piVar7 + 0x2d) == '\0') {
            if ((*(char *)(piVar7[2] + 0x2c) == '\x01') && (*(char *)(*piVar7 + 0x2c) == '\x01'))
            goto LAB_001f2696;
            if (*(char *)(*piVar7 + 0x2c) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x2c) = 1;
              *(undefined1 *)(piVar7 + 0xb) = 0;
              FUN_00270c40(uVar3);
              piVar7 = (int *)*piVar10;
            }
            *(char *)(piVar7 + 0xb) = (char)piVar10[0xb];
            *(undefined1 *)(piVar10 + 0xb) = 1;
            *(undefined1 *)(*piVar7 + 0x2c) = 1;
            FUN_00270ca0(uVar3);
            break;
          }
        }
        bVar12 = piVar10 != *(int **)(*(int *)(uVar3 + 4) + 4);
        piVar9 = piVar10;
        piVar10 = (int *)piVar10[1];
      } while (bVar12);
    }
    *(undefined1 *)(piVar9 + 0xb) = 1;
  }
  if ((uint)piVar4[9] < 0x10) {
    piVar4[9] = 0xf;
    param_1 = param_1 & 0xffffff00;
    piVar4[8] = 0;
    uVar8 = FUN_0001f4d0(&param_1);
    FUN_0001f4e0(uVar8);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar4);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar4[4]);
}
