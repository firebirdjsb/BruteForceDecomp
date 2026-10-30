/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D73FDF27F94A4A85EDDF121DEDB0203AB8407FEFB43C38BF85245673E8351785
 * Entry: 0x002cd7d0, Ghidra index: 10169, label: FUN_002cd7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_002cd7d0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *in_EAX;
  float *pfVar8;
  int iVar9;
  float *unaff_EBX;
  float10 fVar10;
  float fVar11;
  float fVar12;
  int local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c [14];
  float local_24;
  float local_20;
  float local_1c [6];
  
  pfVar8 = (float *)(in_EAX + 0x16);
  fVar11 = (float)*(undefined8 *)(in_EAX + 0x17);
  fVar12 = (float)((ulonglong)*(undefined8 *)(in_EAX + 0x17) >> 0x20);
  if (fVar11 * fVar11 + fVar12 * fVar12 + *pfVar8 * *pfVar8 <= 1e-06) {
    local_84 = 1e+20;
    local_5c[0] = -1.0;
    local_5c[1] = 0.5;
    local_5c[2] = 2.0;
    local_5c[3] = 0.0;
    local_5c[4] = 1.0;
    local_5c[5] = -0.001;
    local_5c[6] = 0.001;
    local_5c[7] = 0.999;
    local_5c[8] = 1.001;
    local_5c[9] = -1e-06;
    local_5c[10] = 1e-06;
    local_5c[0xb] = 0.999999;
    local_5c[0xc] = 1.000001;
    local_88 = 0;
    do {
      fVar11 = local_5c[local_88];
      fVar12 = 1.0 - fVar11;
      local_60 = 0;
      local_6c = fVar12 * (float)in_EAX[2] + fVar11 * (float)in_EAX[6];
      local_68 = fVar12 * (float)in_EAX[3] + fVar11 * (float)in_EAX[7];
      local_64 = fVar12 * (float)in_EAX[4] + fVar11 * (float)in_EAX[8];
      fVar10 = (float10)FUN_002cdcb0(&local_6c);
      if (fVar10 < (float10)local_84) {
        local_84 = (float)fVar10;
        unaff_EBX[1] = fVar12;
        *unaff_EBX = fVar11;
        FUN_002cd190(&local_6c);
        unaff_EBX[2] = local_80;
        unaff_EBX[3] = local_7c;
      }
      local_88 = local_88 + 1;
    } while (local_88 < 0xb);
    pfVar8 = local_1c;
    iVar9 = 2;
    do {
      *pfVar8 = 0.0;
      pfVar8 = pfVar8 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    FUN_002cd120(in_EAX[0x14],local_5c + 0xd);
    FUN_002cd120(in_EAX[0x14],local_1c + 1);
    local_8c = 0;
    do {
      fVar11 = local_5c[local_8c];
      fVar12 = 1.0 - fVar11;
      local_60 = 0;
      local_6c = local_1c[1] * fVar11 + local_5c[0xd] * fVar12;
      local_68 = local_1c[2] * fVar11 + local_24 * fVar12;
      local_64 = local_1c[3] * fVar11 + local_20 * fVar12;
      fVar10 = (float10)FUN_002cdcb0(&local_6c);
      if (fVar10 < (float10)local_84) {
        local_84 = (float)fVar10;
        unaff_EBX[3] = fVar12;
        unaff_EBX[2] = fVar11;
        FUN_002cd190(&local_6c);
        *unaff_EBX = local_80;
        unaff_EBX[1] = local_7c;
      }
      local_8c = local_8c + 1;
    } while (local_8c < 9);
    return 0;
  }
  pfVar1 = (float *)*in_EAX;
  fVar11 = (float)in_EAX[0x18] * (float)in_EAX[0xb] - (float)in_EAX[0x17] * (float)in_EAX[0xc];
  fVar4 = *pfVar8 * (float)in_EAX[0xc] - (float)in_EAX[0x18] * (float)in_EAX[10];
  fVar12 = (float)in_EAX[0x17] * (float)in_EAX[10] - *pfVar8 * (float)in_EAX[0xb];
  fVar5 = (float)in_EAX[0x18] * (float)in_EAX[0xf] - (float)in_EAX[0x10] * (float)in_EAX[0x17];
  fVar6 = (float)in_EAX[0x10] * *pfVar8 - (float)in_EAX[0x18] * (float)in_EAX[0xe];
  fVar7 = (float)in_EAX[0x17] * (float)in_EAX[0xe] - (float)in_EAX[0xf] * *pfVar8;
  pfVar8 = (float *)in_EAX[1];
  fVar3 = fVar11 * *pfVar1 + fVar4 * pfVar1[1] + fVar12 * pfVar1[2];
  fVar2 = fVar11 * *pfVar8 + fVar4 * pfVar8[1] + fVar12 * pfVar8[2];
  fVar11 = fVar11 * (float)in_EAX[2] + fVar4 * (float)in_EAX[3] + fVar12 * (float)in_EAX[4];
  fVar12 = fVar3 - fVar2;
  unaff_EBX[2] = (fVar3 - fVar11) * fVar12;
  unaff_EBX[3] = (fVar11 - fVar2) * fVar12;
  fVar11 = fVar5 * (float)in_EAX[2] + fVar6 * (float)in_EAX[3] + fVar7 * (float)in_EAX[4];
  pfVar8 = (float *)*in_EAX;
  fVar2 = fVar5 * (float)in_EAX[6] + fVar6 * (float)in_EAX[7] + fVar7 * (float)in_EAX[8];
  fVar3 = fVar5 * *pfVar8 + fVar6 * pfVar8[1] + fVar7 * pfVar8[2];
  fVar12 = fVar11 - fVar2;
  *unaff_EBX = (fVar11 - fVar3) * fVar12;
  unaff_EBX[1] = (fVar3 - fVar2) * fVar12;
  return 1;
}
