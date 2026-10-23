/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1703958542318E6699EB6D93C722B050B4EE1AE3EAD2726FF0391B2A7FEE3E69
 * Entry: 0x00179760, Ghidra index: 4989, label: FUN_00179760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00179760(undefined4 param_1,int param_2,int param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar5;
  uint uVar4;
  float fVar6;
  
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 == *(uint *)(param_3 + 4)) {
    fVar1 = *(float *)(param_2 + 0x10) - *(float *)(param_3 + 0x10);
    fVar2 = *(float *)(param_2 + 0xc) - *(float *)(param_3 + 0xc);
    fVar6 = *(float *)(param_2 + 8) - *(float *)(param_3 + 8);
    fVar2 = fVar6 * fVar6 + fVar2 * fVar2 + fVar1 * fVar1;
    fVar6 = *(float *)(param_2 + 0x78) * *(float *)(param_2 + 0x78);
    uVar5 = (undefined2)((uint)fVar1 >> 0x10);
    uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar6) << 8 | (ushort)(isnan(fVar2) || isnan(fVar6)) << 10 |
                           (ushort)(fVar2 == fVar6) << 0xe);
    if (fVar2 < fVar6) {
      fVar1 = *(float *)(param_3 + 0x78) * *(float *)(param_3 + 0x78);
      uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 | (ushort)(isnan(fVar2) || isnan(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1) {
        fVar1 = *(float *)(param_2 + 0x78);
        fVar6 = fVar1;
        if (*(float *)(param_3 + 0x78) <= fVar1) {
          fVar6 = *(float *)(param_3 + 0x78);
        }
        if (param_4 == '\0') {
          fVar3 = 1.0;
        }
        else {
          fVar3 = 2.0;
        }
        fVar6 = fVar3 * fVar6 * fVar3 * fVar6;
        uVar4 = CONCAT31((int3)(CONCAT22((short)((uint)fVar1 >> 0x10),
                                         (ushort)(fVar2 < fVar6) << 8 |
                                         (ushort)(isnan(fVar2) || isnan(fVar6)) << 10 |
                                         (ushort)(fVar2 == fVar6) << 0xe) >> 8),1);
        if (fVar2 < fVar6) {
          return uVar4;
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}
