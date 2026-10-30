/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7212AD49E92A0CDA8FC2CD8907716B484382EB780731FCF91AF24B72BF5F43FD
 * Entry: 0x00036970, Ghidra index: 361, label: FUN_00036970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fd4;
undefined4 FUN_00036970(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 unaff_ESI;
  float10 fVar5;
  float10 fVar6;
  float *pfVar7;
  float local_128;
  undefined **local_124;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pfVar7 = &local_128;
  iVar3 = FUN_000120f0();
  if (*(float *)(iVar3 + 0x50) != 0.0) {
    fVar1 = *(float *)(iVar3 + 0x54);
    fVar2 = *(float *)(iVar3 + 0x50) * 0.5;
    if (fVar2 < fVar1 == 0 && (fVar2 == fVar1) == 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)iVar3 >> 0x10),
                                      (ushort)(fVar2 < fVar1) << 8 |
                                      (ushort)(isnan(fVar2) || isnan(fVar1)) << 10 |
                                      (ushort)(fVar2 == fVar1) << 0xe) >> 8),1);
    }
  }
  local_128 = 25.0;
  uVar4 = FUN_000120f0(&local_128);
  fVar5 = (float10)FUN_0004a3a0(unaff_ESI,uVar4,pfVar7);
  local_128 = (float)fVar5;
  fVar5 = (float10)FUN_0004a3a0(unaff_ESI,param_1,0);
  fVar6 = (float10)local_128 + (float10)local_128;
  uVar4 = CONCAT22(extraout_var,
                   (ushort)(fVar6 < fVar5) << 8 | (ushort)(isnan(fVar6) || isnan(fVar5)) << 10 |
                   (ushort)(fVar6 == fVar5) << 0xe);
  if (fVar6 >= fVar5) {
    local_18 = 0;
    uStack_14 = 0;
    uStack_20 = 0;
    uStack_1c = 1;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0xbf800000;
    uStack_4 = 0x4cbebc20;
    local_124 = &PTR_LAB_003a3fd4;
    fVar5 = (float10)FUN_0004a280(unaff_ESI);
    fVar6 = (float10)local_128 * (float10)4.0;
    uVar4 = CONCAT22(extraout_var_00,
                     (ushort)(fVar6 < fVar5) << 8 | (ushort)(isnan(fVar6) || isnan(fVar5)) << 10 |
                     (ushort)(fVar6 == fVar5) << 0xe);
    if (fVar6 >= fVar5) {
      return uVar4;
    }
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}
