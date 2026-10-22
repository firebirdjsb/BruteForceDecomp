/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D7A40C279BBC615943C6884E0B8573CE60892F6CAC4CB75A59B86EFFA73453D
 * Entry: 0x000b0940, Ghidra index: 2098, label: FUN_000b0940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_000b0940(int param_1,float *param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint3 uVar6;
  float fVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  
  fVar3 = param_2[2] - *(float *)(param_1 + 0xd0);
  fVar4 = *param_2 - *(float *)(param_1 + 200);
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  *param_3 = *param_2;
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
  param_3[1] = fVar2;
  param_3[2] = fVar1;
  fVar1 = *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90);
  uVar6 = (uint3)(CONCAT22((short)((uint)param_3 >> 0x10),
                           (ushort)(fVar5 < fVar1) << 8 | (ushort)(isnan(fVar5) || isnan(fVar1)) << 10 |
                           (ushort)(fVar5 == fVar1) << 0xe) >> 8);
  if (fVar5 < fVar1) {
    return CONCAT31(uVar6,1);
  }
  if (param_4 != '\0') {
    auVar8 = rsqrtss(in_XMM0,fVar5);
    fVar7 = auVar8._0_4_;
    fVar2 = *(float *)(param_1 + 0x90);
    fVar1 = *(float *)(param_1 + 0xd0);
    fVar5 = fVar2 * fVar7 * 0.0 + *(float *)(param_1 + 0xcc);
    *param_3 = fVar2 * fVar4 * fVar7 + *(float *)(param_1 + 200);
    param_3[1] = fVar5;
    param_3[2] = fVar2 * fVar3 * fVar7 + fVar1;
    return (uint)fVar5 & 0xffffff00;
  }
  return (uint)uVar6 << 8;
}
