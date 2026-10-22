/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 610D3CBD08AA88516EA9636BF63C445AB2A0A5CBD037A5D95E96D819805CC399
 * Entry: 0x000b2070, Ghidra index: 2138, label: FUN_000b2070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b2070(float param_1)

{
  int iVar1;
  float fVar2;
  int unaff_ESI;
  float10 fVar3;
  
  fVar2 = param_1 * *(float *)(unaff_ESI + 0x10) + *(float *)(unaff_ESI + 0xc);
  *(float *)(unaff_ESI + 0xc) = fVar2;
  if (fVar2 <= *(float *)(unaff_ESI + 8)) {
    if ((*(int *)(unaff_ESI + 0x14) == 0) && (fVar2 < 0.0)) {
      fVar3 = (float10)FUN_00306c66();
      *(float *)(unaff_ESI + 0xc) = (float)-fVar3;
      *(float *)(unaff_ESI + 0x10) = -*(float *)(unaff_ESI + 0x10);
    }
  }
  else {
    fVar3 = (float10)FUN_00306c66();
    iVar1 = *(int *)(unaff_ESI + 0x14);
    if (iVar1 == 0) {
      *(float *)(unaff_ESI + 0xc) = (float)((float10)*(float *)(unaff_ESI + 8) - fVar3);
      *(float *)(unaff_ESI + 0x10) = -*(float *)(unaff_ESI + 0x10);
      return;
    }
    if (iVar1 == 1) {
      *(float *)(unaff_ESI + 0xc) = (float)fVar3;
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(unaff_ESI + 8);
      return;
    }
  }
  return;
}
