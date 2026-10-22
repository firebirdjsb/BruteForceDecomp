/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 104CDE5AD565A5444DD515A4744D7BD78CE63290CAED96243DFC37262547C65C
 * Entry: 0x00232be0, Ghidra index: 7774, label: FUN_00232be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038d900;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00232be0(float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 in_XMM4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  
  auVar5 = rcpss(in_XMM4,ZEXT416((uint)param_1));
  fVar4 = auVar5._0_4_;
  if ((float)((uint)param_1 | DAT_0038d900) < -1.0) {
    fVar8 = fVar4 * fVar4;
    auVar5 = rcpss(ZEXT416((uint)(fVar8 + 1.2797564)),ZEXT416((uint)(fVar8 + 1.2797564)));
    auVar5._0_4_ = auVar5._0_4_ * -0.09164612 + fVar8 + 2.197217;
    auVar5 = rcpss(auVar5,auVar5);
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = auVar5._0_4_ * -1.3956946 + fVar8 + 6.8193064;
    auVar5 = rcpss(auVar6,auVar6);
    auVar7._4_12_ = auVar5._4_12_;
    auVar7._0_4_ = auVar5._0_4_ * -94.39393 + fVar8 + 28.205206;
    auVar5 = rcpss(auVar7,auVar7);
    fVar4 = (float)((uint)param_1 & 0x80000000 | 0x3fc90fdb) - auVar5._0_4_ * fVar4 * 12.888383;
  }
  else {
    fVar4 = param_1 * param_1;
    auVar5 = rcpss(ZEXT416((uint)(fVar4 + 1.2797564)),ZEXT416((uint)(fVar4 + 1.2797564)));
    auVar1._4_12_ = auVar5._4_12_;
    auVar1._0_4_ = auVar5._0_4_ * -0.09164612 + fVar4 + 2.197217;
    auVar5 = rcpss(auVar1,auVar1);
    auVar2._4_12_ = auVar5._4_12_;
    auVar2._0_4_ = auVar5._0_4_ * -1.3956946 + fVar4 + 6.8193064;
    auVar5 = rcpss(auVar2,auVar2);
    auVar3._4_12_ = auVar5._4_12_;
    auVar3._0_4_ = auVar5._0_4_ * -94.39393 + fVar4 + 28.205206;
    auVar5 = rcpss(auVar3,auVar3);
    fVar4 = param_1 * 12.888383 * auVar5._0_4_;
  }
  return (float10)fVar4;
}
