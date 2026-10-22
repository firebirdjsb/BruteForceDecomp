/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F73445BCB2FF6EFBB1D71A7F53EA9BC964D3FC34AA58A22DA3A79F22E4A65B8A
 * Entry: 0x00177700, Ghidra index: 4955, label: FUN_00177700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
extern uint32_t DAT_0046d064;
short * FUN_00177700(short *param_1,float param_2,float param_3,int param_4,undefined4 param_5,
                    byte param_6,int *param_7)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  short *psVar5;
  undefined4 uVar6;
  short sVar7;
  float *pfVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  float fStack_24;
  float fStack_20;
  int local_1c;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar13 = 0;
  param_1[0x734] = 0;
  param_1[0x735] = 0;
  *(undefined4 *)(param_1 + 0x744) = param_5;
  local_14 = 2.8026e-45;
  pfVar4 = &local_14;
  if ((int)param_3 < 3) {
    pfVar4 = &param_3;
  }
  *param_1 = *(short *)pfVar4;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ (*(byte *)(param_1 + 1) ^ param_6) & 1;
  iVar11 = 0;
  if (0 < *param_1) {
    local_1c = 0;
    do {
      piVar1 = (int *)(param_1 + iVar11 * 2 + 2);
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *piVar1 = 0;
      }
      piVar2 = *(int **)(iVar13 + param_4);
      *piVar1 = (int)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      *(undefined4 *)(param_1 + iVar11 * 4 + 300) = *(undefined4 *)(iVar13 + 8 + param_4);
      *(undefined4 *)(param_1 + iVar11 * 4 + 0x12e) = *(undefined4 *)(iVar13 + 0xc + param_4);
      local_14 = param_2 * 0.2857143;
      pfVar4 = (float *)(local_1c + 0x268 + (int)param_1);
      iVar15 = 8;
      fStack_c = (1.0 / param_2) * (1.0 / param_2);
      fVar3 = 1.0 / *(float *)(iVar13 + 0x14 + param_4);
      fStack_20 = -param_2;
      do {
        iVar10 = 8;
        fStack_10 = fStack_20 * fStack_20;
        fStack_24 = -param_2;
        fStack_4 = fStack_20 * fVar3;
        pfVar8 = pfVar4;
        do {
          *pfVar8 = fStack_20;
          pfVar8[1] = *(float *)(iVar13 + 4 + param_4);
          pfVar8[2] = fStack_24;
          *(undefined1 *)(pfVar8 + 3) = 0xff;
          *(undefined1 *)((int)pfVar8 + 0xd) = 0xff;
          *(undefined1 *)((int)pfVar8 + 0xe) = 0xff;
          fStack_8 = 1.0 - (fStack_24 * fStack_24 + fStack_10) * fStack_c;
          if ((1.0 < fStack_8) || (0.0 <= fStack_8)) {
            if (1.0 < fStack_8) {
              fStack_8 = 1.0;
            }
          }
          else {
            fStack_8 = 0.0;
          }
          fStack_8 = (float)*(int *)(iVar13 + 0x10 + param_4) * fStack_8;
          *(char *)((int)pfVar8 + 0xf) = (char)(int)fStack_8;
          pfVar8[4] = fStack_4;
          pfVar4 = pfVar8 + 6;
          iVar10 = iVar10 + -1;
          pfVar8[5] = fStack_24 * fVar3;
          fStack_24 = fStack_24 + local_14;
          pfVar8 = pfVar4;
        } while (iVar10 != 0);
        iVar15 = iVar15 + -1;
        fStack_20 = fStack_20 + local_14;
      } while (iVar15 != 0);
      local_1c = local_1c + 0x600;
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 0x18;
    } while (iVar11 < *param_1);
  }
  psVar5 = param_1 + 6;
  sVar7 = 0;
  iVar13 = 7;
  do {
    *psVar5 = sVar7;
    sVar9 = sVar7 + 1;
    psVar5[1] = sVar9;
    psVar5[2] = sVar7 + 8;
    psVar5[3] = sVar9;
    sVar12 = sVar7 + 9;
    psVar5[4] = sVar12;
    psVar5[5] = sVar7 + 8;
    psVar5[6] = sVar9;
    sVar9 = sVar7 + 2;
    psVar5[7] = sVar9;
    psVar5[8] = sVar12;
    psVar5[9] = sVar9;
    sVar14 = sVar7 + 10;
    psVar5[10] = sVar14;
    psVar5[0xb] = sVar12;
    psVar5[0xc] = sVar9;
    sVar9 = sVar7 + 3;
    psVar5[0xd] = sVar9;
    psVar5[0xe] = sVar14;
    psVar5[0xf] = sVar9;
    sVar12 = sVar7 + 0xb;
    psVar5[0x10] = sVar12;
    psVar5[0x11] = sVar14;
    psVar5[0x12] = sVar9;
    sVar9 = sVar7 + 4;
    psVar5[0x13] = sVar9;
    psVar5[0x14] = sVar12;
    psVar5[0x15] = sVar9;
    sVar14 = sVar7 + 0xc;
    psVar5[0x16] = sVar14;
    psVar5[0x17] = sVar12;
    psVar5[0x18] = sVar9;
    sVar9 = sVar7 + 5;
    psVar5[0x19] = sVar9;
    psVar5[0x1a] = sVar14;
    psVar5[0x1b] = sVar9;
    sVar12 = sVar7 + 0xd;
    psVar5[0x1c] = sVar12;
    psVar5[0x1d] = sVar14;
    psVar5[0x1e] = sVar9;
    sVar9 = sVar7 + 6;
    psVar5[0x1f] = sVar9;
    psVar5[0x20] = sVar12;
    psVar5[0x21] = sVar9;
    sVar14 = sVar7 + 0xe;
    psVar5[0x22] = sVar14;
    psVar5[0x23] = sVar12;
    psVar5[0x24] = sVar9;
    psVar5[0x25] = sVar7 + 7;
    psVar5[0x26] = sVar14;
    psVar5[0x27] = sVar7 + 7;
    psVar5[0x28] = sVar7 + 0xf;
    psVar5[0x29] = sVar14;
    psVar5 = psVar5 + 0x2a;
    sVar7 = sVar7 + 8;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  param_1[0x736] = -1;
  param_1[0x737] = -1;
  param_1[0x738] = 0;
  param_1[0x739] = 0;
  param_1[0x73a] = 0;
  param_1[0x73b] = 0;
  param_1[0x73c] = 0;
  param_1[0x73d] = 0;
  param_1[0x73e] = 0;
  param_1[0x73f] = 0;
  param_1[0x740] = 0;
  param_1[0x741] = 0;
  param_1[0x742] = 0;
  param_1[0x743] = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfd;
  if (*param_7 != DAT_0046d064) {
    iVar13 = (**(code **)(*DAT_00443310 + 0x40))(param_7);
    if (iVar13 != 0) {
      uVar6 = (**(code **)(*DAT_00443310 + 0x68))(DAT_00443310,iVar13);
      *(undefined4 *)(param_1 + 0x736) = uVar6;
    }
  }
  return param_1;
}
