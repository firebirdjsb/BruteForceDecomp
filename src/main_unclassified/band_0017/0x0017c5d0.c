/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B28F97985DE8E70387E71D2DDEC2AB92CB0C67ADF0CE627B820F43CF43C161F
 * Entry: 0x0017c5d0, Ghidra index: 5051, label: FUN_0017c5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0017c5d0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0017d7c0(param_3);
    FUN_0017d800(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
