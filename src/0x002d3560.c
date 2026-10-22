/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED9658E93DE7490F276036F009141F53E5DACC29D185199A53EB972AAAF35A4B
 * Entry: 0x002d3560, Ghidra index: 10200, label: FUN_002d3560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d3560(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int unaff_EDI;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  pfVar1 = (float *)(unaff_EDI + 0xb4);
  *(undefined4 *)(unaff_EDI + 0xb8) = *(undefined4 *)(unaff_EDI + 0xa8);
  local_4 = 0;
  *(undefined4 *)(unaff_EDI + 0xbc) = *(undefined4 *)(unaff_EDI + 0xac);
  *pfVar1 = *(float *)(unaff_EDI + 0xa4);
  FUN_002b65a0(pfVar1);
  pfVar3 = *(float **)(unaff_EDI + 0x108);
  fVar2 = *pfVar3 * *pfVar1 +
          pfVar3[1] * *(float *)(unaff_EDI + 0xb8) + pfVar3[2] * *(float *)(unaff_EDI + 0xbc);
  if (0.0 < fVar2) {
    *pfVar1 = *(float *)(unaff_EDI + 0xc4);
    *(undefined4 *)(unaff_EDI + 0xb8) = *(undefined4 *)(unaff_EDI + 200);
    *(undefined4 *)(unaff_EDI + 0xbc) = *(undefined4 *)(unaff_EDI + 0xcc);
    FUN_002b65a0(pfVar1);
    return;
  }
  if (*(int *)(unaff_EDI + 0xd4) == 0) {
    if (-*(float *)(unaff_EDI + 0x100) < fVar2) {
      FUN_002b3e60(&local_10,pfVar1,pfVar3,-fVar2);
      FUN_002b65a0(&local_10);
      fVar2 = *(float *)(unaff_EDI + 0x104);
      local_10 = local_10 * fVar2;
      local_c = local_c * fVar2;
      local_8 = local_8 * fVar2;
      FUN_002b3e60(pfVar1,&local_10,*(undefined4 *)(unaff_EDI + 0x108),
                   -*(float *)(unaff_EDI + 0x100));
      return;
    }
  }
  else {
    FUN_002d3680(unaff_EDI,fVar2);
  }
  return;
}
