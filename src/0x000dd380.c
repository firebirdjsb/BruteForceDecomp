/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77C14F72A9290726F05DF72A27213EB28D8DC7E160FDF7EDAB3386D243798EF3
 * Entry: 0x000dd380, Ghidra index: 2707, label: FUN_000dd380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_000dd380(float param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  float fStack_f4;
  undefined4 *puStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float *pfStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined4 *puStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if ((*(char *)(*(int *)((int)param_1 + 0xbf0) + 0x84) != '\0') &&
     (piVar2 = *(int **)(*(int *)((int)param_1 + 0xbf0) + 0x38), piVar2 != (int *)0x0)) {
    iVar12 = *(int *)(DAT_00469948 + 0x2b0);
    pfVar10 = (float *)(**(code **)(piVar2[0x12] + 0xc))();
    puStack_b8 = (undefined4 *)pfVar10[2];
    fStack_f4 = pfVar10[1];
    fStack_c0 = *pfVar10;
    pfStack_d4 = afStack_90;
    fStack_bc = fStack_f4;
    pfVar11 = (float *)(**(code **)(*piVar2 + 0x130))();
    pfVar10 = pfStack_d4;
    fVar3 = pfVar11[1];
    fVar4 = pfVar11[2];
    fVar5 = pfVar11[3];
    fVar1 = pfVar11[8];
    fVar6 = pfVar11[4];
    fVar7 = pfVar11[5];
    fVar8 = pfVar11[6];
    fVar9 = pfVar11[7];
    *pfStack_d4 = *pfVar11;
    pfVar10[1] = fVar3;
    pfVar10[2] = fVar4;
    pfVar10[3] = fVar5;
    pfVar10[8] = fVar1;
    pfVar10[4] = fVar6;
    pfVar10[5] = fVar7;
    pfVar10[6] = fVar8;
    pfVar10[7] = fVar9;
    fStack_f4 = param_2 * 120.0;
    fVar14 = (float10)thunk_FUN_002ebfbe();
    pfStack_d4 = (float *)(float)(fVar14 * (float10)fStack_f4);
    fVar14 = (float10)thunk_FUN_002ebfbe();
    fStack_e8 = (float)(fVar14 * (float10)fStack_f4);
    fStack_ec = 0.0;
    puStack_f0 = (undefined4 *)0x0;
    FUN_0001f9c0();
    puStack_f0 = pfStack_d4;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    FUN_0001f9c0();
    fStack_e8 = fStack_c8 + (float)puStack_b8;
    fStack_ec = fStack_cc + fStack_bc;
    puStack_b8 = (undefined4 *)(fStack_dc + fStack_e8);
    fStack_bc = fStack_e0 + fStack_ec;
    fStack_c0 = fStack_e4 + fStack_d0 + fStack_c0;
    (**(code **)(*piVar2 + 0x38))(&fStack_c0);
    if (*(float *)(iVar12 + 0xf0) != 0.0) {
      iVar12 = (**(code **)(*piVar2 + 0x40))();
      fStack_e0 = *(float *)(iVar12 + 0x20);
      fStack_e4 = *(float *)(iVar12 + 0x14);
      fStack_e8 = *(float *)(iVar12 + 8);
      fStack_ec = 0.0;
      if (ABS(fStack_e4) <= 0.999) {
        fStack_cc = fStack_e4 * 0.0 - fStack_e8 * 1.0;
        fStack_d0 = fStack_e8 * 0.0 - fStack_e0 * 0.0;
        pfStack_d4 = (float *)(fStack_e0 * 1.0 - fStack_e4 * 0.0);
        FUN_0001fd40();
        puStack_b8 = pfStack_d4;
        fStack_ec = fStack_d0 * fStack_e8 - (float)pfStack_d4 * fStack_e4;
        fStack_a0 = fStack_cc;
        fStack_b0 = fStack_e8;
        puStack_f0 = (undefined4 *)(fStack_e0 * (float)pfStack_d4 - fStack_cc * fStack_e8);
        fStack_ac = fStack_d0;
        fStack_b4 = fStack_cc * fStack_e4 - fStack_d0 * fStack_e0;
        fStack_a4 = fStack_e4;
        fStack_98 = fStack_e0;
        fStack_a8 = (float)puStack_f0;
        fStack_9c = fStack_ec;
        (**(code **)(*piVar2 + 0x3c))(&puStack_b8);
        return;
      }
      fStack_9c = 0.0;
      fStack_a0 = 0.0;
      fStack_a4 = 0.0;
      fStack_ac = 0.0;
      fStack_b0 = 0.0;
      fStack_b4 = 0.0;
      fStack_98 = 1.0;
      fStack_a8 = 1.0;
      puStack_b8 = (undefined4 *)0x3f800000;
      (**(code **)(*piVar2 + 0x3c))(&puStack_b8);
      return;
    }
    fVar14 = (float10)thunk_FUN_002ebfbe();
    fVar15 = (float10)thunk_FUN_002ebfbe();
    fStack_f4 = fStack_94;
    puStack_f0 = (undefined4 *)uStack_88;
    fStack_ec = (float)uStack_7c;
    FUN_0001fc70(&pfStack_d4,&fStack_f4,(float)(fVar14 * (float10)(param_1 * 210.0)) * 0.99999994);
    fStack_f4 = afStack_90[0];
    puStack_f0 = (undefined4 *)uStack_84;
    fStack_ec = (float)uStack_78;
    FUN_0001fc70(&fStack_e8,&fStack_f4,(float)(-(float10)(param_1 * 210.0) * fVar15) * 0.99999994);
    FUN_002333b0(&pfStack_d4);
    FUN_002333b0(&fStack_e8);
    puStack_b8 = (undefined4 *)FUN_002334b0();
    puStack_b8 = (undefined4 *)*puStack_b8;
    puVar13 = (undefined4 *)FUN_002334b0();
    uStack_70 = *puVar13;
    uStack_6c = puVar13[1];
    uStack_68 = puVar13[2];
    uStack_64 = puVar13[3];
    uStack_50 = puVar13[8];
    uStack_60 = puVar13[4];
    uStack_5c = puVar13[5];
    uStack_58 = puVar13[6];
    uStack_54 = puVar13[7];
    (**(code **)(*piVar2 + 0x3c))(&uStack_70);
  }
  return;
}
