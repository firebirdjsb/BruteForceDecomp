/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51DE2978460DD0EEEAFEC427B85E551ADA075137DBCA706B5D4D32D84F101BB6
 * Entry: 0x00233290, Ghidra index: 7781, label: FUN_00233290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00233290(float param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  fVar3 = ABS(param_1) * 0.63661975;
  uVar1 = (uint)(fVar3 + 1.0);
  fVar4 = (fVar3 + 1.0) - (float)(int)uVar1;
  if ((uVar1 & 1) != 0) {
    fVar4 = 1.0 - fVar4;
  }
  uVar2 = (uint)fVar3;
  fVar3 = fVar3 - (float)(int)uVar2;
  if ((uVar2 & 1) != 0) {
    fVar3 = 1.0 - fVar3;
  }
  fVar5 = fVar4 * fVar4;
  fVar7 = fVar3 * fVar3;
  auVar6 = ZEXT416((uint)((((fVar5 * -0.004681754 + 0.079692625) * fVar5 + -0.6459641) * fVar5 +
                          1.5707964) * fVar4));
  auVar6 = rcpss(auVar6,auVar6);
  return (float10)(auVar6._0_4_ *
                  (((fVar7 * -0.004681754 + 0.079692625) * fVar7 + -0.6459641) * fVar7 + 1.5707964)
                  * (float)((uint)fVar3 |
                           (uint)param_1 & 0x80000000 ^ (uVar1 & 2) << 0x1e ^ (uVar2 & 2) << 0x1e));
}
