/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B2760D3A5B2B12A45AA28F9A9FD8AD6AE16125C6CCB8AE813DE7006622FBD38
 * Entry: 0x0006f780, Ghidra index: 1262, label: FUN_0006f780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040de24;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0006f780(int param_1,float param_2)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if ((*(byte *)(param_1 + 0x250) & 2) != 0) {
    if ((*(byte *)(param_1 + 0x250) & 1) != 0) {
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_60 = 0;
      local_64 = 0;
      local_68 = 0;
      local_4c = 0x3f800000;
      local_5c = 0x3f800000;
      local_6c = 0x3f800000;
      FUN_00039380(&local_6c,param_2 * 1.25);
      puVar12 = (undefined4 *)FUN_002334b0();
      uVar5 = puVar12[1];
      uVar6 = puVar12[2];
      uVar7 = puVar12[3];
      uVar1 = puVar12[8];
      uVar8 = puVar12[4];
      uVar9 = puVar12[5];
      uVar10 = puVar12[6];
      uVar11 = puVar12[7];
      *(undefined4 *)(param_1 + 0x228) = *puVar12;
      *(undefined4 *)(param_1 + 0x22c) = uVar5;
      *(undefined4 *)(param_1 + 0x230) = uVar6;
      *(undefined4 *)(param_1 + 0x234) = uVar7;
      *(undefined4 *)(param_1 + 0x248) = uVar1;
      *(undefined4 *)(param_1 + 0x238) = uVar8;
      *(undefined4 *)(param_1 + 0x23c) = uVar9;
      *(undefined4 *)(param_1 + 0x240) = uVar10;
      *(undefined4 *)(param_1 + 0x244) = uVar11;
      return;
    }
    *(float *)(param_1 + 0x24c) = param_2 + *(float *)(param_1 + 0x24c);
    fVar14 = *(float *)(param_1 + 0x24c);
    if (5.0 <= *(float *)(param_1 + 0x24c)) {
      fVar14 = 5.0;
    }
    *(float *)(param_1 + 0x24c) = fVar14;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x148);
  if ((uVar2 != 0) && ((uVar2 & -(uint)((*(byte *)(uVar2 + 0x26) & 0x40) != 0)) != 0)) {
    iVar13 = (**(code **)(*(int *)(-(uint)((*(byte *)(uVar2 + 0x26) & 0x40) != 0) & uVar2) + 0x40))
                       ();
    fVar3 = *(float *)(iVar13 + 0x2c) - *(float *)(param_1 + 0x224);
    fVar4 = *(float *)(iVar13 + 0x28) - *(float *)(param_1 + 0x220);
    fVar14 = *(float *)(iVar13 + 0x24) - *(float *)(param_1 + 0x21c);
    fVar15 = fVar14 * fVar14 + fVar4 * fVar4 + fVar3 * fVar3;
    if ((fVar15 <= 0.5625) && ((fVar15 <= 0.0625 || ((*(byte *)(param_1 + 0x250) & 1) == 0)))) {
      *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) & 0xfe;
      return;
    }
    fVar15 = SQRT(fVar15);
    fVar16 = fVar15 * 0.5;
    if (DAT_0040de24 <= fVar15 * 0.5) {
      fVar16 = DAT_0040de24;
    }
    fVar16 = fVar16 * param_2;
    auVar17 = rcpss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar15 = auVar17._0_4_;
    *(float *)(param_1 + 0x21c) = fVar16 * fVar14 * fVar15 + *(float *)(param_1 + 0x21c);
    *(float *)(param_1 + 0x220) = fVar16 * fVar4 * fVar15 + *(float *)(param_1 + 0x220);
    *(float *)(param_1 + 0x224) = fVar16 * fVar3 * fVar15 + *(float *)(param_1 + 0x224);
    *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 1;
  }
  return;
}
