/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B06B9FA2183BC1CCAC9A7C663B360D4527CC3542BE73B5787DACCB3EA4F32FF
 * Entry: 0x0004ba00, Ghidra index: 623, label: FUN_0004ba00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* Ghidra RSQRTSS scalar low-lane opcode model; unobserved upper lanes omitted.
 * Original x86 ABI/behavior still ABI_UNVERIFIED. */
/* WARNING: Removing unreachable block (ram,0x0004ba5e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

extern void FUN_00058b60(void);
extern uint FUN_00058bc0(void);

uint FUN_0004ba00(int param_1,float *param_2,float *param_3,float param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int in_EAX;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  undefined1 in_XMM0 [16];
  __m128 auVar10;
  
  iVar1 = *(int *)(in_EAX + 8);
  FUN_00058b60();
  iVar2 = *(int *)(in_EAX + 8);
  iVar8 = *(int *)(in_EAX + 4);
  while ((iVar8 != iVar2 && (cVar5 = FUN_00058bc0(), cVar5 == '\0'))) {
    iVar8 = iVar8 + 0x18;
  }
  uVar6 = 0;
  if (((iVar8 == iVar1) &&
      (((param_5 == (undefined4 *)0x0 ||
        (uVar6 = (**(code **)*param_5)(param_1), (char)uVar6 != '\0')) &&
       (uVar6 = *(uint *)(param_1 + 0x28), (uVar6 & 4) != 0)))) && ((uVar6 & 8) == 0)) {
    pfVar7 = (float *)(**(code **)(*(int *)(param_1 + 8) + 4))();
    fVar3 = pfVar7[2] - param_2[2];
    fVar4 = *pfVar7 - *param_2;
    fVar9 = fVar4 * fVar4 + fVar3 * fVar3;
    uVar6 = CONCAT22((short)((uint)fVar3 >> 0x10),
                     (ushort)(fVar9 < 0.0) << 8 | (ushort)isnan(fVar9) << 10 |
                     (ushort)(fVar9 == 0.0) << 0xe);
    if (fVar9 < 0.0 == 0 && (fVar9 == 0.0) == 0) {
      auVar10 = _mm_rsqrt_ss(_mm_set_ss(fVar9));
      fVar9 = _mm_cvtss_f32(auVar10);
      fVar3 = fVar4 * fVar9 * *param_3 + fVar9 * 0.0 * param_3[1] + fVar3 * fVar9 * param_3[2];
      uVar6 = CONCAT22((short)((uint)param_3 >> 0x10),
                       (ushort)(fVar3 < param_4) << 8 | (ushort)(isnan(fVar3) || isnan(param_4)) << 10 |
                       (ushort)(fVar3 == param_4) << 0xe);
      if (fVar3 < param_4 == 0 && (fVar3 == param_4) == 0) {
        return CONCAT31((int3)(uVar6 >> 8),1);
      }
    }
  }
  return uVar6 & 0xffffff00;
}
