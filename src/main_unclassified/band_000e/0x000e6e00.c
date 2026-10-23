/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E1107086624EDB2E4768392F3896E6EC62F12C8A37AAF916119AE99F514BA75
 * Entry: 0x000e6e00, Ghidra index: 2866, label: FUN_000e6e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000e6e00(undefined4 *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar7;
  undefined4 uVar6;
  float *in_EDX;
  
  fVar1 = in_EDX[1];
  pfVar2 = (float *)*param_1;
  fVar5 = *pfVar2 * 0.5 + pfVar2[2];
  fVar3 = ABS(*pfVar2 * 0.5);
  fVar4 = fVar5 + fVar3;
  uVar7 = (undefined2)((uint)in_EDX[2] >> 0x10);
  uVar6 = CONCAT22(uVar7,(ushort)(fVar4 < fVar1) << 8 | (ushort)(isnan(fVar4) || isnan(fVar1)) << 10 |
                         (ushort)(fVar4 == fVar1) << 0xe);
  if (fVar4 >= fVar1) {
    fVar5 = fVar5 - fVar3;
    uVar6 = CONCAT22(uVar7,(ushort)(fVar1 < fVar5) << 8 | (ushort)(isnan(fVar1) || isnan(fVar5)) << 10 |
                           (ushort)(fVar1 == fVar5) << 0xe);
    if (fVar1 >= fVar5) {
      fVar4 = in_EDX[2] - pfVar2[3];
      fVar1 = (*in_EDX - pfVar2[1]) * (*in_EDX - pfVar2[1]) + fVar4 * fVar4 + 0.0;
      fVar3 = pfVar2[4] * pfVar2[4];
      uVar6 = CONCAT22((short)((uint)fVar4 >> 0x10),
                       (ushort)(fVar3 < fVar1) << 8 | (ushort)(isnan(fVar3) || isnan(fVar1)) << 10 |
                       (ushort)(fVar3 == fVar1) << 0xe);
      if (fVar3 >= fVar1) {
        uVar6 = FUN_000e6d00(pfVar2 + 5);
        return uVar6;
      }
    }
  }
  return uVar6;
}
