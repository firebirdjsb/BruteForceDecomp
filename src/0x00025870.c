/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93BCAEF1744D6170CF70640B24BCB0803CC45F8CE6663C2E0CED991FBDAD20C7
 * Entry: 0x00025870, Ghidra index: 260, label: FUN_00025870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00025870(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_EAX;
  undefined2 uVar6;
  uint3 uVar5;
  float *in_ECX;
  float *unaff_ESI;
  ushort uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float local_8;
  float fStack_4;
  
  fVar1 = in_ECX[2] - in_EAX[2];
  fVar2 = in_ECX[1] - in_EAX[1];
  fVar3 = *in_ECX - *in_EAX;
  fVar4 = unaff_ESI[2] - in_EAX[2];
  local_8 = unaff_ESI[1] - in_EAX[1];
  fVar9 = *unaff_ESI - *in_EAX;
  fVar8 = SQRT(fVar9 * fVar9 + local_8 * local_8 + fVar4 * fVar4);
  fVar11 = (float)((uint)local_8 & 0xffff0000);
  if (fVar8 <= 0.01) {
    fVar9 = 0.0;
    fStack_4 = 0.0;
    local_8 = 0.0;
  }
  else {
    auVar10 = rcpss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar11 = auVar10._0_4_;
    fVar9 = fVar11 * fVar9;
    local_8 = fVar11 * local_8;
    fVar11 = fVar11 * fVar4;
    fStack_4 = fVar11;
  }
  fVar4 = fVar3 * fVar9 + fVar1 * fStack_4 + fVar2 * local_8;
  uVar7 = (ushort)(fVar4 < fVar8) << 8 | (ushort)(isnan(fVar4) || isnan(fVar8)) << 10 |
          (ushort)(fVar4 == fVar8) << 0xe;
  uVar6 = (undefined2)((uint)fVar11 >> 0x10);
  if (fVar4 < fVar8) {
    fVar1 = (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) - fVar4 * fVar4;
    uVar7 = (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
    if (fVar1 >= 0.0) {
      param_1 = param_1 * param_1;
      uVar5 = (uint3)(CONCAT22(uVar6,(ushort)(fVar1 < param_1) << 8 |
                                     (ushort)(isnan(fVar1) || isnan(param_1)) << 10 |
                                     (ushort)(fVar1 == param_1) << 0xe) >> 8);
      if (fVar1 < param_1) {
        return CONCAT31(uVar5,1);
      }
      return (uint)uVar5 << 8;
    }
  }
  return CONCAT22(uVar6,uVar7);
}
