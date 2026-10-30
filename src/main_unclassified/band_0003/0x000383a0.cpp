/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 731EF13AE56C3761BA99831988917C34CEA35060B05023A26CE52FCA8E8E6F48
 * Entry: 0x000383a0, Ghidra index: 369, label: FUN_000383a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00038550(int param_1,int param_2,uint param_3);

int * FUN_000383a0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0x18 != 0) {
      iVar1 = (param_2 - iVar1) / 0x18;
      goto LAB_000383e9;
    }
  }
  iVar1 = 0;
LAB_000383e9:
  FUN_00038550(unaff_EDI,param_2,1,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0x18;
  return param_1;
}
