/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C16F7AC82AFFA98A09C4511F6E523746FB4E0D676C204CBD5583C1A9B392DF40
 * Entry: 0x002b8e50, Ghidra index: 9865, label: FUN_002b8e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b8e50(void)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int in_EDX;
  int iVar5;
  int unaff_EBX;
  uint *unaff_EDI;
  
  fVar2 = *(float *)(unaff_EBX + 4);
  iVar5 = in_EDX + *unaff_EDI;
  *(int *)(unaff_EDI[1] + iVar5 * 4) = unaff_EBX;
  uVar3 = *unaff_EDI;
  while( true ) {
    uVar3 = uVar3 >> 1;
    if (uVar3 == 0) {
      return;
    }
    iVar5 = iVar5 >> 1;
    piVar1 = (int *)(unaff_EDI[1] + iVar5 * 4);
    iVar4 = *piVar1;
    if ((iVar4 != 0) && (*(float *)(iVar4 + 4) <= fVar2)) break;
    *piVar1 = unaff_EBX;
  }
  return;
}
