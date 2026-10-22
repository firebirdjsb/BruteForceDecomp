/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 459BEC554406C2459C8F0F7008F0FB2786B1F40C7025C436571956D6598D1C6B
 * Entry: 0x002237c0, Ghidra index: 7605, label: FUN_002237c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_0039efb8;
extern uint32_t PTR_LAB_0039cc18;
extern uint32_t PTR_LAB_0039efc0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002237c0(int param_1,float *param_2,float param_3,float param_4,int param_5,int param_6,
                 int param_7,char param_8,char param_9)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  float *in_EAX;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  float10 fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  int local_264;
  float local_25c;
  uint uStack_258;
  float fStack_254;
  undefined1 local_250 [4];
  int *local_24c;
  int local_248;
  float local_244;
  int local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  int local_220;
  float fStack_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  undefined4 local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  int local_1e0;
  undefined **appuStack_1b0 [3];
  int iStack_1a4;
  undefined4 uStack_160;
  undefined4 uStack_150;
  undefined **local_128 [65];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fVar10 = (float10)fcos((float10)param_4 * (float10)0.017453292);
  local_25c = (float)fVar10;
  local_24c = (int *)FUN_0025ae60(local_250);
  *(undefined1 *)((int)local_24c + 0x15) = 1;
  local_24c[1] = (int)local_24c;
  *local_24c = (int)local_24c;
  local_24c[2] = (int)local_24c;
  local_210 = in_EAX[2];
  local_214 = in_EAX[1];
  local_218 = *in_EAX;
  local_1f8 = param_3;
  local_18 = 0xfffffffa;
  local_1c = 0xfffffffa;
  local_220 = *(int *)(param_7 + 0x204);
  local_248 = 0;
  local_1fc = 0;
  local_20c = 0;
  local_1f4 = 0;
  local_24 = 0;
  local_20 = 1;
  local_14 = 0;
  local_128[0] = &PTR_LAB_0039cc18;
  iVar7 = *(int *)(local_220 + 0x3c);
  *(int *)(local_220 + 0x3c) = iVar7 + 1;
  local_230 = in_EAX[1];
  local_238 = *(float *)(param_7 + 0xa40);
  local_244 = in_EAX[2];
  local_234 = *in_EAX;
  local_228 = param_3;
  local_240 = iVar7;
  local_22c = local_244;
  FUN_000d1420(param_3);
  do {
    if (local_1e0 == 0) {
      local_25c = (float)param_5;
      local_23c = (float)local_248;
      if (local_248 < 0) {
        local_23c = local_23c + 4.2949673e+09;
      }
      local_264 = FUN_002ebf10();
      FUN_00223df0();
      local_240 = *local_24c;
      if (0 < local_264) {
        do {
          uVar9 = *(uint *)(local_240 + 0x10);
          uStack_258 = 0;
          if ((uVar9 != 0) && (uStack_258 = uVar9, (uVar9 & 1) == 0)) {
            uVar9 = uVar9 * 0x19660d + 0x3c6ef35f >> 0x15;
            local_25c = *(float *)(&DAT_00414da0 + uVar9 * 4);
            *(float **)(&DAT_00414da0 + uVar9 * 4) = &local_25c;
          }
          iVar7 = *(int *)(param_1 + 4);
          if ((iVar7 == 0) ||
             ((uint)(*(int *)(param_1 + 0xc) - iVar7 >> 3) <=
              (uint)(*(int *)(param_1 + 8) - iVar7 >> 3))) {
            FUN_0004aff0(param_1,*(undefined4 *)(param_1 + 8),1,&local_25c);
          }
          else {
            iVar7 = *(int *)(param_1 + 8);
            FUN_0004b6d0(iVar7,1,&local_25c,param_1,local_25c);
            *(int *)(param_1 + 8) = iVar7 + 8;
          }
          if ((uStack_258 != 0) && ((uStack_258 & 1) == 0)) {
            iVar7 = uStack_258 * 0x19660d;
            uStack_258 = 0;
            fVar11 = *(float *)(&DAT_00414da0 + (iVar7 + 0x3c6ef35fU >> 0x15) * 4);
            pfVar4 = (float *)(&DAT_00414da0 + (iVar7 + 0x3c6ef35fU >> 0x15) * 4);
            while (fVar11 != 0.0) {
              pfVar3 = (float *)*pfVar4;
              if (pfVar3 == &local_25c) {
                *pfVar4 = *(float *)*pfVar4;
                break;
              }
              pfVar4 = pfVar3;
              fVar11 = *pfVar3;
            }
          }
          FUN_0012aba0();
          local_264 = local_264 + -1;
        } while (local_264 != 0);
      }
      local_128[0] = &PTR_LAB_0039cc18;
      FUN_00223fd0(&local_25c,*local_24c,local_24c);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_24c);
    }
    for (puVar1 = *(undefined4 **)(local_1e0 + 0x1c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      piVar8 = *(int **)((uint)*(ushort *)(puVar1 + 2) * 0x10 + 0xc + *(int *)(local_220 + 0x14));
      if ((piVar8 != (int *)0x0) && (iVar2 = piVar8[6], piVar8[6] = iVar7, iVar2 != iVar7)) {
        uVar9 = -(uint)((*(byte *)((int)piVar8 + 0x26) & 0x40) != 0) & (uint)piVar8;
        piVar6 = (int *)(**(code **)(*piVar8 + 0xec))();
        iVar7 = local_240;
        if ((uVar9 != 0) && (piVar6 != (int *)0x0)) {
          iVar7 = (**(code **)(*piVar6 + 0x9c))();
          if ((param_6 == -1) || (iVar7 == -1)) {
            cVar5 = '\0';
          }
          else {
            cVar5 = (&DAT_003ffd80)[param_6 * 10 + iVar7];
          }
          iVar7 = local_240;
          if (cVar5 == param_9) {
            iVar7 = (**(code **)(*piVar8 + 0x40))();
            local_230 = *(float *)(iVar7 + 0x2c) - in_EAX[2];
            fStack_21c = *(float *)(iVar7 + 0x28) - in_EAX[1];
            local_238 = *(float *)(iVar7 + 0x24) - *in_EAX;
            local_244 = SQRT(local_230 * local_230 + fStack_21c * fStack_21c + local_238 * local_238
                            );
            auVar12 = rcpss(ZEXT416((uint)local_244),ZEXT416((uint)local_244));
            fVar11 = auVar12._0_4_;
            local_238 = local_238 * fVar11;
            local_234 = fStack_21c * fVar11;
            local_230 = local_230 * fVar11;
            fStack_254 = local_238 * *param_2 + local_230 * param_2[2] + local_234 * param_2[1];
            iVar7 = local_240;
            local_23c = local_244;
            if (local_25c <= fStack_254) {
              local_1fc = 0;
              fStack_208 = local_238;
              fStack_204 = local_234;
              fStack_200 = local_230;
              local_1f8 = local_244;
              FUN_002b7970(appuStack_1b0,&local_218);
              appuStack_1b0[0] = &PTR_LAB_0039efc0;
              uStack_150 = 0;
              uStack_160 = 0x60ad78ec;
              FUN_000df0a0(param_7,appuStack_1b0,local_128,1);
              if (iStack_1a4 == 0) {
                fStack_1f0 = local_244;
                if (param_8 == '\0') {
                  fStack_1f0 = -fStack_254;
                }
                uStack_1ec = 0;
                piVar8 = (int *)FUN_00223f00(local_250,&fStack_1f0);
                *(uint *)(*piVar8 + 0x10) = uVar9;
              }
              appuStack_1b0[0] = &PTR_FUN_0039efb8;
              iVar7 = local_240;
            }
          }
        }
      }
    }
    do {
      cVar5 = FUN_000d14d0();
      if (cVar5 == '\0') {
        local_1e0 = 0;
        break;
      }
    } while (local_1e0 == 0);
  } while( true );
}
