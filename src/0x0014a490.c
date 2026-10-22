/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37D518FAD0339757A4F4F600D3EF05DA66CEDE7997DA2223B0345B4F43A94B50
 * Entry: 0x0014a490, Ghidra index: 4289, label: FUN_0014a490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014a490(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EDI;
  float10 fVar2;
  
  FUN_00146190(in_EAX);
  if ((*(int *)(in_EAX + 0x59c) != 0) && (*(float *)(*(int *)(unaff_EDI + 0xc) + 0x1cc) != 0.0)) {
    iVar1 = FUN_00146370();
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_00077e80();
      FUN_00077eb0(iVar1,(float)(fVar2 + (float10)*(float *)(*(int *)(unaff_EDI + 0xc) + 0x1cc)));
    }
  }
  return;
}
