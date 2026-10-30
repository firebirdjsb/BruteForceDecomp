/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B9B78353D6A7B846639055CA009B7DE2F8D4985B643E360241F5DC29A8101A8
 * Entry: 0x000b6900, Ghidra index: 2194, label: FUN_000b6900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000b6900(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  float *pfVar6;
  
  iVar1 = *(int *)(unaff_ESI + 0xa0);
  if (*(int *)(iVar1 + 0xc) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) / 0x30;
  }
  uVar2 = *(uint *)(unaff_ESI + 0x94);
  if (uVar2 < uVar5) {
    iVar3 = *(int *)(unaff_ESI + 0x6c + *(int *)(unaff_ESI + 0x98) * 4);
    if (*(int *)(iVar3 + 0xc0) == 1) {
      iVar4 = *(int *)(unaff_ESI + 0x98) + 1;
      *(int *)(unaff_ESI + 0x98) = iVar4;
      if (1 < iVar4) {
        *(undefined4 *)(unaff_ESI + 0x98) = 0;
      }
      *(uint *)(unaff_ESI + 0x94) = uVar2 + 1;
      pfVar6 = (float *)(uVar2 * 0x30 + *(int *)(iVar1 + 0xc));
      FUN_000b56f0(iVar3,pfVar6);
      *(float *)(unaff_ESI + 0x7c) = *(float *)(unaff_ESI + 0x84) + *pfVar6;
      return 1;
    }
    *(undefined4 *)(unaff_ESI + 0x7c) = 0x3f800000;
    return 1;
  }
  return 0;
}
