/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3D9CD8240A9799BDE804F191B228C34922A8E5304255ACEC55EB138DF9C3C2E
 * Entry: 0x00122fa0, Ghidra index: 3670, label: FUN_00122fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00122fa0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *unaff_ESI;
  float *unaff_EDI;
  
  iVar5 = (**(code **)(*unaff_ESI + 0x40))();
  fVar1 = unaff_EDI[2];
  fVar2 = *(float *)(iVar5 + 0x2c);
  fVar3 = unaff_EDI[1];
  fVar4 = *(float *)(iVar5 + 0x28);
  unaff_ESI[0x1ef] = (int)(*unaff_EDI - *(float *)(iVar5 + 0x24));
  unaff_ESI[0x1f0] = (int)(fVar3 - fVar4);
  unaff_ESI[0x1f1] = (int)(fVar1 - fVar2);
  return;
}
