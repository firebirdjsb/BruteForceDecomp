/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E9FC28E61844A92C81FBF7BA4CD8CFF1DDF276EFA4AF256270074626355EE90
 * Entry: 0x00058bc0, Ghidra index: 882, label: FUN_00058bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00058bc0(void)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int in_ECX;
  int unaff_EDI;
  ushort uVar6;
  
  iVar1 = *(int *)(in_ECX + 0x14);
  if (*(int *)(unaff_EDI + 0x14) == iVar1) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  if (iVar1 == 0) {
    pfVar3 = (float *)(in_ECX + 4);
  }
  else {
    pfVar3 = (float *)(**(code **)(*(int *)(iVar1 + 8) + 4))();
  }
  if (*(int *)(unaff_EDI + 0x14) == 0) {
    pfVar4 = (float *)(unaff_EDI + 4);
  }
  else {
    pfVar4 = (float *)(**(code **)(*(int *)(*(int *)(unaff_EDI + 0x14) + 8) + 4))();
  }
  fVar2 = (*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3);
  uVar5 = (uint)(ushort)((ushort)(fVar2 < 9.9999994e-11) << 8 | (ushort)isnan(fVar2) << 10 |
                        (ushort)(fVar2 == 9.9999994e-11) << 0xe);
  if (fVar2 < 9.9999994e-11 != (fVar2 == 9.9999994e-11)) {
    fVar2 = (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]);
    uVar5 = (uint)(ushort)((ushort)(fVar2 < 9.9999994e-11) << 8 | (ushort)isnan(fVar2) << 10 |
                          (ushort)(fVar2 == 9.9999994e-11) << 0xe);
    if (fVar2 < 9.9999994e-11 != (fVar2 == 9.9999994e-11)) {
      fVar2 = (pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2]);
      uVar6 = (ushort)(fVar2 < 9.9999994e-11) << 8 | (ushort)isnan(fVar2) << 10 |
              (ushort)(fVar2 == 9.9999994e-11) << 0xe;
      uVar5 = (uint)uVar6;
      if (fVar2 < 9.9999994e-11 != (fVar2 == 9.9999994e-11)) {
        return CONCAT31((uint3)(byte)(uVar6 >> 8),1);
      }
    }
  }
  return uVar5;
}
