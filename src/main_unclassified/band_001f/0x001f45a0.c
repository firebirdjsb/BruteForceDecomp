/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7A59C855728A403E7180E1D4276043560D74C00DD219EC9CC19991F11EF19F8
 * Entry: 0x001f45a0, Ghidra index: 7033, label: FUN_001f45a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
void FUN_001f45a0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *in_EAX;
  int *piVar9;
  undefined4 uVar10;
  float in_ECX;
  float fVar11;
  int iVar12;
  float *unaff_ESI;
  float *pfVar13;
  float *pfVar14;
  int local_18;
  int local_14;
  
  unaff_ESI[8] = (float)in_EAX;
  unaff_ESI[7] = in_ECX;
  *unaff_ESI = 1.0 / (float)in_EAX[2];
  unaff_ESI[1] = (float)in_EAX[2] * 1.4142135;
  fVar3 = (float)in_EAX[2];
  unaff_ESI[2] = fVar3 * 16.0;
  unaff_ESI[3] = 1.0 / (fVar3 * 16.0);
  unaff_ESI[4] = unaff_ESI[2] * 0.5;
  iVar12 = in_EAX[1] * *in_EAX;
  piVar9 = (int *)thunk_FUN_002ea01d(iVar12 * 0x40 + 4);
  if (piVar9 == (int *)0x0) {
    pfVar13 = (float *)0x0;
  }
  else {
    pfVar13 = (float *)(piVar9 + 1);
    *piVar9 = iVar12;
    FUN_0001fe40(pfVar13,0x40,iVar12,&LAB_001f3720);
  }
  piVar9 = (int *)unaff_ESI[8];
  fVar3 = unaff_ESI[2];
  unaff_ESI[6] = (float)pfVar13;
  iVar1 = *piVar9;
  local_18 = 0;
  fVar4 = unaff_ESI[2];
  iVar2 = piVar9[1];
  unaff_ESI[5] = 0.0;
  fVar5 = unaff_ESI[2];
  fVar11 = (float)piVar9[0xf];
  if (0 < piVar9[1]) {
    do {
      fVar6 = unaff_ESI[2];
      local_14 = 0;
      pfVar14 = pfVar13;
      if (0 < *(int *)unaff_ESI[8]) {
        do {
          pfVar14[6] = (float)unaff_ESI;
          pfVar14[0xe] = fVar11;
          uVar10 = (**(code **)(*DAT_00443310 + 0x54))((int)fVar11 + 0x10c);
          fVar8 = (float)local_14;
          *(undefined4 *)((int)fVar11 + 0x110) = uVar10;
          fVar7 = unaff_ESI[2];
          pfVar14[1] = (float)local_18 * fVar6 + (float)iVar2 * fVar5 * -0.5 + fVar3 * 0.5;
          local_14 = local_14 + 1;
          pfVar13 = pfVar14 + 0x10;
          fVar11 = (float)((int)fVar11 + 0x134);
          *pfVar14 = fVar8 * fVar7 + (float)iVar1 * fVar4 * -0.5 + fVar3 * 0.5;
          pfVar14 = pfVar13;
        } while (local_14 < *(int *)unaff_ESI[8]);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)((int)unaff_ESI[8] + 4));
  }
  uVar10 = (**(code **)(*DAT_00443310 + 0x20))((int)unaff_ESI[8] + 0xc);
  *(undefined4 *)((int)unaff_ESI[8] + 0x10) = uVar10;
  if (0 < iVar12) {
    do {
      FUN_001f3bd0();
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  unaff_ESI[0xf] = 0.0;
  unaff_ESI[0x15] = 0.0;
  unaff_ESI[0x1a] = 0.0;
  unaff_ESI[0x1b] = 0.0;
  return;
}
