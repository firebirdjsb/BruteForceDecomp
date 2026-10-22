/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05F080919DC3DCE296EA155EE8E75DC1AB41448AA094E22ACA6D383E4354750B
 * Entry: 0x002173a0, Ghidra index: 7463, label: FUN_002173a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002173a0(float param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  undefined1 local_4 [4];
  
  param_1 = *(float *)(*unaff_EDI + 0xc5c) * param_1;
  iVar2 = unaff_EDI[2];
  if (iVar2 != unaff_EDI[3]) {
    do {
      iVar1 = FUN_00213f40(param_1);
      if (iVar1 == 0) {
        iVar1 = unaff_EDI[3] + -0x14;
        FUN_00218d90(local_4,iVar2 + 0x14,unaff_EDI[3],iVar2,param_1);
        FUN_00218e40(unaff_EDI[3],unaff_EDI + 1,param_1);
        unaff_EDI[3] = unaff_EDI[3] + -0x14;
      }
      else {
        iVar1 = iVar2 + 0x14;
      }
      iVar2 = iVar1;
    } while (iVar1 != unaff_EDI[3]);
  }
  return;
}
