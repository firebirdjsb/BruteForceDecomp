/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36C296C21B9F455A2BAEF4F56A332D0E3C1106C3359F875C2D418016ED5C8476
 * Entry: 0x000279d0, Ghidra index: 273, label: FUN_000279d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
undefined4 FUN_000279d0(float *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int *in_ECX;
  int *piVar12;
  bool bVar13;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  piVar1 = in_ECX + -0x10;
  bVar13 = false;
  piVar7 = (int *)(**(code **)(in_ECX[-0x10] + 0x24))();
  uVar8 = in_ECX[0x16c];
  if (4 < uVar8) {
    return 1;
  }
switchD_00027a13_switchD:
  /* 0x00027a13: JMP [EAX*4 + 0x00027dd4], bounded by unsigned EAX <= 4.
   * The original five 4-byte entries map indices 0..4 to the destinations
   * below. Switch on the index, not on Ghidra's pointer-valued case labels. */
  switch(uVar8) {
  case 1: /* Original destination: 0x00027a1a. */
    goto switchD_00027a13_caseD_27a1a;
  case 0: /* Original destination: 0x00027bc4. */
    iVar11 = FUN_0017c5a0();
    if (iVar11 == 0) {
      return 1;
    }
    iVar11 = FUN_00055aa0();
    if ((*(uint *)(iVar11 + 0x88) & 0x400) == 0) {
      return 1;
    }
    cVar6 = FUN_00026d80(piVar1,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
    fStack_1c = (float)in_ECX[0x10f];
    iStack_20 = in_ECX[0x10e];
    fStack_18 = (float)in_ECX[0x110];
    if (cVar6 != '\0') {
      FUN_000255d0(param_1,0);
      FUN_0004d970(piVar1,param_1,0,1,1);
      return 1;
    }
    iVar11 = FUN_00055aa0();
    *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 2;
    (**(code **)(*piVar7 + 0x28))();
    pfVar10 = (float *)FUN_0001fdd0();
    fVar4 = pfVar10[2];
    fVar5 = pfVar10[1];
    *param_1 = -*pfVar10;
    param_1[1] = -fVar5;
    param_1[2] = -fVar4;
    FUN_0004d970(piVar1,param_1,1,1,1);
    break;
  case 2: /* Original destination: 0x00027cea. */
    if (((*(byte *)(in_ECX + 0x1e8) & 1) != 0) &&
       ((float)in_ECX[0x1e7] < 0.0 == ((float)in_ECX[0x1e7] == 0.0))) {
      fVar4 = (float)in_ECX[0x1e5];
      fVar5 = (float)in_ECX[0x1e4];
      *param_1 = (float)in_ECX[0x1e3];
      param_1[1] = fVar5;
      param_1[2] = fVar4;
      FUN_0004d970(piVar1,param_1,2,1,1);
      return 1;
    }
    break;
  case 3: /* Original destination: 0x00027d49. */
    in_ECX[0x16c] = 1;
    iVar11 = FUN_000120f0();
    if ((*(byte *)(*(int *)(iVar11 + 8) + 0xc50) & 0x10) != 0) {
      return 1;
    }
    cVar6 = FUN_00027540(piVar1,in_ECX + 0x16d);
    if (cVar6 == '\0') {
      return 1;
    }
    iVar11 = FUN_000337f0(piVar1,in_ECX + 0x16d,0x3f7851ec);
    in_ECX[0x16c] = (-(uint)(iVar11 != 0) & 3) + 1;
    return 1;
  case 4: /* Original destination: 0x00027d9f. */
    iVar11 = (**(code **)(*in_ECX + 0x5c0))(param_1);
    if (iVar11 == 1) {
      return 1;
    }
    (**(code **)(*in_ECX + 0x5bc))();
    in_ECX[0x16c] = 1;
    return 1;
  }
  in_ECX[0x16c] = 3;
  return 1;
switchD_00027a13_caseD_27a1a:
  iVar11 = (**(code **)(*piVar7 + 0x28))();
  fStack_18 = *(float *)(iVar11 + 0x20);
  fStack_1c = *(float *)(iVar11 + 0x14);
  *param_1 = -*(float *)(iVar11 + 8);
  param_1[1] = -fStack_1c;
  param_1[2] = -fStack_18;
  FUN_0004d970(piVar1,param_1,1,1,1);
  if ((*(byte *)(in_ECX + 0xe1) & 2) != 0) {
    return 1;
  }
  if (in_ECX[-0xe] == 0) {
    piVar12 = in_ECX + -0xd;
  }
  else {
    bVar13 = true;
    uStack_24 = 0;
    piVar12 = &iStack_28;
  }
  iVar11 = piVar12[1];
  if (((bVar13) && (bVar13 = false, uStack_24 != 0)) && ((uStack_24 & 1) == 0)) {
    iVar9 = uStack_24 * 0x19660d;
    uStack_24 = 0;
    iVar2 = *(int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
    piVar12 = (int *)(&DAT_00414da0 + (iVar9 + 0x3c6ef35fU >> 0x15) * 4);
    while (iVar2 != 0) {
      piVar3 = (int *)*piVar12;
      if (piVar3 == &iStack_28) {
        *piVar12 = *(int *)*piVar12;
        break;
      }
      piVar12 = piVar3;
      iVar2 = *piVar3;
    }
  }
  if (iVar11 == 0) {
    return 1;
  }
  cVar6 = (**(code **)(in_ECX[-10] + 0x3c))
                    (param_1,in_ECX[0xdf],(float)in_ECX[0xe0] * 0.017453292,0,0);
  if (cVar6 == '\0') {
    return 1;
  }
  if (((*(byte *)(in_ECX + 0x1e8) & 1) != 0) &&
     ((float)in_ECX[0x1e7] < 0.0 == ((float)in_ECX[0x1e7] == 0.0))) {
    return 1;
  }
  in_ECX[0x1e9] = 0x3f000000;
  in_ECX[0x1e7] = 0x3f000000;
  *(byte *)(in_ECX + 0x1e8) = *(byte *)(in_ECX + 0x1e8) & 0xf9 | 1;
  fVar4 = param_1[2];
  fVar5 = param_1[1];
  in_ECX[0x1e3] = (int)*param_1;
  in_ECX[0x1e4] = (int)fVar5;
  in_ECX[0x1e5] = (int)fVar4;
  in_ECX[0x16c] = 2;
  uVar8 = in_ECX[0x16c];
  if (4 < uVar8) {
    return 1;
  }
  goto switchD_00027a13_switchD;
}
