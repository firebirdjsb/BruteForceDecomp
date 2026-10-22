/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F76D570E558605D5224F3A28E5C21D2223F9553DFCD4550B3093DBF294E6223C
 * Entry: 0x0013c1c0, Ghidra index: 4002, label: FUN_0013c1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0013c1c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float10 fVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iStack_28;
  
  piVar1 = (int *)param_1[6];
  if ((piVar1 != (int *)0x0) && (cVar10 = FUN_00123080(piVar1,1), cVar10 != '\0')) {
    iVar2 = *(int *)(piVar1[2] + 0x204);
    iVar3 = *(int *)(iVar2 + 0x3c);
    *(int *)(iVar2 + 0x3c) = iVar3 + 1;
    iVar11 = (**(code **)(*piVar1 + 0x40))();
    FUN_000d1420(param_1[0xf]);
joined_r0x0013c26d:
    if (iStack_28 != 0) {
      for (puVar4 = *(undefined4 **)(iStack_28 + 0x1c); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        piVar5 = *(int **)((uint)*(ushort *)(puVar4 + 2) * 0x10 + 0xc + *(int *)(iVar2 + 0x14));
        if ((((piVar5 != (int *)0x0) && (iVar12 = piVar5[6], piVar5[6] = iVar3, iVar12 != iVar3)) &&
            (*(int *)(piVar5[3] + 4) == 3)) &&
           ((((piVar1[0x167] == 0 || (piVar5[0x167] == 0)) ||
             (cVar10 = FUN_0005beb0(), cVar10 == '\0')) && ((*(byte *)(piVar5 + 0x1f6) & 3) == 0))))
        {
          iVar12 = (**(code **)(*piVar5 + 0x40))();
          fVar6 = *(float *)(iVar12 + 0x2c) - *(float *)(iVar11 + 0x2c);
          fVar7 = *(float *)(iVar12 + 0x28) - *(float *)(iVar11 + 0x28);
          fVar8 = *(float *)(iVar12 + 0x24) - *(float *)(iVar11 + 0x24);
          fVar9 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6;
          if ((1.4210855e-14 < fVar9) && (fVar9 < (float)param_1[0xf] * (float)param_1[0xf])) {
            fVar14 = (float10)fcos((float10)(float)param_1[0x10] * (float10)0.017453292);
            (**(code **)(*piVar1 + 0x40))();
            pfVar13 = (float *)FUN_0001fdd0();
            if (SQRT(fVar9) * (float)fVar14 <=
                -(fVar8 * *pfVar13 + fVar7 * pfVar13[1] + fVar6 * pfVar13[2])) {
              FUN_00140a60(*(undefined4 *)(*(int *)(param_1[6] + 8) + 0xbe8),param_1[6],0x13601f7b,0
                          );
              FUN_0010e7a0(param_1,100,1);
              uVar18 = 0x3f800000;
              (**(code **)(*piVar5 + 0x40))(0x3f800000);
              (**(code **)(*param_1 + 0x134))();
              FUN_000def50(uVar18);
              FUN_00223160(param_1[0x11],10);
              param_1[0xb] = param_1[10];
              if ((*(byte *)(piVar5 + 0x1c) & 1) != 0) {
                uVar19 = 0x3f800000;
                puVar17 = &DAT_0046d064;
                piVar16 = piVar5;
                uVar18 = (**(code **)(*piVar5 + 0x40))(piVar5,&DAT_0046d064,0x3f800000);
                uVar15 = 1;
                (**(code **)(*param_1 + 0x138))(1,uVar18);
                FUN_000defa0(uVar15,uVar18,piVar16,puVar17,uVar19);
                cVar10 = FUN_000d44a0();
                if (cVar10 != '\0') {
                  (**(code **)(*piVar1 + 0x54))();
                  FUN_000e00b0(piVar5[2],piVar5,param_1[0xd],0,param_1[0xe]);
                }
              }
            }
          }
        }
      }
      do {
        cVar10 = FUN_000d14d0();
        if (cVar10 == '\0') {
          iStack_28 = 0;
          break;
        }
      } while (iStack_28 == 0);
      goto joined_r0x0013c26d;
    }
  }
  return;
}
