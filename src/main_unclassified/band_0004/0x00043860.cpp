/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4137716AE204535193BF4C10ACC3B394860D9CCAB6D916EC5386F7FBB7DF8D8
 * Entry: 0x00043860, Ghidra index: 525, label: FUN_00043860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_00055aa0(void);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern undefined4 FUN_000233a0(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern uint FUN_0004b940(void);
extern uint FUN_00034b20(int *param_1,float *param_2,float param_3);
extern void FUN_0004e8f0(void);
extern void FUN_00018000(int32_t in_EAX);
extern void FUN_00039f00(int param_1);
extern void FUN_00055b50(void);
extern void FUN_00015fe0(void);
extern void FUN_0005e8b0(int *param_1,char param_2);
extern int FUN_00140a60(int param_1,int *param_2);
extern char FUN_00057360(undefined4 param_1,int param_2,int *param_3);

extern uint32_t DAT_004a5908;
void FUN_00043860(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_c;
  
  if ((((((*(uint *)(param_1 + 0x3c4) & 0x100) != 0) && (*(int *)(param_1 + 0x934) != 0)) &&
       ((*(int *)(param_1 + 0x938) - *(int *)(param_1 + 0x934)) / 0x18 != 0)) &&
      (((*(byte *)(param_1 + 0x800) & 1) == 0 || (*(float *)(param_1 + 0x7fc) <= 0.0)))) &&
     ((iVar9 = FUN_00055aa0(), (*(uint *)(iVar9 + 0x88) & 0x6000) == 0 &&
      ((*(byte *)(&DAT_004a5908 + *(int *)(iVar9 + 0x5c)) & 0x20) == 0)))) {
    FUN_000124f0(0x3f99999a);
    bVar7 = false;
    local_c = 0;
    do {
      if (bVar7) {
        return;
      }
      iVar9 = *(int *)(param_1 + 0x940);
      cVar8 = FUN_000233a0();
      if ((cVar8 != '\0') &&
         (iVar9 = *(int *)(*(int *)(param_1 + 0x934) + (iVar9 + local_c) * 0x18 + 0x14), iVar9 != 0)
         ) {
        piVar10 = (int *)FUN_000120f0();
        puVar1 = *(undefined4 **)(piVar10[2] + 200);
        if (puVar1 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          puVar11 = (undefined4 *)*puVar1;
        }
        for (; puVar11 != puVar1; puVar11 = (undefined4 *)*puVar11) {
          piVar2 = (int *)puVar11[3];
          if (piVar2 != (int *)0x0) {
            if (*(int *)(piVar2[3] + 4) == 0x18) {
              (**(code **)(piVar10[0x6d] + 0x9c))();
              cVar8 = FUN_0004b940();
              if (cVar8 == '\0') goto LAB_00043ac3;
            }
            iVar12 = (**(code **)(*piVar2 + 0x40))();
            fVar3 = *(float *)(iVar9 + 0x1c) - *(float *)(iVar12 + 0x2c);
            fVar5 = *(float *)(iVar9 + 0x18) - *(float *)(iVar12 + 0x28);
            fVar4 = *(float *)(iVar9 + 0x14) - *(float *)(iVar12 + 0x24);
            fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
            if (fVar3 < 256.0) {
              iVar13 = (**(code **)(*piVar10 + 0x40))();
              fVar4 = *(float *)(iVar13 + 0x2c) - *(float *)(iVar12 + 0x2c);
              fVar6 = *(float *)(iVar13 + 0x28) - *(float *)(iVar12 + 0x28);
              fVar5 = *(float *)(iVar13 + 0x24) - *(float *)(iVar12 + 0x24);
              fVar4 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
              if (((fVar4 < 576.0) && (FUN_000124f0(0x3ecccccd), fVar3 < 64.0)) && (fVar4 < 144.0))
              {
                iVar12 = *(int *)(param_1 + 0x58);
                if ((iVar12 == 4) || (iVar12 == 5)) {
                  iVar12 = (**(code **)(*piVar2 + 0x40))();
                  cVar8 = FUN_00034b20(piVar10,iVar12 + 0x24,0x41200000);
                  if (cVar8 != '\0') {
                    FUN_0004e8f0();
                    if (*(int *)(param_1 + 0x58) != 3) {
                      FUN_0004e8f0();
                      *(undefined4 *)(param_1 + 0x58) = 3;
                      FUN_00018000();
                      FUN_00039f00(param_1);
                      FUN_00055b50();
                      FUN_00015fe0();
                      FUN_0001a4e0();
                      iVar9 = FUN_000120f0();
                      if ((iVar9 != 0) && (iVar9 = FUN_000120f0(), *(int *)(iVar9 + 0x59c) != 0)) {
                        FUN_000120f0();
                        uVar15 = 1;
                        uVar14 = FUN_000120f0(1);
                        FUN_0005e8b0(uVar14,uVar15);
                      }
                    }
                    uVar14 = *(undefined4 *)(piVar10[2] + 0xbe8);
LAB_00043ca0:
                    FUN_00140a60(uVar14,piVar10,0x12d51a1c,0);
                    bVar7 = true;
                    break;
                  }
                  cVar8 = FUN_00057360(*(undefined4 *)(piVar10[2] + 0x1f8),piVar10,piVar2);
                  if (cVar8 == '\0') goto LAB_00043ab7;
                  iVar12 = FUN_00024540(param_1,0xe,2,piVar2,0,0x3f99999a,0);
                  if (iVar12 == 1) {
                    iVar12 = FUN_00055aa0();
                    *(uint *)(iVar12 + 0x88) = *(uint *)(iVar12 + 0x88) | 2;
                  }
                }
                else if (iVar12 == 1) {
                  cVar8 = FUN_00057360(*(undefined4 *)(piVar10[2] + 0x1f8),piVar10,piVar2);
                  if (cVar8 != '\0') {
                    FUN_0004e8f0();
                    if (*(int *)(param_1 + 0x58) != 3) {
                      FUN_0004e8f0();
                      *(undefined4 *)(param_1 + 0x58) = 3;
                      FUN_00018000();
                      FUN_00039f00(param_1);
                      FUN_00055b50();
                      FUN_00015fe0();
                      FUN_0001a4e0();
                      iVar9 = FUN_000120f0();
                      if ((iVar9 != 0) && (iVar9 = FUN_000120f0(), *(int *)(iVar9 + 0x59c) != 0)) {
                        FUN_000120f0();
                        uVar15 = 1;
                        uVar14 = FUN_000120f0(1);
                        FUN_0005e8b0(uVar14,uVar15);
                      }
                    }
                    uVar14 = *(undefined4 *)(piVar10[2] + 0xbe8);
                    goto LAB_00043ca0;
                  }
LAB_00043ab7:
                  FUN_000124f0(0x3ecccccd);
                }
              }
            }
          }
LAB_00043ac3:
        }
      }
      local_c = local_c + 1;
    } while (local_c < 3);
  }
  return;
}
