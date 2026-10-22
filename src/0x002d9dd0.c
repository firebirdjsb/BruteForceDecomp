/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77D2E216D07B0AF17C7BADEE9D6E3E323EEFCDFE9137E3EE553D5D8C8BA64567
 * Entry: 0x002d9dd0, Ghidra index: 10260, label: FUN_002d9dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d9dd0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int unaff_ESI;
  int unaff_EDI;
  float local_4;
  
  iVar2 = *(int *)(unaff_EDI + 8);
  iVar4 = -1;
  iVar3 = *(int *)(unaff_EDI + 4) + -1;
  local_4 = ABS(*(float *)((iVar2 * 4 + 4) * unaff_ESI + *(int *)(unaff_EDI + 0xc)));
  if (unaff_ESI < iVar3) {
    pfVar5 = (float *)(*(int *)(unaff_EDI + 0xc) + (iVar3 * iVar2 + unaff_ESI) * 4);
    do {
      if (local_4 < ABS(*pfVar5)) {
        iVar4 = iVar3;
        local_4 = ABS(*pfVar5);
      }
      iVar3 = iVar3 + -1;
      pfVar5 = pfVar5 + -iVar2;
    } while (unaff_ESI < iVar3);
    if (-1 < iVar4) {
      FUN_002d9d10(*(undefined4 *)(unaff_EDI + 4));
      iVar2 = *(int *)(unaff_EDI + 0x10);
      uVar1 = *(undefined4 *)(iVar2 + unaff_ESI * 4);
      *(undefined4 *)(iVar2 + unaff_ESI * 4) = *(undefined4 *)(iVar2 + iVar4 * 4);
      *(undefined4 *)(*(int *)(unaff_EDI + 0x10) + iVar4 * 4) = uVar1;
    }
  }
  return;
}
