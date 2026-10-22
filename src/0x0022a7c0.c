/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D75F7D7F493E7A1853FC06E83DDDD8BD93CB54D621C45B848B5D1482C058E84A
 * Entry: 0x0022a7c0, Ghidra index: 7680, label: FUN_0022a7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t *DAT_00469b58;
undefined4 FUN_0022a7c0(float param_1)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int in_ECX;
  float10 fVar12;
  float fVar13;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  cVar6 = (**(code **)(*DAT_00469b58 + 0x14))();
  if (cVar6 != '\0') {
    param_1 = 0.0;
  }
  bVar5 = true;
  iVar8 = FUN_000120f0();
  if (iVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_000120f0();
    uVar9 = -(uint)((*(byte *)(uVar9 + 0x26) & 0x40) != 0) & uVar9;
  }
  iVar8 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x24) + 0x20);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else if ((iVar8 < 0) || (0x18 < iVar8)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(DAT_00469948 + 0x250 + iVar8 * 4);
  }
  if ((uVar9 == 0) ||
     ((bVar7 = *(byte *)(uVar9 + 0x37c) & 1, bVar7 != 0 && ((*(byte *)(in_ECX + 0x40) & 1) == 0))))
  {
LAB_0022aa2c:
    iVar10 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x18);
    if ((iVar10 == 0) || ((*(byte *)(iVar10 + 0x70) & 1) != 0)) {
      FUN_0008a560(0);
      return 1;
    }
  }
  else {
    if ((bVar7 == 0) &&
       ((*(int *)(in_ECX + 0x44) != 0 &&
        (iVar10 = *(int *)(*(int *)(in_ECX + 0x44) + 0x38), iVar10 != 0)))) {
      pbVar1 = (byte *)(iVar10 + 0x88);
      *pbVar1 = *pbVar1 | 2;
    }
    *(float *)(in_ECX + 0x3c) = *(float *)(in_ECX + 0x3c) - param_1;
    if (0.0 <= *(float *)(in_ECX + 0x3c)) goto LAB_0022aa2c;
    FUN_0008a560(0);
    bVar5 = false;
  }
  fStack_14 = 0.0;
  fStack_10 = 0.0;
  if (((((uVar9 == 0) || ((*(byte *)(uVar9 + 0x37c) & 1) == 0)) ||
       ((*(byte *)(in_ECX + 0x40) & 1) != 0)) || ((iVar8 == 0 || (*(int *)(in_ECX + 0x2c) == 0))))
     || (!bVar5)) goto LAB_0022ac9f;
  fVar12 = (float10)FUN_0006c6f0();
  fStack_14 = *(float *)(iVar8 + 0x3c) + *(float *)(iVar8 + 0x38);
  if (fStack_14 <= -1.0) {
    fStack_14 = -1.0;
  }
  if (1.0 <= fStack_14) {
    fStack_14 = 1.0;
  }
  fStack_14 = fStack_14 * fStack_14 * fStack_14;
  FUN_0022a5c0(-((float)((float10)1.0 / fVar12) * fStack_14 * param_1));
  fVar13 = *(float *)(iVar8 + 0x40) + *(float *)(iVar8 + 0x34);
  if (fVar13 <= -1.0) {
    fVar13 = -1.0;
  }
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  fStack_10 = fVar13 * fVar13 * fVar13 * *(float *)(iVar8 + 8);
  FUN_0022a530(uVar9,(float)((float10)1.0 / fVar12) * fStack_10 * param_1);
  fVar13 = *(float *)(iVar8 + 0x44);
  if (*(char *)(*(int *)(uVar9 + 0xc) + 0x40c) != '\0') {
    fVar3 = fVar13 * fVar13;
    fVar4 = fVar3 + fVar3 + 1.0;
    if (fVar4 <= *(float *)(in_ECX + 0x38)) {
      if (*(float *)(in_ECX + 0x38) <= fVar4) goto LAB_0022aab9;
      if (fVar13 <= 0.1) {
        fVar3 = *(float *)(in_ECX + 0x38) - param_1;
      }
      else {
        fVar3 = *(float *)(in_ECX + 0x38) - param_1 * 0.5;
      }
      *(float *)(in_ECX + 0x38) = fVar3;
      fStack_c = 1.0;
      if (1.0 <= *(float *)(in_ECX + 0x38)) {
        fStack_c = *(float *)(in_ECX + 0x38);
      }
    }
    else {
      *(float *)(in_ECX + 0x38) = fVar3 * fVar13 * param_1 + *(float *)(in_ECX + 0x38);
      fStack_c = *(float *)(in_ECX + 0x38);
      if (fVar4 <= *(float *)(in_ECX + 0x38)) {
        fStack_c = fVar4;
      }
    }
    *(float *)(in_ECX + 0x38) = fStack_c;
  }
