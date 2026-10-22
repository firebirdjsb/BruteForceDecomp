/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC3BA4D2327B39D611268E096E8C017110102928DB59F27341491B66D961808F
 * Entry: 0x001209c0, Ghidra index: 3644, label: FUN_001209c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_001209c0(void)

{
  float10 fVar1;
  undefined2 extraout_var;
  uint uVar2;
  int unaff_ESI;
  float10 fVar3;
  
  fVar3 = (float10)FUN_001209f0(unaff_ESI);
  fVar1 = (float10)0.025;
  uVar2 = CONCAT22(extraout_var,
                   (ushort)(fVar3 < fVar1) << 8 | (ushort)(isnan(fVar3) || isnan(fVar1)) << 10 |
                   (ushort)(fVar3 == fVar1) << 0xe);
  if ((((fVar3 >= fVar1) && (uVar2 = *(uint *)(unaff_ESI + 0x1ec), uVar2 != 4)) && (uVar2 != 5)) &&
     (uVar2 != 6)) {
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}
