/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 762D235EBA97653EA681FA7726DE9FCF54CD4D582A8662525AAC0420ED6163F7
 * Entry: 0x000bf7a0, Ghidra index: 2333, label: FUN_000bf7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c053c;
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_LAB_0039f73c;
/* XBE 0x000BF8B2 pushes 0x000A3D50 as a callback to 0x0001FE40.
 * Target 0x000A3D50 is MOV EAX,ECX; RET (guest32 register identity).
 * Host callback calling convention is NOT established by this declaration. */
extern uint32_t FUN_000a3d50(uint32_t guest_ecx);
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_000bf7a0(int param_1,int param_2,int *param_3,undefined4 *param_4,float *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  int iStack_1e8;
  int *piStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int *piStack_19c;
  int *local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 auStack_180 [24];
  undefined **appuStack_120 [65];
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  cVar5 = FUN_000bf6d0(param_1,param_2);
  if (cVar5 == '\0') {
    return 0;
  }
  iVar9 = *(int *)(param_2 + 0xe0);
  iVar8 = *(int *)(iVar9 + 0x2e8);
  piVar1 = *(int **)(param_2 + 0x10);
  local_198 = piVar1;
  cVar5 = (**(code **)(*(int *)(iVar8 + 0x144) + 0x20))();
  if ((((cVar5 != '\0') && (iStack_1ac = *(int *)(iVar8 + 0x164), iStack_1ac != 0)) &&
      (*(int *)(*(int *)(iStack_1ac + 0xc) + 4) == 0x14)) && (iStack_1ac != 0)) {
    iVar8 = *(int *)(iVar9 + 0x2e8);
    cVar5 = (**(code **)(*(int *)(iVar8 + 0x178) + 0x20))();
    if (cVar5 == '\0') {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x198);
    }
    fVar11 = (float10)FUN_00232520();
    iVar6 = (**(code **)(*DAT_00469b54 + 0x48))();
    fStack_1d8 = (float)fVar11 * *(float *)(iVar6 + 0x18c);
    if (iVar8 != 0) {
      fVar11 = (float10)FUN_00232520();
      iVar6 = (**(code **)(*DAT_00469b54 + 0x48))();
      fVar12 = (float)fVar11 * *(float *)(iVar6 + 0x18c);
      if (fVar12 < fStack_1d8) {
        fStack_1d8 = fVar12;
        iStack_1ac = iVar8;
      }
    }
    fStack_1d8 = fStack_1d8 * fStack_1d8;
    FUN_0001fe40(auStack_180,0xc,8,FUN_000a3d50);
    if (DAT_003c053c == '\0') {
      iStack_1a8 = (**(code **)(*param_3 + 0x130))(auStack_180,8);
    }
    else {
      pfVar7 = (float *)(**(code **)(*param_3 + 0x134))();
      FUN_000ab390(*(undefined4 *)(param_2 + 0xf0),&iStack_1d4);
      FUN_0006dfc0(piVar1,&fStack_1cc,(float)iStack_1d4,(float)iStack_1d0);
      fVar11 = (float10)(**(code **)(piVar1[0x12] + 0x24))();
      auVar13 = rcpss(ZEXT416((uint)(float)fVar11),ZEXT416((uint)(float)fVar11));
      fVar12 = auVar13._0_4_;
      fStack_1cc = fStack_1cc * fVar12;
      uVar4 = (ulonglong)_fStack_1c8 >> 0x20;
      fStack_1c8 = (float)_fStack_1c8 * fVar12;
      fStack_1c4 = (float)uVar4 * fVar12;
      fStack_184 = pfVar7[5] + pfVar7[2];
      fStack_188 = pfVar7[4] + pfVar7[1];
      fStack_18c = *pfVar7 + pfVar7[3];
      fStack_1a4 = fStack_18c * 0.5;
      piStack_1e0 = (int *)(fStack_184 * 0.5);
      _fStack_1a0 = CONCAT44(piStack_1e0,fStack_188 * 0.5);
      iVar8 = (**(code **)(*piVar1 + 0x40))();
      iVar6 = FUN_000a0c60();
      piStack_1e0 = (int *)-*(float *)(iVar6 + 8);
      fStack_1cc = fStack_1cc * (float)piStack_1e0 + *(float *)(iVar8 + 0x24);
      _fStack_1c8 = CONCAT44(fStack_1c4 * (float)piStack_1e0 + *(float *)(iVar8 + 0x2c),
                             fStack_1c8 * (float)piStack_1e0 + *(float *)(iVar8 + 0x28));
      FUN_0015b450(pfVar7,&fStack_1cc,auStack_180);
      iStack_1a8 = 1;
    }
    uStack_1c = 0;
    uStack_18 = 1;
    uStack_c = 0;
    appuStack_120[0] = &PTR_LAB_0039f73c;
    uStack_14 = 0xfffffff8;
    uStack_10 = 0x400000;
    iStack_8 = *(int *)(iVar9 + 0x6c);
    iStack_4 = iStack_8;
    if (*(int *)(iStack_8 + 0x10) != 0) {
      iStack_4 = *(int *)(iStack_8 + 8);
    }
    uStack_190 = 0x3f99999a;
    if (*(int **)(param_1 + 8) != param_3) {
      uStack_190 = 0x3f800000;
    }
    iStack_1e8 = 0;
    if (0 < iStack_1a8) {
      puVar10 = auStack_180;
      do {
        cVar5 = FUN_000bff40(param_1,fStack_1d8,puVar10);
        if (cVar5 != '\0') {
          fStack_1b0 = 0.0;
          uStack_194 = 0;
          iStack_1d4 = 0;
          cVar5 = FUN_0006e270(&iStack_1d4,&uStack_194,&fStack_1b0,puVar10);
          uVar2 = uStack_194;
          iVar9 = iStack_1d4;
          if ((cVar5 != '\0') && (fStack_1b0 < 206.0 != (fStack_1b0 == 206.0))) {
            FUN_000beb40(param_1,param_2,iStack_1d4,uStack_194,uStack_190,&fStack_1dc,&fStack_1c0);
            *param_5 = fStack_1dc;
            param_5[1] = 0.0;
            param_5[2] = fStack_1b0;
            if (*(float *)(param_1 + 0x44) < fStack_1c0) {
              cVar5 = FUN_000bfeb0();
              if (cVar5 == '\0') {
                piStack_1e0 = (int *)0x0;
                iVar9 = FUN_000becf0(param_1,&piStack_1e0,local_198,iVar9,uVar2,appuStack_120,
                                     &uStack_1bc,0x43800000);
                if (piStack_1e0 == (int *)0x0) {
                  if (iVar9 != 1) {
                    *(float *)(param_1 + 0x44) = fStack_1c0;
                    FUN_0012ac00();
                    if (*(float *)(param_1 + 0x40) < fStack_1dc) goto LAB_000bfc49;
                  }
                }
                else if (piStack_1e0 == param_3) {
                  FUN_000be9c0();
                  *(float *)(param_1 + 0x44) = fStack_1c0;
                  FUN_0012ac00();
                  if (*(float *)(param_1 + 0x40) < fStack_1dc) {
                    *(float *)(param_1 + 0x40) = fStack_1dc;
                    *(undefined4 *)(param_1 + 0x1c) = uStack_1bc;
                    *(undefined4 *)(param_1 + 0x20) = uStack_1b8;
                    *(undefined4 *)(param_1 + 0x24) = uStack_1b4;
                    if (param_4 != (undefined4 *)0x0) {
                      *param_4 = uStack_1bc;
                      param_4[1] = uStack_1b8;
                      param_4[2] = uStack_1b4;
                    }
                    return 1;
                  }
                }
              }
              else {
                FUN_000be9c0();
                *(float *)(param_1 + 0x44) = fStack_1c0;
                FUN_0012ac00();
                if (*(float *)(param_1 + 0x40) < fStack_1dc) {
LAB_000bfc49:
                  *(float *)(param_1 + 0x40) = fStack_1dc;
                  uVar2 = puVar10[2];
                  uVar3 = puVar10[1];
                  *(undefined4 *)(param_1 + 0x1c) = *puVar10;
                  *(undefined4 *)(param_1 + 0x20) = uVar3;
                  *(undefined4 *)(param_1 + 0x24) = uVar2;
                  if (param_4 != (undefined4 *)0x0) {
                    uVar2 = puVar10[2];
                    uVar3 = puVar10[1];
                    *param_4 = *puVar10;
                    param_4[1] = uVar3;
                    param_4[2] = uVar2;
                  }
                  return 1;
                }
              }
            }
          }
        }
        iStack_1e8 = iStack_1e8 + 1;
        puVar10 = puVar10 + 3;
      } while (iStack_1e8 < iStack_1a8);
    }
  }
  return 0;
}
