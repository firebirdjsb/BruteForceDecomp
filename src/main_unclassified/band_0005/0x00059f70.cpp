/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39B5196049C9728F69B6602BDC876CF761C1DBC3A26CA137D2702E90D18E4589
 * Entry: 0x00059f70, Ghidra index: 901, label: FUN_00059f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00064490(void);
extern void FUN_0004e150(int param_1,int param_2,int param_3);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_00059b60(void);
extern unkbyte10 FUN_0005a6e0(char param_1);
extern void FUN_0004ce30(void);
extern int FUN_000e1910(void);
extern void FUN_000389d0(void);

extern uint32_t DAT_00414da0;
undefined4 FUN_00059f70(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  float10 fVar14;
  char cStack_49;
  int local_44;
  int iStack_38;
  int *piStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  int *piStack_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  piVar12 = *(int **)(param_1 + 0x114);
  piVar11 = (int *)0x0;
  local_10 = (int *)0x0;
  local_c = 0;
  local_8 = 0;
  if ((piVar12 != (int *)0x0) && (piVar13 = (int *)*piVar12, piVar13 != piVar12)) {
    do {
      piVar12 = (int *)piVar13[3];
      if (piVar12 != (int *)0x0) {
        local_18 = param_2[2] - (float)piVar12[7];
        fVar1 = param_2[1];
        fVar2 = (float)piVar12[6];
        fVar3 = *param_2;
        fVar4 = (float)piVar12[5];
        fVar5 = local_18 * local_18;
        fVar14 = (float10)(**(code **)(*piVar12 + 0x44))();
        fVar1 = (float)((float10)SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                                      (fVar3 - fVar4) * (fVar3 - fVar4) + fVar5) - fVar14);
        if ((fVar1 <= param_3) &&
           (fVar2 = param_2[1], fVar3 = (float)piVar12[6],
           fVar14 = (float10)(**(code **)(*piVar12 + 0x4c))(), (float10)ABS(fVar2 - fVar3) <= fVar14
           )) {
          piStack_34 = piVar12;
          fStack_30 = fVar1;
          FUN_00064490();
          piVar11 = local_10;
        }
      }
      piVar13 = (int *)*piVar13;
    } while (piVar13 != (int *)*(int *)(param_1 + 0x114));
  }
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  iVar7 = local_c - (int)piVar11 >> 3;
  if (iVar7 != 0) {
    FUN_0004e150(piVar11,local_c,iVar7);
    iVar7 = FUN_002ea01d(0x38);
    if (iVar7 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)FUN_00059b60();
    }
    puVar8[1] = 0xf8659c26;
    puVar8[9] = puVar8[9] | 0x1000;
    (**(code **)(puVar8[2] + 8))(param_2);
    local_44 = 0;
    piVar12 = piVar11;
    if (piVar11 != local_10) {
      do {
        if (5 < local_44) break;
        if ((undefined4 *)puVar8[0xc] == (undefined4 *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = *(int **)puVar8[0xc];
        }
        if (piVar11 != (int *)puVar8[0xc]) {
          do {
            iVar7 = piVar11[3];
            if ((iVar7 != 0) && (iVar10 = *piVar12, iVar10 != 0)) {
              fStack_1c = *(float *)(iVar7 + 0x1c) - (float)puVar8[7];
              fStack_20 = *(float *)(iVar7 + 0x18) - (float)puVar8[6];
              fStack_24 = *(float *)(iVar7 + 0x14) - (float)puVar8[5];
              fStack_28 = *(float *)(iVar10 + 0x1c) - (float)puVar8[7];
              fStack_2c = *(float *)(iVar10 + 0x18) - (float)puVar8[6];
              fStack_30 = *(float *)(iVar10 + 0x14) - (float)puVar8[5];
              if ((1.1920929e-07 <=
                   fStack_24 * fStack_24 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) &&
                 ((1.1920929e-07 <=
                   fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28 &&
                  (fVar14 = (float10)FUN_0005a6e0(1), fVar14 * (float10)57.295776 < (float10)25.0)))
                 ) goto LAB_0005a2fd;
            }
            piVar11 = (int *)*piVar11;
          } while (piVar11 != (int *)puVar8[0xc]);
        }
        cVar6 = FUN_0004ce30(param_1,*piVar12 + 0x14,(float)piVar12[1] + 0.05);
        if (cVar6 != '\0') {
          piVar11 = (int *)*piVar12;
          cStack_49 = '\x01';
          piStack_34 = (int *)0x0;
          if ((piVar11 != (int *)0x0) && (piStack_34 = piVar11, ((uint)piVar11 & 1) == 0)) {
            uVar9 = (int)piVar11 * 0x19660d + 0x3c6ef35fU >> 0x15;
            iStack_38 = *(int *)(&DAT_00414da0 + uVar9 * 4);
            *(int **)(&DAT_00414da0 + uVar9 * 4) = &iStack_38;
          }
          iVar7 = puVar8[0xc];
          iVar10 = FUN_000e1910(puVar8 + 0xb,iVar7,*(undefined4 *)(iVar7 + 4),&iStack_38);
          FUN_000389d0();
          *(int *)(iVar7 + 4) = iVar10;
          **(int **)(iVar10 + 4) = iVar10;
          if ((piStack_34 != (int *)0x0) && (((uint)piStack_34 & 1) == 0)) {
            iVar10 = (int)piStack_34 * 0x19660d;
            piStack_34 = (int *)0x0;
            iVar7 = *(int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
            piVar11 = (int *)(&DAT_00414da0 + (iVar10 + 0x3c6ef35fU >> 0x15) * 4);
            while (iVar7 != 0) {
              piVar13 = (int *)*piVar11;
              if (piVar13 == &iStack_38) {
                *piVar11 = *(int *)*piVar11;
                break;
              }
              piVar11 = piVar13;
              iVar7 = *piVar13;
            }
          }
        }
LAB_0005a2fd:
        piVar12 = piVar12 + 2;
        local_44 = local_44 + 1;
        piVar11 = piStack_14;
      } while (piVar12 != local_10);
      if (cStack_49 != '\0') {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar11);
      }
    }
    (**(code **)*puVar8)(1);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar11);
}
