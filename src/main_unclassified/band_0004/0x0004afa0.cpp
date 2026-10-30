/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF1EF318FCEDBECBF10E247FED0FB58D62981C5729586504E85C2F2C7F1D196D
 * Entry: 0x0004afa0, Ghidra index: 606, label: FUN_0004afa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004b310(int param_1,int param_2,uint param_3);

void FUN_0004afa0(int param_1)

{
  int *unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((iVar1 == 0) || (*(int *)(unaff_EDI + 8) - iVar1 >> 4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - iVar1 >> 4;
  }
  FUN_0004b310(unaff_EDI,param_1,1);
  *unaff_EBX = iVar1 * 0x10 + *(int *)(unaff_EDI + 4);
  return;
}
