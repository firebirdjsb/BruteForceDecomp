/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96B4BA7A1A3AB1E0B4D1AC6021874B9D129062D5437D8201040CA35F44872C27
 * Entry: 0x0002f270, Ghidra index: 312, label: FUN_0002f270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a400c;
extern uint32_t PTR_LAB_0039cc18;
undefined4 FUN_0002f270(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  char cVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  float *pfVar13;
  float fVar14;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  undefined4 local_3fc;
  undefined **ppuStack_3f8;
  undefined1 *puStack_3f4;
  float fStack_3f0;
  float *local_3ec;
  int *local_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  int iStack_3d4;
  byte bStack_3d0;
  undefined1 auStack_3cc [88];
  undefined **appuStack_374 [72];
  undefined1 auStack_254 [4];
  int aiStack_250 [64];
  int iStack_150;
  byte bStack_10;
  
  *(undefined4 *)(param_1 + 0x544) = param_2;
  *(undefined4 *)(param_1 + 0x548) = param_3;
  local_3fc = 0;
  piVar7 = (int *)FUN_000120f0();
  if (*(int *)(param_1 + 0x42c) == 0) {
    FUN_00055a60(param_1 + 0x41c);
  }
  local_3ec = (float *)(*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c));
  uVar8 = (int)local_3ec - 1;
  if (*(uint *)(param_1 + 0x424) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(param_1 + 0x424);
  }
  piVar12 = *(int **)(*(int *)(*(int *)(param_1 + 0x420) + uVar8 * 4) + 0x58);
  local_3e4 = piVar12;
  iVar9 = (**(code **)(*piVar7 + 0x40))();
  pfVar13 = (float *)(iVar9 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x3c4);
  local_3ec = pfVar13;
  if (piVar12 != (int *)0x0) {
    FUN_00055aa0();
    iVar9 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
    if ((iVar9 != 0) && ((*(uint *)(iVar9 + 0x80) >> 3 & 1) != 0)) {
      FUN_00023b20(0x25);
      FUN_00023990(piVar7,0x41700000);
      FUN_0004d520(appuStack_374,auStack_3cc);
      cVar6 = FUN_00023d00();
      appuStack_374[0] = &PTR_LAB_0039cc18;
      if (cVar6 == '\0') {
        FUN_00012440();
        return 0;
      }
      FUN_00012440();
      pfVar13 = local_3ec;
    }
  }
  if (*(int *)(param_1 + 0x42c) == 0) {
    FUN_00055a60(param_1 + 0x41c);
  }
  local_3ec = (float *)(*(int *)(param_1 + 0x428) + *(int *)(param_1 + 0x42c));
  uVar8 = (int)local_3ec - 1;
  if (*(uint *)(param_1 + 0x424) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(param_1 + 0x424);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x420) + uVar8 * 4) + 0x14) != 0) {
    iVar9 = FUN_00055aa0();
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x14) + 0x3c))();
    if (iVar9 == 10) {
      iVar9 = FUN_00055aa0();
      iVar9 = *(int *)(iVar9 + 0x14);
LAB_0002f44c:
      if (iVar9 == 0) {
        return 0;
      }
      goto LAB_0002f454;
    }
  }
  if (local_3e4 == (int *)0x0) {
    return 0;
  }
  FUN_00020170(piVar7,pfVar13,param_2,param_3);
  bStack_10 = bStack_10 ^ ((~(byte)((uint)uVar2 >> 8) & 1) << 2 ^ bStack_10) & 4;
  if (*(int *)(param_1 + 0x510) != 0) {
    aiStack_250[iStack_150] = *(int *)(param_1 + 0x510);
    iStack_150 = iStack_150 + 1;
  }
  puStack_3f4 = auStack_254;
  ppuStack_3f8 = &PTR_FUN_003a400c;
  fStack_3f0 = 1.4013e-44;
  while( true ) {
    piVar7[0x94] = piVar7[0x94] | 1;
    (**(code **)(*piVar7 + 0x40))();
    bStack_3d0 = bStack_3d0 & 0xfd | 1;
    iVar9 = FUN_000594a0(piVar7[0x93],&ppuStack_3f8,0);
    if (iVar9 != 0) break;
    if ((bStack_10 & 4) == 0) goto LAB_0002f44c;
    bStack_10 = bStack_10 & 0xfb;
  }
