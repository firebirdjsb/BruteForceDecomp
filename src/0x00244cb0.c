/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5546FD01FE9D192D8CE7690B0157A47487B3711F6B16DBA063412F60B7710A6
 * Entry: 0x00244cb0, Ghidra index: 8077, label: FUN_00244cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00244cb0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0024ab60(param_3);
    FUN_0024a6f0();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