LAB_0022aab9:
  if (*(int *)(uVar9 + 0x1c0) != *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x28) + 0xc)) {
    FUN_002299b0(uVar9,param_1);
  }
  if (0.4 < fVar13) {
    *(byte *)(uVar9 + 0x37c) = *(byte *)(uVar9 + 0x37c) | 4;
    if ((*(float *)(uVar9 + 0x218) < param_1 != (*(float *)(uVar9 + 0x218) == param_1)) &&
       (*(int *)(in_ECX + 0x2c) != 0)) {
      FUN_0006bdd0((float)*(int *)(*(int *)(uVar9 + 0x228) + 0x10) * 8.0 * 0.02,0,0x3e99999a);
    }
    iVar10 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x28) + 0xc);
    if (*(int *)(uVar9 + 0x1c0) != iVar10) {
      *(int *)(uVar9 + 0x1c0) = iVar10;
      FUN_00057140();
      FUN_00056fe0(*(undefined4 *)(*(int *)(uVar9 + 8) + 0x1f8),uVar9,0);
    }
  }
  if (0.5 < *(float *)(iVar8 + 0x58)) {
    iVar10 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x18);
    if ((iVar10 == 0) || (*(char *)(*(int *)(iVar10 + 0xc) + 0x295) == '\0')) {
      FUN_00223160(*(float *)(uVar9 + 0x54) * 10.0,0);
    }
    else {
      iVar10 = (**(code **)(*(int *)(iVar10 + 0x1b4) + 0x9c))();
      if (*(int *)(in_ECX + 0x34) == iVar10) {
        *(byte *)(in_ECX + 0x40) = *(byte *)(in_ECX + 0x40) | 1;
        *(undefined4 *)(in_ECX + 0x3c) = 0x3f000000;
        if ((*(int *)(in_ECX + 0x44) != 0) &&
           (iVar10 = *(int *)(*(int *)(in_ECX + 0x44) + 0x38), iVar10 != 0)) {
          pbVar1 = (byte *)(iVar10 + 0x88);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      else {
        uVar11 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x18) + 0x1b4) + 0x9c))();
        *(undefined4 *)(in_ECX + 0x34) = uVar11;
        *(byte *)(in_ECX + 0x40) = *(byte *)(in_ECX + 0x40) | 1;
        *(undefined4 *)(in_ECX + 0x3c) = 0x40333333;
        iVar10 = *(int *)(in_ECX + 0x44);
        if (iVar10 != 0) {
          iVar2 = *(int *)(iVar10 + 0x3c);
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x68) = 0;
            *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) | 1;
          }
          if (*(int *)(iVar10 + 0x38) != 0) {
            pbVar1 = (byte *)(*(int *)(iVar10 + 0x38) + 0x88);
            *pbVar1 = *pbVar1 | 2;
          }
        }
      }
    }
  }
  if (*(float *)(iVar8 + 0xc0) != 0.0) {
    FUN_0008a560(0);
    bVar5 = false;
  }
LAB_0022ac9f:
  if ((*(int *)(in_ECX + 0x44) != 0) && (bVar5)) {
    iVar8 = *(int *)(*(int *)(in_ECX + 0x44) + 0x38);
    if (iVar8 != 0) {
      *(float *)(iVar8 + 0x80) = fStack_14;
      *(float *)(iVar8 + 0x84) = fStack_10;
    }
    (**(code **)(**(int **)(in_ECX + 0x44) + 0x1c))(param_1);
  }
  return 1;
}
