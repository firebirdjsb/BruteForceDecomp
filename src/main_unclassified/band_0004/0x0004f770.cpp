/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 752E854643132E228A0475FF78BB994E320BDA657E4966FE0587FE9C65C21E95
 * Entry: 0x0004f770, Ghidra index: 691, label: FUN_0004f770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0004f770(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EDI + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_2 - iVar1) / 0xc;
      goto LAB_0004f7b7;
    }
  }
  iVar1 = 0;
LAB_0004f7b7:
  FUN_0004fbc0(param_2,param_3);
  *param_1 = *(int *)(unaff_EDI + 4) + iVar1 * 0xc;
  return param_1;
}
