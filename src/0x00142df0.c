/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7F3AB3D4A831BA9AE2BD57B725E494588E86582036F510C898FA1B55E7BDFE2
 * Entry: 0x00142df0, Ghidra index: 4138, label: FUN_00142df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_003c0290;
extern uint32_t DAT_0040c938;
extern uint32_t *DAT_00443314;
extern uint32_t PTR_DAT_003c02e8;
extern uint32_t UNK_001432e1;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00142df0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  char *****pppppcVar13;
  float *pfVar14;
  int iVar15;
  int unaff_ESI;
  int in_stack_ffffff0c;
  float *in_stack_ffffff10;
  int *piStack_ec;
  char ****ppppcStack_e8;
  int *local_e4;
  float *pfStack_e0;
  int iStack_cc;
  float fStack_c8;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  char ****ppppcStack_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94;
  int local_90;
  float *local_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_c;
  int *piStack_4;
  
  pfStack_e0 = (float *)0x142e06;
  local_b8 = (float)FUN_002383b0();
  local_e4 = *(int **)(param_1 + 8);
  pfStack_e0 = (float *)0x16;
  ppppcStack_e8 = (char ****)param_1;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0xffffffff;
  local_8c = (float *)0x3f800000;
  piStack_ec = (int *)0x142e4e;
  FUN_001442a0();
  pfStack_e0 = &local_b8;
  local_e4 = DAT_00443314;
  ppppcStack_e8 = (char ****)0x142e5e;
  iVar4 = (**(code **)(*DAT_00443314 + 0x18))();
  piStack_4[0xc] = iVar4;
  iVar4 = piStack_4[0xc];
  if (iVar4 == 0) {
    if (piStack_4[1] == 0) {
      piStack_4[1] = 0;
      piStack_4[2] = 0;
      piStack_4[3] = 0;
      return;
    }
    piStack_ec = piStack_4;
    FUN_00144b90(piStack_4[2]);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piStack_4[1]);
  }
  for (piVar7 = *(int **)(iVar4 + 8); piVar7 != *(int **)(iVar4 + 0xc); piVar7 = piVar7 + 1) {
    if (*(int *)(*piVar7 + 0x14) == 0xf896415) {
      iVar4 = *piVar7;
      goto LAB_00142ea0;
    }
  }
  iVar4 = 0;
