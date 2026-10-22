/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0062276388092FB18921F5684F6303F0EE923DFBB2BE39CEBC2E94C3991D034B
 * Entry: 0x000a80b0, Ghidra index: 2001, label: FUN_000a80b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox VA 0x003a55bc; original label address; definition and semantics pending. */
extern unsigned char LAB_003a55bc;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e7d8;
extern uint32_t PTR_FUN_003a401c;
/* WARNING: Removing unreachable block (ram,0x000a81e1) */
/* WARNING: Removing unreachable block (ram,0x000a81f3) */
/* WARNING: Removing unreachable block (ram,0x000a81fd) */
/* WARNING: Removing unreachable block (ram,0x000a8200) */
/* WARNING: Removing unreachable block (ram,0x000a81ef) */
/* WARNING: Removing unreachable block (ram,0x000a820d) */
/* WARNING: Removing unreachable block (ram,0x000a821e) */
/* WARNING: Removing unreachable block (ram,0x000a8229) */
/* WARNING: Removing unreachable block (ram,0x000a8225) */
/* WARNING: Removing unreachable block (ram,0x000a8219) */
/* WARNING: Removing unreachable block (ram,0x000a822c) */

void FUN_000a80b0(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined1 local_44 [4];
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28 [4];
  undefined1 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)((int)param_3 + 0x19) != '\0') {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = 0;
    pcVar3 = &DAT_0040e7d8;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    FUN_0001fed0(&DAT_0040e7d8,pcVar4 + -0x40e7d8);
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
  FUN_00076220();
  piVar7 = (int *)*param_3;
  if ((*(char *)((int)piVar7 + 0x19) != '\0') || (*(char *)(param_3[2] + 0x19) == '\0')) {
    piVar7 = (int *)param_3[2];
  }
  piVar8 = (int *)param_3[1];
  if (*(char *)((int)piVar7 + 0x19) == '\0') {
    piVar7[1] = (int)piVar8;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar8 == param_3) {
    *piVar8 = (int)piVar7;
  }
  else {
    piVar8[2] = (int)piVar7;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((int *)*puVar1 == param_3) {
    piVar5 = piVar8;
    if (*(char *)((int)piVar7 + 0x19) == '\0') {
      piVar5 = (int *)FUN_000a83f0();
    }
    *puVar1 = piVar5;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar7 + 0x19) == '\0') {
      uVar6 = FUN_000a83d0();
      *(undefined4 *)(iVar2 + 8) = uVar6;
    }
    else {
      *(int **)(iVar2 + 8) = piVar8;
    }
  }
  if ((char)param_3[6] == '\x01') {
    if (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if ((char)piVar7[6] != '\x01') break;
        piVar5 = (int *)*piVar8;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar8[2];
          if ((char)piVar5[6] == '\0') {
            *(undefined1 *)(piVar5 + 6) = 1;
            *(undefined1 *)(piVar8 + 6) = 0;
            FUN_000a7bd0(param_1);
            piVar5 = (int *)piVar8[2];
          }
          if (*(char *)((int)piVar5 + 0x19) == '\0') {
            if ((*(char *)(*piVar5 + 0x18) != '\x01') || (*(char *)(piVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x18) = 1;
                *(undefined1 *)(piVar5 + 6) = 0;
                FUN_000a7c30(param_1);
                piVar5 = (int *)piVar8[2];
              }
              *(char *)(piVar5 + 6) = (char)piVar8[6];
              *(undefined1 *)(piVar8 + 6) = 1;
              *(undefined1 *)(piVar5[2] + 0x18) = 1;
              FUN_000a7bd0(param_1);
              break;
            }
LAB_000a830e:
            *(undefined1 *)(piVar5 + 6) = 0;
          }
        }
        else {
          if ((char)piVar5[6] == '\0') {
            *(undefined1 *)(piVar5 + 6) = 1;
            *(undefined1 *)(piVar8 + 6) = 0;
            FUN_000a7c30(param_1);
            piVar5 = (int *)*piVar8;
          }
          if (*(char *)((int)piVar5 + 0x19) == '\0') {
            if ((*(char *)(piVar5[2] + 0x18) == '\x01') && (*(char *)(*piVar5 + 0x18) == '\x01'))
            goto LAB_000a830e;
            if (*(char *)(*piVar5 + 0x18) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x18) = 1;
              *(undefined1 *)(piVar5 + 6) = 0;
              FUN_000a7bd0(param_1);
              piVar5 = (int *)*piVar8;
            }
            *(char *)(piVar5 + 6) = (char)piVar8[6];
            *(undefined1 *)(piVar8 + 6) = 1;
            *(undefined1 *)(*piVar5 + 0x18) = 1;
            FUN_000a7c30(param_1);
            break;
          }
        }
        bVar9 = piVar8 != *(int **)(*(int *)(param_1 + 4) + 4);
        piVar7 = piVar8;
        piVar8 = (int *)piVar8[1];
      } while (bVar9);
    }
    *(undefined1 *)(piVar7 + 6) = 1;
  }
  piVar7 = (int *)param_3[4];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    param_3[4] = 0;
  }
  piVar7 = (int *)param_3[5];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    param_3[5] = 0;
  }
  piVar7 = (int *)param_3[5];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    param_3[5] = 0;
  }
  piVar7 = (int *)param_3[4];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    param_3[4] = 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_3);
}
