/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FA6B0C537EAEB180BF82F7FB055CA51B1DDC8D50819810532B36237E8093701
 * Entry: 0x002d4e90, Ghidra index: 10215, label: FUN_002d4e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d4e90(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar5;
  
  iVar1 = *(int *)(unaff_EDI + 0x10);
  uVar2 = *(undefined4 *)(unaff_EDI + 0x24);
  FUN_002d4e50(unaff_ESI + 0x40);
  iVar3 = *(int *)(iVar1 + 0x14);
  *(int *)(unaff_ESI + 0x30) = iVar1;
  *(undefined4 *)(unaff_ESI + 0x34) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_EDI + 0x18);
  *(undefined4 *)(unaff_ESI + 0x3c) = *(undefined4 *)(unaff_EDI + 0x2c);
  piVar4 = *(int **)(iVar3 + 0xa4);
  fVar5 = (float10)(**(code **)(*piVar4 + 8))();
  *(float *)(unaff_ESI + 0x58) = (float)fVar5;
  fVar5 = (float10)(**(code **)(*piVar4 + 4))();
  *(float *)(unaff_EDI + 0x44) = (float)fVar5;
  return;
}
