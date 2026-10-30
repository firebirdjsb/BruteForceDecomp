/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C0B84F3AB3CA6B2FC0FB961A62E5EBB42988FAF6EEC32EEC7702E2F67B7F1EE
 * Entry: 0x0010f040, Ghidra index: 3524, label: FUN_0010f040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x003a55bc; extern label; definition/role pending. */
extern unsigned char LAB_003a55bc;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e7d8;
extern uint32_t PTR_FUN_003a401c;
/* WARNING: Removing unreachable block (ram,0x0010f176) */
/* WARNING: Removing unreachable block (ram,0x0010f188) */
/* WARNING: Removing unreachable block (ram,0x0010f192) */
/* WARNING: Removing unreachable block (ram,0x0010f195) */
/* WARNING: Removing unreachable block (ram,0x0010f184) */
/* WARNING: Removing unreachable block (ram,0x0010f1a2) */
/* WARNING: Removing unreachable block (ram,0x0010f1b3) */
/* WARNING: Removing unreachable block (ram,0x0010f1be) */
/* WARNING: Removing unreachable block (ram,0x0010f1ba) */
/* WARNING: Removing unreachable block (ram,0x0010f1ae) */
/* WARNING: Removing unreachable block (ram,0x0010f1c1) */

void FUN_0010f040(int param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined1 local_44 [4];
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28 [4];
  undefined1 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)((int)param_3 + 0x25) != '\0') {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = 0;
    pcVar1 = &DAT_0040e7d8;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    FUN_0001fed0(&DAT_0040e7d8,pcVar2 + -0x40e7d8);
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
  FUN_0025dde0();
  piVar5 = (int *)*param_3;
  if ((*(char *)((int)piVar5 + 0x25) != '\0') || (*(char *)(param_3[2] + 0x25) == '\0')) {
    piVar5 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
    piVar5[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar5;
  }
  else if ((int *)*piVar6 == param_3) {
    *piVar6 = (int)piVar5;
  }
  else {
    piVar6[2] = (int)piVar5;
  }
  if ((int *)**(undefined4 **)(param_1 + 4) == param_3) {
    piVar3 = piVar6;
    if (*(char *)((int)piVar5 + 0x25) == '\0') {
      piVar3 = (int *)FUN_0025d880();
    }
    **(undefined4 **)(param_1 + 4) = piVar3;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
    if (*(char *)((int)piVar5 + 0x25) == '\0') {
      uVar4 = FUN_0025d860();
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = uVar4;
    }
    else {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar6;
    }
  }
  if ((char)param_3[9] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if ((char)piVar5[9] != '\x01') break;
        piVar3 = (int *)*piVar6;
        if (piVar5 == piVar3) {
          piVar3 = (int *)piVar6[2];
          if ((char)piVar3[9] == '\0') {
            *(undefined1 *)(piVar3 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            FUN_0010f400(param_1);
            piVar3 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar3 + 0x25) == '\0') {
            if ((*(char *)(*piVar3 + 0x24) != '\x01') || (*(char *)(piVar3[2] + 0x24) != '\x01')) {
              if (*(char *)(piVar3[2] + 0x24) == '\x01') {
                *(undefined1 *)(*piVar3 + 0x24) = 1;
                *(undefined1 *)(piVar3 + 9) = 0;
                FUN_0025d8a0(param_1);
                piVar3 = (int *)piVar6[2];
              }
              *(char *)(piVar3 + 9) = (char)piVar6[9];
              *(undefined1 *)(piVar6 + 9) = 1;
              *(undefined1 *)(piVar3[2] + 0x24) = 1;
              FUN_0010f400(param_1);
              break;
            }
LAB_0010f296:
            *(undefined1 *)(piVar3 + 9) = 0;
          }
        }
        else {
          if ((char)piVar3[9] == '\0') {
            *(undefined1 *)(piVar3 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            FUN_0025d8a0(param_1);
            piVar3 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar3 + 0x25) == '\0') {
            if ((*(char *)(piVar3[2] + 0x24) == '\x01') && (*(char *)(*piVar3 + 0x24) == '\x01'))
            goto LAB_0010f296;
            if (*(char *)(*piVar3 + 0x24) == '\x01') {
              *(undefined1 *)(piVar3[2] + 0x24) = 1;
              *(undefined1 *)(piVar3 + 9) = 0;
              FUN_0010f400(param_1);
              piVar3 = (int *)*piVar6;
            }
            *(char *)(piVar3 + 9) = (char)piVar6[9];
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(*piVar3 + 0x24) = 1;
            FUN_0025d8a0(param_1);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)(param_1 + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 9) = 1;
  }
  if (param_3[7] != 0) {
    FUN_0008f6e0();
  }
  if (param_3[5] != 0) {
    FUN_0008f6e0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_3);
}
