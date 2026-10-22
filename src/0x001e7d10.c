/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 377B2332F38BF45255825C51CF490BB1E823C5B9CC938C2DB225C2FA16E4C4AA
 * Entry: 0x001e7d10, Ghidra index: 6826, label: FUN_001e7d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7d10(void)

{
  float fVar1;
  int in_ECX;
  int *unaff_ESI;
  float10 fVar2;
  float fVar3;
  int iVar4;
  
  fVar3 = *(float *)(*unaff_ESI * 4 + *(int *)(in_ECX + 0xb4));
  fVar1 = *(float *)(*unaff_ESI * 4 + *(int *)(in_ECX + 0xb8));
  iVar4 = unaff_ESI[2];
  if (iVar4 == 0) {
    FUN_001f2910(fVar3);
    return;
  }
  if (iVar4 == 1) {
    if (fVar3 <= 0.0) {
      return;
    }
    if (fVar1 != 0.0) {
      return;
    }
    iVar4 = unaff_ESI[3];
  }
  else if (iVar4 == 2) {
    if (fVar3 == 0.0) {
      return;
    }
    if (fVar1 <= 0.0) {
      return;
    }
    iVar4 = unaff_ESI[3];
    fVar3 = 1.0 - fVar3;
  }
  else {
    if (iVar4 != 3) {
      return;
    }
    iVar4 = unaff_ESI[3];
    fVar3 = -fVar3;
  }
  fVar2 = (float10)FUN_001e7cd0(fVar3,iVar4);
  FUN_001f2910((float)fVar2);
  return;
}
