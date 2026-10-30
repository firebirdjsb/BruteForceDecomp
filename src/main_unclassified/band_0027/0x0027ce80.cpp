/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B87EA88188DCCB874AC44A071ECA250324A03EEC2A0A66FB0192BB6277CFB77
 * Entry: 0x0027ce80, Ghidra index: 8997, label: FUN_0027ce80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027ce80(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *in_EAX;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  int in_EDX;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  iVar2 = in_EAX[1];
  iVar3 = *in_EAX;
  piVar4 = (int *)in_EAX[2];
  iVar11 = piVar4[1];
  iVar7 = piVar4[2];
  iVar5 = *piVar4;
  uVar10 = piVar4[4];
  puVar14 = (undefined4 *)(in_EDX + 0xb34);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined2 *)(iVar3 + 2 + *(int *)(in_EDX + 0xb54 + *(int *)(in_EDX + 0x144c) * 4) * 4) = 0;
  local_14 = *(int *)(in_EDX + 0x144c) + 1;
  local_20 = 0;
  if (local_14 < 0x23d) {
    local_1c = (int *)(in_EDX + 0xb54 + local_14 * 4);
    local_10 = 0x23d - local_14;
    local_14 = local_14 + local_10;
    do {
      iVar8 = *local_1c;
      uVar6 = *(ushort *)(iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar8 * 4) * 4) + 1;
      if ((int)uVar10 < (int)uVar6) {
        local_20 = local_20 + 1;
        uVar6 = uVar10;
      }
      *(short *)(iVar3 + 2 + iVar8 * 4) = (short)uVar6;
      if (iVar8 <= iVar2) {
        psVar9 = (short *)(in_EDX + 0xb34 + uVar6 * 2);
        *psVar9 = *psVar9 + 1;
        iVar12 = 0;
        if (iVar7 <= iVar8) {
          iVar12 = *(int *)(iVar11 + (iVar8 - iVar7) * 4);
        }
        uVar15 = (uint)*(ushort *)(iVar3 + iVar8 * 4);
        *(int *)(in_EDX + 0x16a0) = *(int *)(in_EDX + 0x16a0) + (uVar6 + iVar12) * uVar15;
        if (iVar5 != 0) {
          *(uint *)(in_EDX + 0x16a4) =
               *(int *)(in_EDX + 0x16a4) +
               ((uint)*(ushort *)(iVar5 + 2 + iVar8 * 4) + iVar12) * uVar15;
        }
      }
      local_1c = local_1c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    if (local_20 != 0) {
      iVar11 = uVar10 - 1;
      puVar13 = (ushort *)(in_EDX + 0xb34 + uVar10 * 2);
      do {
        psVar9 = (short *)(in_EDX + 0xb34 + iVar11 * 2);
        sVar1 = *(short *)(in_EDX + 0xb34 + iVar11 * 2);
        iVar7 = iVar11;
        while (sVar1 == 0) {
          psVar9 = psVar9 + -1;
          iVar7 = iVar7 + -1;
          sVar1 = *psVar9;
        }
        psVar9 = (short *)(in_EDX + 0xb34 + iVar7 * 2);
        *psVar9 = *psVar9 + -1;
        psVar9 = (short *)(in_EDX + 0xb36 + iVar7 * 2);
        *psVar9 = *psVar9 + 2;
        *puVar13 = *puVar13 - 1;
        local_20 = local_20 + -2;
      } while (0 < local_20);
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar6 = (uint)*puVar13;
        if (uVar6 != 0) {
          iVar11 = in_EDX + 0xb54 + local_14 * 4;
          local_18 = uVar6;
          do {
            iVar7 = *(int *)(iVar11 + -4);
            local_14 = local_14 + -1;
            iVar11 = iVar11 + -4;
            if (iVar7 <= iVar2) {
              uVar6 = (uint)*(ushort *)(iVar3 + 2 + iVar7 * 4);
              if (uVar6 != uVar10) {
                *(uint *)(in_EDX + 0x16a0) =
                     *(int *)(in_EDX + 0x16a0) +
                     (uVar10 - uVar6) * (uint)*(ushort *)(iVar3 + iVar7 * 4);
                *(short *)(iVar3 + 2 + iVar7 * 4) = (short)uVar10;
              }
              uVar6 = local_18 - 1;
              local_18 = uVar6;
            }
          } while (uVar6 != 0);
        }
        puVar13 = puVar13 + -1;
      }
    }
  }
  return;
}
