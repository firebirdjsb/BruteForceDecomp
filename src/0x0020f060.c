/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45FE039A6ED32101B3B486CE9D86A96E516A82322BBA6A4D9F896BCA77A7E8BE
 * Entry: 0x0020f060, Ghidra index: 7410, label: FUN_0020f060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020f060(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar13 = *(int *)(in_EAX + 0xa8) + 1;
  fVar1 = 1.0 / (float)*(int *)(in_EAX + 0xa8);
  local_24 = 0;
  if (0 < iVar13) {
    local_18 = 0;
    local_c = 0xc;
    local_10 = 0x18;
    do {
      local_1c = 0;
      if (3 < iVar13) {
        local_14 = 2;
        fVar2 = 0.5 - (float)local_24 * fVar1;
        fVar3 = 1.0 - (float)local_24 * fVar1;
        iVar8 = local_c;
        iVar9 = local_10;
        do {
          *(undefined4 *)(iVar8 + -0xc + *(int *)(in_EAX + 0x84)) = 0;
          *(float *)(iVar8 + -8 + *(int *)(in_EAX + 0x84)) = fVar2;
          *(float *)(iVar8 + -4 + *(int *)(in_EAX + 0x84)) =
               (0.5 - (float)local_1c * fVar1) * *(float *)(in_EAX + 0xac);
          *(float *)(iVar9 + -8 + *(int *)(in_EAX + 0x80)) =
               ((float)local_1c * fVar1) / *(float *)(in_EAX + 0xb0);
          *(float *)(iVar9 + -4 + *(int *)(in_EAX + 0x80)) = fVar3 / *(float *)(in_EAX + 0xb0);
          *(undefined4 *)(iVar8 + *(int *)(in_EAX + 0x84)) = 0;
          *(float *)(iVar8 + 4 + *(int *)(in_EAX + 0x84)) = fVar2;
          fVar4 = (float)(local_14 + -1) * fVar1;
          *(float *)(iVar8 + 8 + *(int *)(in_EAX + 0x84)) =
               (0.5 - fVar4) * *(float *)(in_EAX + 0xac);
          *(float *)(iVar9 + 0x10 + *(int *)(in_EAX + 0x80)) = fVar4 / *(float *)(in_EAX + 0xb0);
          *(float *)(iVar9 + 0x14 + *(int *)(in_EAX + 0x80)) = fVar3 / *(float *)(in_EAX + 0xb0);
          *(undefined4 *)(iVar8 + 0xc + *(int *)(in_EAX + 0x84)) = 0;
          *(float *)(iVar8 + 0x10 + *(int *)(in_EAX + 0x84)) = fVar2;
          *(float *)(iVar8 + 0x14 + *(int *)(in_EAX + 0x84)) =
               (0.5 - (float)local_14 * fVar1) * *(float *)(in_EAX + 0xac);
          *(float *)(iVar9 + 0x28 + *(int *)(in_EAX + 0x80)) =
               ((float)local_14 * fVar1) / *(float *)(in_EAX + 0xb0);
          *(float *)(iVar9 + 0x2c + *(int *)(in_EAX + 0x80)) = fVar3 / *(float *)(in_EAX + 0xb0);
          *(undefined4 *)(iVar8 + 0x18 + *(int *)(in_EAX + 0x84)) = 0;
          *(float *)(iVar8 + 0x1c + *(int *)(in_EAX + 0x84)) = fVar2;
          fVar4 = (float)(local_14 + 1) * fVar1;
          *(float *)(iVar8 + 0x20 + *(int *)(in_EAX + 0x84)) =
               (0.5 - fVar4) * *(float *)(in_EAX + 0xac);
          *(float *)(iVar9 + 0x40 + *(int *)(in_EAX + 0x80)) = fVar4 / *(float *)(in_EAX + 0xb0);
          local_1c = local_1c + 4;
          iVar8 = iVar8 + 0x30;
          *(float *)(iVar9 + 0x44 + *(int *)(in_EAX + 0x80)) = fVar3 / *(float *)(in_EAX + 0xb0);
          iVar10 = local_14 + 5;
          iVar9 = iVar9 + 0x60;
          local_14 = local_14 + 4;
        } while (iVar10 < iVar13);
      }
      if (local_1c < iVar13) {
        iVar8 = (local_18 + local_1c) * 0xc;
        iVar9 = (local_18 + local_1c) * 0x18;
        do {
          *(undefined4 *)(iVar8 + *(int *)(in_EAX + 0x84)) = 0;
          *(float *)(iVar8 + 4 + *(int *)(in_EAX + 0x84)) = 0.5 - (float)local_24 * fVar1;
          fVar2 = (float)local_1c;
          local_1c = local_1c + 1;
          *(float *)(iVar8 + 8 + *(int *)(in_EAX + 0x84)) =
               (0.5 - fVar2 * fVar1) * *(float *)(in_EAX + 0xac);
          *(float *)(iVar9 + 0x10 + *(int *)(in_EAX + 0x80)) =
               (fVar2 * fVar1) / *(float *)(in_EAX + 0xb0);
          *(float *)(iVar9 + 0x14 + *(int *)(in_EAX + 0x80)) =
               (1.0 - (float)local_24 * fVar1) / *(float *)(in_EAX + 0xb0);
          iVar8 = iVar8 + 0xc;
          iVar9 = iVar9 + 0x18;
        } while (local_1c < iVar13);
      }
      local_18 = local_18 + iVar13;
      local_10 = local_10 + iVar13 * 0x18;
      local_24 = local_24 + 1;
      local_c = local_c + iVar13 * 0xc;
    } while (local_24 < iVar13);
  }
  iVar8 = *(int *)(in_EAX + 0xa8);
  iVar9 = 0;
  local_24 = 0;
  if (0 < iVar8) {
    do {
      iVar10 = 0;
      if (0 < iVar8) {
        sVar6 = (short)local_24 * (short)iVar13;
        sVar5 = ((short)local_24 + 1) * (short)iVar13;
        do {
          sVar7 = (short)iVar10;
          *(short *)(*(int *)(in_EAX + 0x88) + iVar9 * 2) = sVar6 + sVar7;
          sVar12 = sVar6 + 1 + sVar7;
          *(short *)(*(int *)(in_EAX + 0x88) + (iVar9 + 1) * 2) = sVar12;
          sVar11 = sVar5 + sVar7;
          *(short *)(*(int *)(in_EAX + 0x88) + 2 + (iVar9 + 1) * 2) = sVar11;
          *(short *)(*(int *)(in_EAX + 0x88) + 2 + (iVar9 + 2) * 2) = sVar12;
          *(short *)(*(int *)(in_EAX + 0x88) + (iVar9 + 4) * 2) = sVar5 + 1 + sVar7;
          *(short *)(*(int *)(in_EAX + 0x88) + (iVar9 + 5) * 2) = sVar11;
          iVar9 = iVar9 + 6;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(in_EAX + 0xa8));
      }
      iVar8 = *(int *)(in_EAX + 0xa8);
      local_24 = local_24 + 1;
    } while (local_24 < iVar8);
  }
  return;
}
