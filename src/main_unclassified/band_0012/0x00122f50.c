/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F8ECB28FD826381A14CBD64833D9397EC78DA89798BA2E300F643426B953B45
 * Entry: 0x00122f50, Ghidra index: 3669, label: FUN_00122f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00122f50(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *unaff_ESI;
  float *unaff_EDI;
  
  iVar5 = (**(code **)(*unaff_ESI + 0x40))();
  fVar1 = (float)unaff_ESI[0x1f1];
  fVar2 = *(float *)(iVar5 + 0x2c);
  fVar3 = (float)unaff_ESI[0x1ef];
  fVar4 = *(float *)(iVar5 + 0x24);
  unaff_EDI[1] = (float)unaff_ESI[0x1f0] + *(float *)(iVar5 + 0x28);
  unaff_EDI[2] = fVar1 + fVar2;
  *unaff_EDI = fVar3 + fVar4;
  return;
}
