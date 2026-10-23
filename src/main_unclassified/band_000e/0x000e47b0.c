/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF9CD426D900EB3F9C48068B6CC2CEEA301B841AFC6DE14BC4C0FBFB23083951
 * Entry: 0x000e47b0, Ghidra index: 2851, label: FUN_000e47b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040cfc8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e47b0(int param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  short *psVar4;
  undefined4 *puVar5;
  uint *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  int local_24;
  int local_20;
  
  uVar3 = FUN_002ebf10();
  uVar8 = uVar3 & 0xff;
  uVar8 = ((uVar3 << 8 | uVar8) << 8 | uVar8) << 8 | uVar8;
  psVar4 = (short *)(param_1 + 0xa24);
  iVar9 = 0;
  do {
    sVar7 = (short)iVar9;
    *psVar4 = sVar7;
    psVar4[1] = sVar7 + 1;
    psVar4[2] = sVar7 + 2;
    psVar4[3] = sVar7 + 2;
    psVar4[4] = sVar7 + 3;
    psVar4[5] = sVar7;
    iVar9 = iVar9 + 4;
    psVar4 = psVar4 + 6;
  } while (iVar9 < 0x60);
  puVar5 = (undefined4 *)(param_1 + 0x124);
  local_20 = 0x18;
  do {
    *puVar5 = 0;
    puVar5[1] = 0x3f800000;
    puVar5[2] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[8] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xc] = 0x3f800000;
    puVar5[0x13] = 0x3f800000;
    puVar5[0x12] = 0x3f800000;
    puVar5[0x14] = 0;
    puVar5 = puVar5 + 0x18;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  iVar9 = 0;
  local_20 = 0;
  do {
    iVar1 = param_1 + iVar9 * 0x18;
    fVar12 = (float10)fsin((float10)local_20 * (float10)0.7853982);
    local_24 = 1;
    fVar13 = (float10)fcos((float10)local_20 * (float10)0.7853982);
    puVar6 = (uint *)(iVar1 + 0x130);
    pfVar10 = (float *)(iVar1 + 0x134);
    pfVar11 = (float *)(param_1 + (iVar9 * 3 + 0x27) * 8);
    do {
      *puVar6 = uVar8;
      fVar2 = (float)((float10)(float)fVar12 * (float10)local_24 * (float10)_DAT_0040cfc8);
      fVar14 = (float10)local_24 * (float10)_DAT_0040cfc8 * fVar13;
      *pfVar10 = fVar2;
      iVar9 = iVar9 + 4;
      *pfVar11 = (float)((float10)1.0 + fVar14);
      pfVar10[6] = fVar2;
      puVar6[6] = uVar8;
      pfVar11[6] = (float)fVar14;
      puVar6[0xc] = uVar8;
      local_24 = local_24 + 1;
      pfVar10[0xc] = fVar2 + 1.0;
      pfVar11[0xc] = (float)fVar14;
      puVar6[0x12] = uVar8;
      pfVar10[0x12] = fVar2 + 1.0;
      pfVar11[0x12] = (float)((float10)1.0 + fVar14);
      puVar6 = puVar6 + 0x18;
      pfVar10 = pfVar10 + 0x18;
      pfVar11 = pfVar11 + 0x18;
    } while (local_24 < 4);
    local_20 = local_20 + 1;
  } while (local_20 < 8);
  return CONCAT31((int3)((uint)local_20 >> 8),1);
}