LAB_0002f454:
  iVar10 = FUN_00055aa0();
  if (((*(byte *)(iVar10 + 0x88) & 4) == 0) || ((*(byte *)(iVar9 + 0x28) & 1) == 0)) {
    bStack_3d0 = bStack_3d0 & 0xfc;
    uStack_3d8 = 0;
    uStack_3dc = 0;
    uStack_3e0 = 0;
    iStack_3d4 = iVar9;
    FUN_000120f0();
    FUN_0011dfa0();
    cVar6 = FUN_000416a0(param_1 + 0x930,1);
    if (cVar6 != '\0') {
      FUN_00025730(param_1 + 0x930,1,0);
      *(undefined4 *)(param_1 + 0x518) = 0;
      fVar14 = *pfVar13 - *(float *)(iVar9 + 0x14);
      fVar5 = pfVar13[2] - *(float *)(iVar9 + 0x1c);
      pfVar4 = (float *)(fVar5 * fVar5 + fVar14 * fVar14);
      auVar15._4_12_ = in_XMM0._4_12_;
      auVar15._0_4_ = SQRT((float)pfVar4);
      *(float *)(param_1 + 0x540) = auVar15._0_4_;
      if (((*(int *)(param_1 + 0x934) != 0) &&
          (local_3ec = (float *)((*(int *)(param_1 + 0x938) - *(int *)(param_1 + 0x934)) / 0x18),
          pfVar4 = local_3ec, local_3ec != (float *)0x0)) && (local_3e4 != (int *)0x0)) {
        (**(code **)(*local_3e4 + 0x40))();
        FUN_0004c480(param_1 + 0x488);
        FUN_00012650();
        FUN_00012600();
        puVar11 = (undefined4 *)FUN_000233d0();
        uVar2 = puVar11[2];
        uVar3 = puVar11[1];
        *(undefined4 *)(param_1 + 0x478) = *puVar11;
        *(undefined4 *)(param_1 + 0x480) = uVar2;
        *(undefined4 *)(param_1 + 0x47c) = uVar3;
        fStack_3f0 = *(float *)(param_1 + 0x480) - pfVar13[2];
        puStack_3f4 = (undefined1 *)0x0;
        ppuStack_3f8 = (undefined **)(*(float *)(param_1 + 0x478) - *pfVar13);
        *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) & 0xfffffeff;
        local_3ec = (float *)(fStack_3f0 * fStack_3f0 +
                             (float)ppuStack_3f8 * (float)ppuStack_3f8 + 0.0);
        pfVar4 = (float *)fStack_3f0;
        if (1.1920929e-07 < (float)local_3ec) {
          auVar15 = rsqrtss(auVar15,local_3ec);
          fVar14 = auVar15._0_4_;
          ppuStack_3f8 = (undefined **)(fVar14 * (float)ppuStack_3f8);
          puStack_3f4 = (undefined1 *)(fVar14 * 0.0);
          fStack_3f0 = fStack_3f0 * fVar14;
          *(uint *)(param_1 + 0x3c4) = *(uint *)(param_1 + 0x3c4) | 0x4000;
          (**(code **)(piVar7[0x6d] + 0x3c))(&ppuStack_3f8);
          pfVar4 = local_3ec;
        }
      }
      local_3ec = pfVar4;
      *(uint *)(param_1 + 0x534) = *(uint *)(param_1 + 0x534) & 0xfffffffe;
      if (*(int *)(param_1 + 0x510) != 0) {
        puVar1 = (uint *)(*(int *)(param_1 + 0x510) + 0x28);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      *(int *)(param_1 + 0x510) = iVar9;
      *(uint *)(iVar9 + 0x28) = *(uint *)(iVar9 + 0x28) | 1;
      iVar9 = FUN_000120f0();
      if ((iVar9 == 0) || (*(int *)(iVar9 + 0x59c) == 0)) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = (int *)FUN_0005bca0();
      }
      if (piVar12 == piVar7) {
        FUN_0002f140();
        FUN_00012320(0x40);
        FUN_00045250(param_1,auStack_3cc,appuStack_374);
        FUN_00012440();
      }
      FUN_00140a60(*(undefined4 *)(piVar7[2] + 0xbe8),piVar7,0xe7ff021,0);
      fVar14 = 23.0;
      if (piVar7[0x167] != 0) {
        fVar14 = 10.0;
      }
      if (1.1920929e-07 < fVar14) {
        *(float *)(param_1 + 0x568) = fVar14;
        *(float *)(param_1 + 0x560) = fVar14;
        *(byte *)(param_1 + 0x564) = *(byte *)(param_1 + 0x564) & 0xf9 | 1;
      }
      local_3fc = 1;
    }
  }
  return local_3fc;
}
