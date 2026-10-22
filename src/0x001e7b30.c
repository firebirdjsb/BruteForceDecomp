/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F69F95614CE8E771670DD562FD8EEBB892EEE8330CAC57716F75F74251B356C0
 * Entry: 0x001e7b30, Ghidra index: 6823, label: FUN_001e7b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7b30(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  int *unaff_ESI;
  int unaff_EDI;
  undefined4 local_4;
  
  fVar1 = *(float *)(*(int *)(unaff_EDI + 0xb4) + *unaff_ESI * 4);
  bVar4 = (float)unaff_ESI[3] < fVar1;
  fVar2 = *(float *)(*(int *)(unaff_EDI + 0xb8) + *unaff_ESI * 4);
  iVar3 = unaff_ESI[2];
  if (iVar3 == 0) {
    local_4 = 0x3f800000;
    if (!bVar4) {
      local_4 = 0;
    }
    FUN_001f2910(local_4);
    return;
  }
  if (iVar3 == 1) {
    if ((bVar4) && (fVar2 <= (float)unaff_ESI[3])) {
      FUN_001f2910(0x3f800000);
      return;
    }
  }
  else if (iVar3 == 2) {
    if ((!bVar4) && ((float)unaff_ESI[3] < fVar2)) {
      FUN_001f2910(0x3f800000);
      return;
    }
  }
  else if (iVar3 == 3) {
    local_4 = 0x3f800000;
    if ((float)unaff_ESI[3] < fVar1) {
      local_4 = 0;
    }
    FUN_001f2910(local_4);
  }
  return;
}
