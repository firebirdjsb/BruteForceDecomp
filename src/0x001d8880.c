/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB31183AE7F1141C8BDE45BA36EAB838F1EF6B53B3601F77742C0E77358FB479
 * Entry: 0x001d8880, Ghidra index: 6434, label: FUN_001d8880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d8880(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x144;
    param_4 = param_4 + -0x144;
    FUN_001d2580();
    FUN_0001f4f0(param_3 + -0x1c,0,0xffffffff);
    param_3 = iVar1;
  } while (iVar1 != param_2);
  *param_1 = param_4;
  return param_1;
}
