/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEEA44215E95478C416946648BA58F761F092C4A67C4493D0BBA7C0C27DCC53C
 * Entry: 0x0035b390, Ghidra index: 13199, label: FUN_0035b390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b50f8;
void FUN_0035b390(uint param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  sbyte sVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *in_EDX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float *local_1c;
  int local_18;
  uint local_14;
  float *local_10;
  
  fVar2 = 0.0;
  iVar8 = 0;
  local_18 = 0;
  if ((uint)(*param_4 << 1) < 2) {
    piVar5 = param_4;
    do {
      piVar1 = piVar5 + 1;
      fVar2 = *(float *)((param_3 - (int)param_4) + (int)piVar5);
      piVar5 = piVar5 + 1;
      iVar8 = iVar8 + 1;
      local_18 = iVar8;
    } while ((uint)(*piVar1 << 1) < 2);
  }
  local_1c = (float *)(param_1 + 8);
  param_1 = 2;
  if (2 < param_2) {
    do {
      if (in_EDX[3] == 0) {
        uVar6 = *(uint *)*in_EDX;
        *in_EDX = (int)((uint *)*in_EDX + 1);
        in_EDX[2] = uVar6 >> 1;
        in_EDX[3] = 0x1f;
      }
      else {
        uVar6 = in_EDX[2];
        in_EDX[2] = uVar6 >> 1;
        in_EDX[3] = in_EDX[3] + -1;
      }
      if ((uVar6 & 1) == 0) {
        local_14 = param_1 + 8;
      }
      else {
        uVar6 = in_EDX[3];
        if (uVar6 < 4) {
          uVar4 = *(uint *)*in_EDX;
          uVar9 = uVar4 << ((byte)uVar6 & 0x1f) | in_EDX[2];
          iVar8 = uVar6 + 0x1c;
          in_EDX[2] = uVar4 >> (4 - (byte)uVar6 & 0x1f);
          *in_EDX = (int)((uint *)*in_EDX + 1);
        }
        else {
          uVar9 = in_EDX[2];
          in_EDX[2] = uVar9 >> 4;
          iVar8 = uVar6 - 4;
        }
        in_EDX[3] = iVar8;
        local_14 = param_1 + (uint)(byte)(&DAT_004b50f8)[uVar9 & 0xf] * 8;
      }
      if (param_2 < local_14) {
        local_14 = param_2;
      }
      uVar6 = in_EDX[3];
      if (uVar6 < 4) {
        uVar4 = *(uint *)*in_EDX;
        uVar9 = uVar4 << ((byte)uVar6 & 0x1f) | in_EDX[2];
        uVar4 = uVar4 >> (4 - (byte)uVar6 & 0x1f);
        iVar8 = uVar6 + 0x1c;
        *in_EDX = (int)((uint *)*in_EDX + 1);
      }
      else {
        uVar9 = in_EDX[2];
        uVar4 = uVar9 >> 4;
        iVar8 = uVar6 - 4;
      }
      uVar9 = uVar9 & 0xf;
      in_EDX[2] = uVar4;
      in_EDX[3] = iVar8;
      if (uVar9 == 0) {
        pfVar10 = local_1c;
        for (uVar6 = local_14 - param_1 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pfVar10 = 0.0;
          pfVar10 = pfVar10 + 1;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined1 *)pfVar10 = 0;
          pfVar10 = (float *)((int)pfVar10 + 1);
        }
        local_1c = local_1c + (local_14 - param_1);
        piVar5 = param_4 + local_18;
        param_1 = local_14;
        if ((uint)(param_4[local_18] * 2) < local_14) {
          do {
            piVar1 = piVar5 + 1;
            fVar2 = *(float *)((int)piVar5 + (param_3 - (int)param_4));
            piVar5 = piVar5 + 1;
            local_18 = local_18 + 1;
          } while ((uint)(*piVar1 * 2) < local_14);
        }
      }
      else if (param_1 < local_14) {
        sVar3 = (sbyte)uVar9;
        local_10 = (float *)(param_3 + local_18 * 4);
        do {
          if (param_1 == *(int *)(((int)param_4 - param_3) + (int)local_10) * 2) {
            fVar2 = *local_10;
            local_18 = local_18 + 1;
            local_10 = local_10 + 1;
          }
          uVar6 = in_EDX[3];
          if (uVar6 < uVar9) {
            uVar7 = *(uint *)*in_EDX;
            uVar4 = uVar7 << ((byte)uVar6 & 0x1f) | in_EDX[2];
            uVar7 = uVar7 >> (sVar3 - (byte)uVar6 & 0x1f);
            iVar8 = (uVar6 - uVar9) + 0x20;
            *in_EDX = (int)((uint *)*in_EDX + 1);
          }
          else {
            uVar4 = in_EDX[2];
            uVar7 = uVar4 >> sVar3;
            iVar8 = uVar6 - uVar9;
          }
          uVar4 = 0xffffffffU >> (0x20U - sVar3 & 0x1f) & uVar4;
          in_EDX[2] = uVar7;
          in_EDX[3] = iVar8;
          if (uVar4 == 0) {
            *local_1c = 0.0;
          }
          else {
            if (iVar8 == 0) {
              uVar6 = *(uint *)*in_EDX;
              *in_EDX = (int)((uint *)*in_EDX + 1);
              in_EDX[2] = uVar6 >> 1;
              in_EDX[3] = 0x1f;
            }
            else {
              uVar6 = in_EDX[2];
              in_EDX[2] = uVar6 >> 1;
              in_EDX[3] = iVar8 + -1;
            }
            *local_1c = (float)(int)((-(uVar6 & 1) ^ uVar4) + (uVar6 & 1)) * fVar2;
          }
          local_1c = local_1c + 1;
          param_1 = param_1 + 1;
        } while (param_1 < local_14);
      }
    } while (param_1 < param_2);
  }
  return;
}
