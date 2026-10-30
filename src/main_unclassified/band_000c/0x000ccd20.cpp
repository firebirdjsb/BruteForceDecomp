/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA8656C6AADAC14C48AE6406A1AD10DEBDA4ADC183331208F42A4AEA2BE8C678
 * Entry: 0x000ccd20, Ghidra index: 2530, label: FUN_000ccd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000cd2f0(int param_1);
extern undefined4 FUN_000cd510(undefined4 param_1,int param_2);
extern void FUN_00238630(void);

extern uint32_t DAT_0046b2e8;
extern uint32_t _DAT_0040d644;
extern uint32_t _DAT_0040d648;
extern uint32_t _DAT_0040d64c;
extern uint32_t _DAT_0040d650;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000ccd20(int param_1,float param_2,float param_3,uint param_4,ushort *param_5,byte param_6,
            float param_7,int param_8,int param_9,short param_10)

{
  float *pfVar1;
  ushort uVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  float fVar14;
  uint uVar15;
  ushort *puVar16;
  byte local_41;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  int local_4;
  
  if (*param_5 != 0) {
    local_40 = param_2;
    uVar15 = param_4 >> 0x18;
    local_38 = param_3;
    local_41 = (byte)(param_4 >> 0x18);
    bVar5 = false;
    if ((param_6 & 4) != 0) {
      iVar11 = FUN_000ccae0(param_1,param_5,&local_30,&local_34,0,param_7);
      if (iVar11 < 0) {
        return 0x80004005;
      }
      local_2c = local_38 - local_34 * 0.5;
      local_28 = (float)(int)local_2c;
      local_30 = local_28;
      if ((float)(int)local_28 < local_2c == ((float)(int)local_28 == local_2c)) {
        local_30 = (float)((int)local_28 + -1);
      }
      local_38 = (float)(int)local_30;
    }
    FUN_000cd2f0(param_1);
    local_2c = param_7 * 0.0;
    local_30 = 1.4013e-45;
    if (param_10 < 0) {
      param_10 = 0x7fff;
    }
    iVar11 = 0;
    if (*param_5 != 0) {
      while ((short)iVar11 <= param_10) {
        iVar11 = iVar11 + 1;
        local_4 = iVar11;
        if (local_30 != 0.0) {
          if ((param_6 & 3) != 0) {
            FUN_000ccae0(param_1,param_5,&local_3c,&local_34,1,param_7);
            if ((param_6 & 1) != 0) {
              fVar3 = param_2 - local_3c;
              local_28 = (float)(int)fVar3;
              fVar14 = local_28;
              if ((float)(int)local_28 < fVar3 == ((float)(int)local_28 == fVar3)) {
                fVar14 = (float)((int)local_28 + -1);
              }
              local_40 = (float)(int)fVar14;
            }
            if ((param_6 & 2) != 0) {
              fVar3 = param_2 - local_3c * 0.5;
              local_28 = (float)(int)fVar3;
              fVar14 = local_28;
              if ((float)(int)local_28 < fVar3 == ((float)(int)local_28 == fVar3)) {
                fVar14 = (float)((int)local_28 + -1);
              }
              local_40 = (float)(int)fVar14;
            }
          }
          local_30 = 0.0;
        }
        uVar10 = *param_5;
        puVar16 = param_5 + 1;
        if (uVar10 == 10) {
          fVar3 = (float)*(int *)(param_1 + 0x10);
          local_40 = param_2;
          if (*(int *)(param_1 + 0x10) < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          local_30 = 1.4013e-45;
          local_38 = fVar3 * param_7 + local_38;
        }
        else if (uVar10 == 9) {
          local_24 = local_40;
          local_28 = (float)(0x32 - (int)local_40 % 0x32);
          local_40 = (float)(int)local_28 * param_7 + local_40;
        }
        else if (uVar10 == 0x5e) {
          uVar10 = *puVar16;
          if (uVar10 == 99) {
            if (param_5[2] == 0) break;
            iVar12 = param_5[2] - 0x30;
            if ((-1 < iVar12) && (iVar12 < param_8)) {
              param_4 = 0xffffffff;
              if (bVar5) {
                param_4 = 0xffffff;
              }
              param_4 = *(uint *)(param_9 + iVar12 * 4) & param_4;
              local_41 = (byte)(param_4 >> 0x18);
            }
            puVar16 = param_5 + 3;
          }
          else if (uVar10 == 0x29) {
            param_4 = uVar15 << 0x18 | param_4 & 0xffffff;
            bVar5 = false;
            puVar16 = param_5 + 2;
          }
          else if (uVar10 == 0x66) {
            uVar10 = param_5[2];
            bVar4 = true;
            puVar16 = param_5 + 2;
            if (uVar10 == 0x28) {
              puVar16 = param_5 + 3;
              uVar10 = *puVar16;
              bVar4 = false;
              puVar13 = puVar16;
              if (uVar10 == 0) break;
              do {
                if (bVar4) break;
                if (*puVar13 == 0x5e) {
                  if (puVar13[1] == 0) break;
                  if (puVar13[1] == 0x29) {
                    bVar4 = true;
                  }
                }
                puVar13 = puVar13 + 1;
              } while (*puVar13 != 0);
            }
            param_5 = puVar16;
            if (uVar10 == 0) break;
            puVar16 = param_5;
            if ((int)(uVar10 - 0x30) < 10) {
              if ((bVar4) && (cVar9 = FUN_000cd510(param_1,uVar10 - 0x30), cVar9 != '\0')) {
                param_4 = param_4 & 0xffffff;
                bVar5 = true;
              }
              puVar16 = param_5 + 1;
            }
          }
        }
        else {
          uVar2 = *(ushort *)(param_1 + 0x1c);
          if ((uVar10 < uVar2) || (*(ushort *)(param_1 + 0x1e) < uVar10)) {
            if (uVar10 == 0x20) {
              if ((uVar2 < 0x32) && (0x30 < *(ushort *)(param_1 + 0x1e))) {
                iVar12 = *(int *)(param_1 + 0x24) + (0x31 - (uint)uVar2) * 0x18;
                local_28 = (float)((int)*(short *)(iVar12 + 0x14) + (int)*(short *)(iVar12 + 0x10));
                local_40 = (float)(int)local_28 * param_7 + local_2c + local_40;
              }
              goto LAB_000cd2ca;
            }
            uVar10 = 0x82;
          }
          pfVar1 = (float *)(*(int *)(param_1 + 0x24) + ((uint)uVar10 - (uint)uVar2) * 0x18);
          local_40 = (float)(int)*(short *)(pfVar1 + 4) * param_7 + local_40;
          local_14 = local_40 - 0.5;
          local_8 = ((float)(int)*(short *)((int)pfVar1 + 0x12) + 1.0) * param_7 + local_14;
          local_10 = local_38 - 0.5;
          fVar3 = (float)*(int *)(param_1 + 0x10);
          if (*(int *)(param_1 + 0x10) < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          local_18 = (fVar3 + 1.0) * param_7 + local_10;
          local_40 = (float)(int)*(short *)(pfVar1 + 5) * param_7 + local_40 + local_2c;
          local_c = (float)*(int *)(param_1 + 0x14);
          if (*(int *)(param_1 + 0x14) < 0) {
            local_c = local_c + 4.2949673e+09;
          }
          local_1c = (local_c * *pfVar1 - _DAT_0040d650) / local_c;
          local_20 = (float)*(int *)(param_1 + 0x18);
          if (*(int *)(param_1 + 0x18) < 0) {
            local_20 = local_20 + 4.2949673e+09;
          }
          local_28 = ((pfVar1[1] * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8)) * local_20 -
                     _DAT_0040d648) / local_20;
          local_c = (local_c * pfVar1[2] - _DAT_0040d64c) / local_c;
          local_20 = ((pfVar1[3] * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8)) * local_20 -
                     _DAT_0040d644) / local_20;
          FUN_00062230(8);
          D3D8LTCG__D3DDevice_SetVertexDataColor(3,param_4);
          fVar14 = local_1c;
          fVar3 = local_20;
          FUN_00062170(&DAT_0046b2e8,9,local_1c,local_20);
          fVar7 = local_14;
          fVar6 = local_18;
          FUN_00062170(&DAT_0046b2e8,0,local_14,local_18);
          FUN_00062170(&DAT_0046b2e8,9,fVar14,local_28);
          fVar14 = local_10;
          FUN_00062170(&DAT_0046b2e8,0,fVar7,local_10);
          fVar7 = local_c;
          FUN_00062170(&DAT_0046b2e8,9,local_c,local_28);
          fVar8 = local_8;
          FUN_00062170(&DAT_0046b2e8,0,local_8,fVar14);
          FUN_00062170(&DAT_0046b2e8,9,fVar7,fVar3);
          FUN_00062170(&DAT_0046b2e8,0,fVar8,fVar6);
          D3D8LTCG__D3DDevice_End();
          iVar11 = local_4;
        }
LAB_000cd2ca:
        param_5 = puVar16;
        if (*param_5 == 0) break;
        uVar15 = (uint)local_41;
      }
    }
    FUN_00238630();
  }
  return 0;
}
