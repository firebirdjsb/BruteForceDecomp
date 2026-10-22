/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32CCB66DEA00B7E723F02F646FBF269A5094792EE469811EEB5D1CA3A93E1D3B
 * Entry: 0x00087d70, Ghidra index: 1629, label: FUN_00087d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00087d70(void)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined2 extraout_var;
  int *unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)unaff_ESI[0x3c]);
  if ((char)unaff_ESI[0x3c] != '\0') {
    fVar2 = (float10)(**(code **)(*unaff_ESI + 0x44))();
    fVar3 = (fVar2 - (float10)(float)unaff_ESI[0x42]) * (float10)(float)unaff_ESI[0x41];
    fVar2 = (float10)1.0;
    uVar1 = CONCAT31((int3)(CONCAT22(extraout_var,
                                     (ushort)(fVar3 < fVar2) << 8 |
                                     (ushort)(isnan(fVar3) || isnan(fVar2)) << 10 |
                                     (ushort)(fVar3 == fVar2) << 0xe) >> 8),1);
    if (fVar3 < fVar2 != (fVar3 == fVar2)) {
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}
