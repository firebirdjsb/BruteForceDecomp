/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F77102C5CED0EA00735754F4F27D25146A5E1D5C048C673A961916A506551AEC
 * Entry: 0x0010ddf0, Ghidra index: 3506, label: FUN_0010ddf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010ddf0(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  float *unaff_EDI;
  float10 extraout_ST0;
  float fVar2;
  
  iVar1 = *(int *)(unaff_ESI + 0x80);
  fVar2 = (float)(in_EAX / iVar1) * *(float *)(unaff_ESI + 0x78);
  FUN_002ebf10(in_EAX % iVar1,in_EAX / iVar1,fVar2,iVar1);
  FUN_002ebf10();
  FUN_002ebf10();
  iVar1 = FUN_002ebf10();
  unaff_EDI[1] = (float)iVar1 + fVar2;
  *unaff_EDI = (float)extraout_ST0;
  return;
}