LAB_00142ea0:
  if (*(int *)(iVar4 + 0x1c) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 4;
  }
  if (0 < iVar5) {
    iVar15 = 0;
    do {
      iVar2 = *(int *)(iVar4 + 0x1c);
      piVar7 = *(int **)(iVar2 + 0xc + iVar15);
      ppppcStack_e8 = (char ****)0x0;
      piStack_ec = piVar7;
      in_stack_ffffff0c = (**(code **)(*piVar7 + 0x1c))();
      iVar4 = *piVar7;
      in_stack_ffffff10 = &fStack_60;
      uVar6 = (**(code **)(iVar4 + 0x14))
                        (piVar7,in_stack_ffffff0c,in_stack_ffffff0c,in_stack_ffffff10);
      (**(code **)(unaff_ESI + 0x24))(piVar7,0,uVar6);
      piVar7 = (int *)(**(code **)(*piVar7 + 0x10))(piVar7,&piStack_ec);
      if (*piVar7 == 0x6677bcb) {
        fStack_bc = fStack_54;
        fStack_b0 = fStack_58;
        uStack_84 = 0;
        local_b8 = fStack_50;
        fStack_b4 = fStack_4c;
      }
      else if (*piVar7 == -0xc9277f0) {
        fStack_bc = fStack_58;
        fStack_b0 = 0.0;
        uStack_84 = 1;
        local_b8 = fStack_54;
        fStack_b4 = fStack_50;
      }
      fStack_88 = *(float *)(iVar2 + 4 + iVar15);
      ppppcStack_e8 = (char ****)0x142f8d;
      FUN_00183a90();
      ppppcStack_e8 = (char ****)0x142fa0;
      FUN_00143f20();
      iVar15 = iVar15 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar4 = 0;
  iStack_cc = 0;
  do {
    iVar5 = piStack_4[1];
    *(undefined4 *)(iVar5 + iStack_cc) = (&DAT_003c0290)[iVar4];
    *(int *)(iVar5 + 0x14 + iStack_cc) = iVar4;
    FUN_00143ea0(in_stack_ffffff0c,in_stack_ffffff10);
    piStack_ec = *(int **)(iVar5 + 8 + iStack_cc);
    in_stack_ffffff0c = piStack_4[5];
    piVar7 = (int *)(iVar5 + 8 + iStack_cc);
    ppppcStack_e8 = (char ****)fStack_c8;
    FUN_001449c0(in_stack_ffffff0c,piStack_4[6]);
    local_94 = 0xf;
    local_98 = 0;
    ppppcStack_a8 = (char ****)((uint)ppppcStack_a8 & 0xffffff00);
    pcVar9 = &DAT_0040c938;
    do {
      pcVar8 = pcVar9;
      pcVar9 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    ppppcStack_e8 = (char ****)(pcVar8 + -0x40c938);
    piStack_ec = (int *)&DAT_0040c938;
    in_stack_ffffff10 = (float *)0x143070;
    FUN_0001fed0();
    pcVar9 = (&PTR_DAT_003c02e8)[iVar4];
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    ppppcStack_e8 = (char ****)0x143092;
    FUN_00087af0();
    if (local_94 < 0x10) {
      pppppcVar13 = &ppppcStack_a8;
LAB_001430ab:
      uVar10 = 0xffffffff;
      cVar1 = *(char *)pppppcVar13;
      while (cVar1 != '\0') {
        uVar10 = uVar10 >> 8 ^
                 *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar1] ^ uVar10) & 0xff) * 4);
        pcVar9 = (char *)((int)pppppcVar13 + 1);
        pppppcVar13 = (char *****)((int)pppppcVar13 + 1);
        cVar1 = *pcVar9;
      }
      uVar10 = ~uVar10;
    }
    else {
      pppppcVar13 = (char *****)ppppcStack_a8;
      if ((char *****)ppppcStack_a8 != (char *****)0x0) goto LAB_001430ab;
      uVar10 = 0;
    }
    for (piVar11 = *(int **)(piStack_4[0xc] + 8); piVar11 != *(int **)(piStack_4[0xc] + 0xc);
        piVar11 = piVar11 + 1) {
      if (*(uint *)(*piVar11 + 0x14) == uVar10) {
        iStack_7c = *piVar11;
        if (((iStack_7c != 0) && (*(int *)(iStack_7c + 0x1c) != 0)) &&
           (iVar5 = *(int *)(iStack_7c + 0x20) - *(int *)(iStack_7c + 0x1c) >> 4, 0 < iVar5)) {
          iVar15 = 0;
          local_90 = iVar5;
          do {
            iVar5 = *(int *)(iStack_7c + 0x1c);
            piVar11 = *(int **)(iVar5 + 0xc + iVar15);
            ppppcStack_e8 = (char ****)0x0;
            piStack_ec = piVar11;
            in_stack_ffffff0c = (**(code **)(*piVar11 + 0x1c))();
            iStack_cc = *piVar11;
            in_stack_ffffff10 = &fStack_60;
            uVar6 = (**(code **)(iStack_cc + 0x14))(piVar11,in_stack_ffffff0c);
            (*(code *)piVar7[9])(piVar11,0,uVar6);
            piVar11 = (int *)piStack_4[9];
            piVar3 = (int *)piStack_4[10];
            if (piVar11 != piVar3) {
              piVar12 = piVar11;
              do {
                if (*piVar12 == *(int *)(iVar5 + iVar15 + 4)) break;
                piVar12 = piVar12 + 2;
              } while (piVar12 != piVar3);
              if (piVar12 != piVar3) {
                iVar5 = (int)piVar12 - (int)piVar11 >> 3;
                if (piVar12[1] == 0) {
                  fStack_c8 = fStack_4c;
                  fStack_88 = fStack_50;
                  fStack_80 = fStack_54;
                  fStack_64 = fStack_54;
                  fStack_60 = fStack_50;
                  fStack_5c = fStack_4c;
                  pfVar14 = (float *)(iVar5 * 0x10 + *piVar7);
                  pfVar14[3] = fStack_58;
                  *pfVar14 = fStack_54;
                  pfVar14[1] = fStack_50;
                  pfVar14[2] = fStack_4c;
                }
                else if (piVar12[1] == 1) {
                  fStack_bc = fStack_58;
                  iVar5 = iVar5 * 0x10;
                  local_b8 = fStack_54;
                  fStack_b4 = fStack_50;
                  fStack_b0 = 0.0;
                  pfVar14 = (float *)(piStack_4[5] + iVar5);
                  local_8c = &fStack_bc;
                  fStack_78 = fStack_58 - *pfVar14;
                  fStack_74 = fStack_54 - pfVar14[1];
                  fStack_70 = fStack_50 - pfVar14[2];
                  fStack_6c = 0.0 - pfVar14[3];
                  pfVar14 = (float *)(*piVar7 + iVar5);
                  pfVar14[1] = fStack_74;
                  pfVar14[2] = fStack_70;
                  *pfVar14 = fStack_78;
                  pfVar14[3] = fStack_6c;
                  fStack_c = fStack_6c;
                }
              }
            }
            iVar15 = iVar15 + 0x10;
            local_90 = local_90 + -1;
          } while (local_90 != 0);
          local_90 = 0;
        }
        break;
      }
    }
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      piStack_ec = (int *)&UNK_001432e1;
      ppppcStack_e8 = ppppcStack_a8;
      thunk_FUN_00237ec0();
    }
    iStack_cc = iStack_cc + 0x1c;
    iVar4 = iVar4 + 1;
    local_94 = 0xf;
    local_98 = 0;
    ppppcStack_a8 = (char ****)((uint)ppppcStack_a8 & 0xffffff00);
    if (0x267 < iStack_cc) {
      return;
    }
  } while( true );
}
