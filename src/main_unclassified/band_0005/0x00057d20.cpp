/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B57D3AB1A258135213E60B379C16245A27BD67A67F31D4B98E50EBDC485DF8AD
 * Entry: 0x00057d20, Ghidra index: 856, label: FUN_00057d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00057e10(int param_1,int param_2,uint param_3);

int * FUN_00057d20(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_2 - iVar1) / 0x1c;
      goto LAB_00057d6d;
    }
  }
  iVar1 = 0;
LAB_00057d6d:
  FUN_00057e10(unaff_EDI,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)(unaff_EDI + 4);
  return param_1;
}
